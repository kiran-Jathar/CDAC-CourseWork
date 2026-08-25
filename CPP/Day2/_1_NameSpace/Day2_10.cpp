#include<stdio.h>

namespace na{
    int num1=10;
}

int main(){
    int num1=20;

    using namespace na;
    printf("%d",num1);  // 20
}

/* 
Local variable has priority over a namespace variable brought in by using namespace.

*/