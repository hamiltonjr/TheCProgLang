#ifndef STACK_H
#define STACK_H
#define MAXVAL 100

double val[MAXVAL];
int sp = 0;

void push(double);
double pop(void);
void clear(void);
bool empty(void);
double top(void);
void show_top(void);
void show_stack(void);
void duplicate(void);
void swap(void);

#endif // STACK_H
