#include <stdio.h>

int main(){
    int i = 10;

    void *pi = &i;
    printf("pi : %p , &i : %p\n" , pi , &i);

    int *i_ptr = (int *)pi;
    printf("i_ptr : %p , i_ptr value : %d\n" , i_ptr , *i_ptr);
    return 0;
}