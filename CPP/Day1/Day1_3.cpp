#include<stdio.h>

int swap(int *x,int *y){
    printf("%d",x);
    printf("");
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a=10, b=20;

    printf("Before Swapping : \n");
    printf(" a : %d , b : %d\n",a,b);

    swap(&a,&b);

    printf("After Swapping : \n");
    printf(" a : %d , b : %d",a,b);
    return 0;

}