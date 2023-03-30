/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int add(int x , int y){
    return x+y;
}

int sub(int x, int y){
    return x-y;
}

int mul(int x, int y){
    return x*y;
}

int div(int x, int y){
    return x/y;
}

typedef int (*INT_Func)(int,int);

int calc( INT_Func func_ptr, int x,int y){
    return func_ptr(x,y);
}


int main() {
    printf("sum = %d\n",calc(add , 4, 2));
    printf("dif = %d\n",calc(sub ,4,2));
    printf("product = %d\n", calc(mul,4,2));
    printf("quotient = %d\n", calc(div,4,2));
}












