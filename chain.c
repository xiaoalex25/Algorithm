#include <stdlib.h>
#include <stdio.h>
#ifndef _List_H
struct Node;
typedef struct Node *Ptr;

Ptr makeEmpty(Ptr L);
int isEmpty(Ptr L);
int isLast(Ptr p, Ptr L);
Ptr find(int x, Ptr L);
void delete(int x, Ptr L);
Ptr findPrevious(int x, Ptr L);
void insert(int x, Ptr L, Ptr p);
void deletePtr(Ptr L);
Ptr header(Ptr L);
Ptr first(Ptr L);
Ptr advance(Ptr p);
int retrieve(Ptr p);
#endif

struct Node{
    int elem;
    Ptr next;
};

/**
 * 判断链表是否为空
 *
 * @param L
 * @return
 */
int isEmpty(Ptr L) {
    return L -> next == NULL;
}

int isLast(Ptr p, Ptr L) {
    return p -> next == NULL;
}

Ptr find(int x, Ptr L) {
    Ptr p;
    p = L -> next;
    while(p != NULL && p-> elem != x)
        p = p -> next;
    return p;
}

Ptr findPrevious(int x, Ptr L) {
    Ptr p;
    p = L;
    while(p -> next != NULL && p -> next -> elem != x)
        p = p -> next;
    return p;
}

void delete(int x, Ptr L) {
    Ptr p, tempCell;
    p = findPrevious(x, L);
    tempCell = p -> next;
    p -> next = tempCell -> next;
    free(tempCell);
}

void insert(int x, Ptr L, Ptr p) {
    Ptr tempCell;
    tempCell = malloc(sizeof(struct Node));
    if (tempCell == NULL) {
        printf("Out of space!");
    }
    tempCell -> elem = x;
    tempCell -> next = p -> next;
    p -> next = tempCell;
}