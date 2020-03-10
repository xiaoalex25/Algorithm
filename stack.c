#include <stdlib.h>
#include <stdio.h>
#ifndef _Stack_h
struct StackRecord;
typedef struct StackRecord *Stack;

int isEmpty(Stack S);
int isFull(Stack S);
Stack createStack(int max);
void disposeStack(Stack);
void makeEmpty(Stack S);
void push(int x, Stack S);
int top(Stack S);
void Pop(Stack S);
int TopAndPop(Stack S);
#endif

#define EmptyTos -1
#define minStackSize 5

struct StackRecord{
    int capacity;
    int topOfStack;
    int *array;
};

Stack createStack(int max) {
    Stack S;
    if (max < minStackSize)
        printf("Stack size is too small");
    S = malloc(sizeof(struct StackRecord));
    if (S == NULL)
        printf("out of space");
    S -> array = malloc(sizeof(int) * max);
    if (S -> array == NULL)
        printf("out of space");
    S -> capacity = max;
    makeEmpty(S);
    return S;
}

void makeEmpty(Stack S) {
    S -> topOfStack = EmptyTos;
}

int isEmpty(Stack S) {
    return S -> topOfStack = EmptyTos;
}

void push(int x, Stack S) {
    if (isFull(S))
        printf("Full Stack");
    S -> array[++S -> topOfStack] = x;
}