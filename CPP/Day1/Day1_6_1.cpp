#include <stdio.h>

struct Employee
{
    char name[20];
    int age;
    double salary;
};

void acceptRecord(struct Employee emp)
{
    printf("Name : ");
    scanf("%s", emp.name);

    printf("Age : ");
    scanf("%d", &emp.age);

    printf("Salary : ");
    scanf("%lf", &emp.salary);

    printf("\nInside Function:\n");
    printf("Name : %s\n", emp.name);
    printf("Age : %d\n", emp.age);
    printf("Salary : %.2lf\n", emp.salary);
}

int main()
{
    struct Employee emp;

    acceptRecord(emp);

    printf("\nInside Main:\n");
    printf("Name : %s\n", emp.name);
    printf("Age : %d\n", emp.age);
    printf("Salary : %.2lf\n", emp.salary);

    return 0;
}