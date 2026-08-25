#include<stdio.h>
namespace na{
    int num1=10;    
}
int num1=20;

int main(){

    using namespace na;
    printf("num2 : %d",::num1);  // 20
    printf("\nnum1 : %d",na::num1);  // 10

}
/*

:: at the beginning means global scope;
 na:: means the na namespace.

*/