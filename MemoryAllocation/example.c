#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = (int *)malloc(sizeof(int));

    if(p == NULL)
    {
        return 1;
    }

    printf("%p\n" , p);
    *p = 132;

    printf("%d\n" , *p);

    free(p);
    return 0;
}