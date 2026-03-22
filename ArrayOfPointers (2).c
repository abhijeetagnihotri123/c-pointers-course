#include <stdio.h>
#include <malloc.h>

void main(){

    char *p[10];
    printf("p : %p\n" , p);

    for(int i = 0 ; i < 10 ; i++){
        p[i] = (char *)malloc(sizeof(char));
        *p[i] = i + 1;
        printf("p[%d]: %p, *p[%d] : %d\n" , i , p[i] , i , *p[i]);
    }

    for(int i = 0 ; i < 10 ; i++){
        free(p[i]);
    }

}