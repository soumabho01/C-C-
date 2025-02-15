//23BCE7546-Soumabha Sarkar
#include <stdio.h>
#include <string.h>
union Salary {
    float monthlySalary;
    int hoursWorked;
    double contractPayment;
};
struct Employee {
    char name[50];
    int id;
    char employmentType[20];
    union Salary salaryInfo;
};
void inputEmployee(struct Employee *emp) {
    printf("Enter employee name, ID, type of employment (full-time/part-time/contract): ");
    scanf("%s %d %s", emp->name, &emp->id, emp->employmentType);
    if (strcmp(emp->employmentType, "full-time") == 0) {
        printf("Enter monthly salary: ");
        scanf("%f", &emp->salaryInfo.monthlySalary);
    } else if (strcmp(emp->employmentType, "part-time") == 0) {
        printf("Enter hours worked: ");
        scanf("%d", &emp->salaryInfo.hoursWorked);
    } else if (strcmp(emp->employmentType, "contract") == 0) {
        printf("Enter contract payment: ");
        scanf("%lf", &emp->salaryInfo.contractPayment);
    }}
void displayEmployee(struct Employee emp) {
    printf("Name: %s, ID: %d, Employment Type: %s, Salary: ", emp.name, emp.id, emp.employmentType);
    if (strcmp(emp.employmentType, "full-time") == 0) {
        printf("%.2f\n", emp.salaryInfo.monthlySalary);
    } else if (strcmp(emp.employmentType, "part-time") == 0) {
        printf("%d hours worked\n", emp.salaryInfo.hoursWorked);
    } else if (strcmp(emp.employmentType, "contract") == 0) {
        printf("%.2lf\n", emp.salaryInfo.contractPayment);
    }}
int main() {
    struct Employee emp;
    inputEmployee(&emp);
    displayEmployee(emp);
    return 0;
}

