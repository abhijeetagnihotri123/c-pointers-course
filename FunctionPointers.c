#include <stdio.h>

void function_1(){
    printf("Inside function with name : %s\n" , __func__);
}

void function_2(){
    printf("Inside function with name : %s\n" , __func__);
}
// Function pointer demo with parameter
void function_3(int x){
    printf("Inside function with integer parameter : %d and name %s\n" , x , __func__);
}

void function_4(int x){
    printf("Inside function with integer parameter : %d and name %s\n" , x , __func__);
}

typedef void (*func_pointer1)(int);

int main(){

    void (*func_pointer)();

    func_pointer = function_1;
    func_pointer();

    func_pointer = function_2;
    func_pointer();

    func_pointer = function_3;
    func_pointer(3);


    func_pointer1 fp;
    fp = function_4;
    fp(4);

}