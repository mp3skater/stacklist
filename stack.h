#ifndef __STACK_H__
#define __STACK_H__

int pop(void);
int push(int);

typedef
  struct stacklist_s {
    int value;
    struct stacklist_s *next;
  } list_t;

#endif
