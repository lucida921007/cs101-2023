#include <stdio.h>
#include <string.h>

typedef struct employee {
    int em_id; //100
    char em_name[10]; //IU lee
    int em_age; //18
    char em_phone[12];//0937123456
    float em_salary;//1000.30
} employee_t;

int main() {
    employee_t my_employee;
    my_employee.em_id = 100;
    strcpy(my_employee.em_name, "IU Lee");
    my_employee.em_age = 18;
    strcpy(my_employee.em_phone, "12345678");
    my_employee.em_salary = 1000.30;
    printf("%d\n",(int)sizeof(employee_t));
    //printf("my_employee.em_name: %s\n", my_employee.em_name);
    //employee_info(my_employee.em_id);
    employee_info(my_employee);
}

void employee_info(employee_t my_employee){
   printf("my_employee.em_id: %d\n", my_employee.em_id);
   printf("my_employee.em_name: %s\n", my_employee.em_name);
   printf("my_employee.em_age: %d\n",my_employee.em_age);
   printf("my_employee.em_phone: %s\n",my_employee.em_phone);
   printf("my_employee.em_salary: %d\n",my_employee.em_salary);
}
