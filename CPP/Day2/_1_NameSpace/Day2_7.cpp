#include<stdio.h>
namespace na{
    int  num1=10;;
    int num2=20;
}

namespace na{
    int num3=30;
    int num4=40;
}

int main(){
    printf("num1 : %d\n",na::num1);
    printf("num1 : %d\n",na::num2);
    printf("num1 : %d\n",na::num3);
    printf("num1 : %d\n",na::num4);
}

/*

The same namespace can be declared/reopened multiple times; all declarations become members of that same namespace.

---------------------
num1 : 10
num1 : 20
num1 : 30
num1 : 40

*/
