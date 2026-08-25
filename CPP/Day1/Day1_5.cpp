#include<stdio.h>

struct Employee{
    char name[20];
    int age;
    double salary;
};

int main(){
    Employee emp;

    printf("Enter the Name : ");
    scanf("%s",emp.name);
    // getch(emp.name);

    printf("Enter the Age : "); 
    scanf("%d",&emp.age); 

    printf("Enter the Salary : "); 
    scanf("%lf",&emp.salary); 

    
    printf("Name : %s\n",emp.name);
    printf("Age : %d\n",emp.age); 
    printf("Salary : %.2lf",emp.salary); 

    return 0;
}
