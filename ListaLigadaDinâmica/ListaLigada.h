#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

typedef struct {
    Node* head;
    Node* tail;
} LinkedList;

void insertSorted(LinkedList* source, LinkedList* dest, Node* node);
void moveMaxToK(LinkedList* L, LinkedList* K);

#endif
