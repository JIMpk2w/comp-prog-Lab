#include <stdio.h>
#include <stdlib.h>

typedef struct K_{
    int k;
    struct K_ *next;
}K;

K *h = NULL;

void inK(int val) {
K *c = NULL, *b = NULL, *tmp = NULL;
    if(h == NULL){
        tmp = (K *)malloc(sizeof(K));
        tmp->k = val;
        tmp->next = NULL;
        h = tmp;
        return;
    }
    for(c = h; c != NULL; c = c->next) {
        if ((h)->k >= val){
            tmp = (K *)malloc(sizeof(K));
            tmp->k = val;
            tmp->next = h;
            h = tmp;
            break;
        }
        if (c->k >= val) {
            tmp = (K *)malloc(sizeof(K));
            tmp->k = val;
            tmp->next = b->next;
            b->next = tmp;
            break;
        }
        if (c->next == NULL) {
            tmp = (K *)malloc(sizeof(K));
            tmp->k = val;
            tmp->next = NULL;
            c->next = tmp;
            break;
        }
        b = c;
    }

}

void delK(int k) {
    K *tmp, *prev, *del;

    tmp = h;
    prev = NULL;

    while (tmp != NULL) {
        if (tmp->k == k) {
            del = tmp;
            tmp = tmp->next;
            if (prev != NULL) {
                prev->next = tmp;
            } else {
                h = tmp;
            }
            free(del);
        } else {
            prev = tmp;
            tmp = tmp->next;
        }
    }
}

void prtK(){
    K *tmp;
    printf("[ ");
    for(tmp = h; tmp; tmp = tmp -> next){
        printf("%d ", tmp -> k);
    }printf("]\n");
}

int main(){
    int k = 0;
    char mode;

    while(mode != 'q'){
        printf("input> ");
        scanf(" %c", &mode);
        if(mode == 'p') prtK();
        if(mode == 'i'){
            scanf("%d", &k);
            inK(k);
        }
        if(mode == 'd'){
            scanf("%d", &k);
            delK(k);
        }
    }
}