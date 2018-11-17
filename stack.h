//功能：创建新的栈、检验栈是否为空、入栈、出栈、释放空栈的空间
#ifndef STACK_INCLUDED
#define STACK_INCLUDED

typedef struct Stack_T *Stack_T; //typedef：为现有类型创建别名

extern Stack_T Stack_new (void);
extern int     Stack_empty(Stack_T stk);
extern void    Stack_push(Stack_T stk, void *x);
extern void   *Stack_pop(Stack_T stk);
extern void    Stack_free(Stack_T *stk);

#undef
#endif