#ifndef _LIST_H
struct Node;
typedef struct Node *PtrToNode;
typedef struct PtrToNode List;//list是头节点
typedef struct PtrToNode Position;

List makeEmpty(List L);
int isEmpty(List L);
int isLast(Position p, List L);
Position find(int x, List L);
void delete(int x, List L);
Position findPrevious(int x, List L);
void insert(int x, List L, Position p);
void deleteList(List L);
Position header(List L);
Position first(List L);
Position advance(Position p);
int retrieve(Position p);
#endif

struct Node{
    int x;
    PtrToNode next;
};