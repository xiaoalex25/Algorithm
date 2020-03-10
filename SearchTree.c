#include <stdlib.h>
#include <stdio.h>
#ifndef _Tree_H
struct TreeNode;
typedef struct TreeNode *Position;
typedef struct TreeNode *SearchTree;

SearchTree makeEmpty(SearchTree T);
Position find(int x, SearchTree T);
Position findMax(SearchTree T);
Position findMin(SearchTree T);
SearchTree insert(int x, SearchTree T);
SearchTree deleteElem(int x, SearchTree T);
int retrieve(Position P);
#endif

struct TreeNode{
    int elem;
    SearchTree left;
    SearchTree right;
};

SearchTree makeEmpty(SearchTree T) {
    if (T != NULL ) {
        makeEmpty(T -> left);
        makeEmpty(T -> right);
        free(T);
    }
    return NULL;
}

Position find(int x, SearchTree T) {
    if (T == NULL)
        return NULL;
    if (x < T -> elem)
        return find(x, T -> left);
    else if (x > T -> elem)
        return find(x, T ->right);
    else
        return T;
}

SearchTree insert(int x, SearchTree T) {
    if (T == NULL) {
        T = malloc(sizeof(struct TreeNode));
        if (T == NULL)
            printf("out of space");
        else {
            T -> elem = x;
            T -> right = T -> left = NULL;
        }
    } else {
        if (x < T -> elem)
            T ->  left = insert(x, T -> left);
        else if (x > T -> elem)
            T -> right = insert(x, T -> right);
    }
    return T;
}
