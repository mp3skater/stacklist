#include <stdio.h>
#include "stack.h"

int main(void)
{
	push(1);
	printf("\npush(1);\n");
	
	push(2);
	printf("\npush(2);\n");

	push(23);
	printf("\npush(23);\n");

	push(24);
        printf("\npush(24);\n");
        
	push(25);
        printf("\npush(25);\n");

	push(26);
        printf("\npush(26);\n");

        push(7);
        printf("\npush(7);\n");

	printf("\n\npop(); %i\n\npop(); %i\n\npop(); %i\n\npop; %i\n\npop; %i\n\npop; %i\n\npop; %i\n", pop(), pop(), pop(), pop(), pop(), pop(), pop());

	return 0;
}
