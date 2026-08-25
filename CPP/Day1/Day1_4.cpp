#include<stdio.h>

int main1()
{
    //local structure 
    // blueprint 
    struct Employee //declaration 
    {
        char name[20]; 
        int age; 
        double salary; 
    }; 
    //int a; 
    //struct Employee emp = {"Aditya",31,1000.00}; 

    Employee emp = {"Aditya",31,1000.00}; //writing struct keyword is optional 
    printf("Name : %s\n",emp.name);
    printf("Age : %d\n",emp.age); 
    printf("Salary : %.2lf",emp.salary);      
    return 0;
    
}
