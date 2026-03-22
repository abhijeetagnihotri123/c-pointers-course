#include "math_library.h"
#include <stdio.h>

static void add(int a , int b){
    printf("Function called %s , result : %d\n" , __func__ , (a + b));
}

static void sub(int a , int b){
    printf("Function called %s , result : %d\n" , __func__ , (a - b));
}

static void mul(int a , int b){
    printf("Function called %s , result : %d\n" , __func__ , (a * b));
}

static void div(int a , int b){
    printf("Function called %s , result : %d\n" , __func__ , (a / b));
}

typedef void (*func_ptr)(int,int);

func_ptr fp[4] = {add , sub , mul , div};

void execute_operation(int operation , int a , int b){
    fp[operation](a , b);
}