#include <stdio.h>

struct my_struct{
    long long int a;
    float b;
    int c;
};

void main(){

    struct my_struct var = {
        .a = 1024,
        .b = 2.5,
        .c = -1
    };

    struct my_struct *ptr = &var;

    printf("Address of the structure : [ %p ]\n" , ptr);

    //Accessing values via dereferencing

    (*ptr).a += 1;
    (*ptr).b += 1;
    (*ptr).c -= 1;

    printf("Printing values of val to check values actually changed\n");
    printf("var values : %li , %f , %d\n" , var.a , var.b , var.c);
    printf("pointer values : %li , %f , %d\n" , (*ptr).a , (*ptr).b , (*ptr).c);

    //Using -> operator for dereferencing

    ptr->a += 1;
    ptr->b += 1;
    ptr->c -= 1;
    printf("Printing values of val to check values actually changed\n");
    printf("var values : %li , %f , %d\n" , var.a , var.b , var.c);
    printf("pointer values : %li , %f , %d\n" , (*ptr).a , (*ptr).b , (*ptr).c);

}