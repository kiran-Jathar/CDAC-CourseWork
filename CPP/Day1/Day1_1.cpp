#include<stdio.h>

// void print(); // gobal declaration
int main(){

    void print( );  //local declaration 

    printf("hello world\n");
    print();
   
    return 0;
}

 void print()
{
    printf("Function Defination");
}


/*
hello world
Function Defination
*/