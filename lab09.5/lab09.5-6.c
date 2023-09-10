#include <stdio.h>
#include <stdlib.h>

typedef struct list_{
    int k;
    struct list_ *next;
}list;

list *h = NULL;

void inK(int val) {
list *c = NULL, *b = NULL, *tmp = NULL;
    if(h == NULL){
        tmp = (list*)malloc(sizeof(list));
        tmp->k = val;
        tmp->next = NULL;
        h = tmp;
        return;
    }
    for(c = h; c != NULL; c = c->next) {
        if ((h)->k >= val){
            tmp = (list*)malloc(sizeof(list));
            tmp->k = val;
            tmp->next = h;
            h = tmp;
            break;
        }
        if (c->k >= val) {
            tmp = (list*)malloc(sizeof(list));
            tmp->k = val;
            tmp->next = b->next;
            b->next = tmp;
            break;
        }
        if (c->next == NULL) {
            tmp = (list*)malloc(sizeof(list));
            tmp->k = val;
            tmp->next = NULL;
            c->next = tmp;
            break;
        }
        b = c;
    }

}

void delK(int k) {
    list *tmp, *prev, *del;

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
    list *tmp;
    printf("[ ");
    for(tmp = h; tmp; tmp = tmp -> next){
        printf("%d ", tmp -> k);
    }printf("]\n");
}

int main(){
    int num = 0;
    char mode;

    while(mode != 'q'){
        printf("input> ");
        scanf(" %c", &mode);
        if(mode == 'p') prtK();
        if(mode == 'i'){
            scanf("%d", &num);
            inK(num);
        }
        if(mode == 'd'){
            scanf("%d", &num);
            delK(num);
        }
    }
}