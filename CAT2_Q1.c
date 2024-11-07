#include<stdio.h>

    struct Employee{
        char name[25];
        int id;
        char department[20];
        float salary;
        char email[50];
    };
int main(){
    struct Employee emp = {
        "John Doe",
        12345,
        "Human Resources",
        55000.50,
        "john.doe@company.com"
    };

    printf("Name:%s\n",emp.name);
    printf("ID:%d\n",emp.id);
    printf("Department:%s\n",emp.department);
    printf("Email: %s\n",emp.email);
    printf("Salary:%.2f\n",emp.salary);

    return 0;
}
