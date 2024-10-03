#ifndef __STACK_H__
#define __STACK_H__

void* pop(void);
int push(void* new_value);

typedef struct stacklist_s {
    void* value;
    struct stacklist_s* next;
} list_t;

#endif
