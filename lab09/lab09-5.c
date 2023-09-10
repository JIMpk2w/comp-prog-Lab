#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;

void printList(node *pList) {
    while (pList != NULL){
        printf("%d ", pList->data);
        pList = pList->next;
    }
}

void insertNode(node **head, int value) {
    node *newNode, *tmp = *head;
    newNode = (node*)malloc(sizeof(node));
    newNode->data = value;
    newNode->next = NULL;
    if (*head == NULL){
        *head = newNode;
    }else{
        while (tmp->next != NULL && tmp->next->data < newNode->data){
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
        if (tmp->data > newNode->data){
            newNode->data = tmp->data;
            tmp->data = value;
        }
    }
}

int main() {
    int i, value;
    node *pList=NULL;

    for (i = 0; i < 10; i++) {
        scanf(" %d", &value);
        insertNode(&pList, value);
    }
    printList(pList);
}