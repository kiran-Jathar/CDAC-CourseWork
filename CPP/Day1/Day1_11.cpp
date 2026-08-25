#include<stdio.h>
int main(){
    const int num=10; //const variable must be initilize at the time of declration
    printf("Num : %d",num);

    // num=11;  // NOT OK bcz its a const variable
    
    return 0;
}