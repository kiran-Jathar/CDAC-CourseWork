#include<stdio.h>

void swap(int x,int y){

    int temp;
    temp= x;
    x=y;
    y=temp;
}

int main(){
    int a=10, b=20;
    printf("Before Swapping : \n");
    printf("a : %d , b: %d\n",a,b);
    swap(a,b);
    printf("After Swappping \n");

    printf("a : %d , b : %d",a,b);
    return 0;
}

// Pass by Value = Copy is passed → Original value doesn't change.

/*

Before Swapping : 
a : 10 , b: 20

After Swappping 
a : 10 , b : 20

*/