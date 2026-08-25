#include<stdio.h>
int num1=10;

int main(){
    int num1=20;   // functional  scope
    
    printf("num1 : %d \n",num1);  // 20 

    {
        int num1=30;  // block scope
        printf("num1 : %d\n",num1);  // 30
        printf("num1 : %d\n",::num1);  //10

    }

    return 0;
}



/*
Scope = where variable can be accessed.
Nearest variable gets priority.
:: = global variable.
*/