/*
 * Module: stacklist.c
 * Author: mp3skater
 * Version: 0.1
 * Last edit: 2024/01/18
 * Lizence: MIT Lizence
 * Changelog:
 * 	2024/01/18 -- mp3skater: Initial commit
 * 	2024/01/22 -- mp3skater: Finishing push(), correct stack.h to include return value, changing int inhalt to int value, starting pop();
 * 	2024/01/24 -- mp3skater: Implement free() and excurrent element to reset last pointer.
 * 	2024/01/25 -- mp3skater: Despared try to debug the code as push allways gives the latest number.
 * 	2024/01/31 -- mp3skater: Tidyed up code, corrected push to get the last inserted value not the last value of the list
 * 	2024/02/17 -- mp3skater: Changed value type to double, cleaned up pop(), changed error message in double
 *  2024/10/02 -- mp3skater: Used void pointer to store data for easy changes down the line
 */

#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

static list_t* head = NULL; // The first element of the stack

/*
 * Pushes a new element onto the stack.
 * Parameter: new_value (pointer to the new value to be added to the stack).
 * Return: -1 on error (e.g., memory allocation failure), 0 on success.
 */
int push(void* new_value)
{
    // One Element
    if (head == NULL) {
        head = (list_t*)malloc(sizeof(list_t));
        
        if (head == NULL) {
            fprintf(stderr, "--> Error: Couldn't allocate memory, probably out of allocated memory.");
            return -1;
        }

        head->next = NULL;
        head->value = new_value;
    } else {
        // Multiple Elements
        list_t* new_l = (list_t*)malloc(sizeof(list_t));

        if (new_l == NULL) {
            fprintf(stderr, "--> Error: Couldn't allocate memory, probably out of allocated memory.");
            return -1;
        }

        new_l->value = new_value;
        new_l->next = head;
        head = new_l;
    }

    return 0;
}

/*
 * Pops the top element from the stack and returns the value (as a void*).
 * Return: Pointer to the popped value, or NULL if the stack is empty.
 */
void* pop(void)
{
    if (head == NULL) {
        fprintf(stderr, "Stacklist Notice: No elements available to pop().");
        return NULL;
    }

    list_t* next_l = head->next;
    void* temp_value = head->value;

    free(head);
    head = next_l;

    return temp_value;
}