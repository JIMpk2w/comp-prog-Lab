#include <stdio.h>
#include <stdlib.h>

#define SIZE  97

typedef struct nodeType {
    int   item;
    struct nodeType* next;
} Node;

void inK(Node **h, int val) {
    Node *tmp = (Node *)malloc(sizeof(Node));
    tmp -> item = val;
    tmp -> next = *h;
    *h = tmp;
}

void prtK(Node **h){
    Node *tmp;
    for(int i = 0; i < SIZE; i++){
        Node *head = h[i];
        printf("KEY%3d: ", i);
        for(tmp = head; tmp; tmp = tmp -> next){
            printf("%d ", tmp -> item);
        }
        printf("\n");
    }
}

int main(){
    Node **h = calloc(SIZE, sizeof(Node *));
    int k, g;
    char num;

    while(num != 'q'){
        printf("input> ");
        scanf(" %c", &num);
        if(num == 'p'){
            prtK(h);
        } 
        
        if(num == 'a'){
            scanf("%d", &k);
            g = k % SIZE;
            inK(&h[g],k);
        }
    }
}