//23BCE7546-Soumabha Sarkar
#include <stdio.h>
#include <stdlib.h>
struct Employee {
    int code;
    char name[50];
    float salary;
    int deptNo;
    char hireDate[15];
};
void displayBySalary(struct Employee *employees, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (employees[i].salary > employees[j].salary) {
                struct Employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }}}
    printf("Employee Records in Ascending Order of Salary:\n");
    for (int i = 0; i < n; i++) {
        printf("Code: %d, Name: %s, Salary: %.2f, Dept No: %d, Hire Date: %s\n",
               employees[i].code, employees[i].name, employees[i].salary, employees[i].deptNo, employees[i].hireDate);
    }}

void displayByDepartment(struct Employee *employees, int n, int dept) {
    printf("Employees in Department %d:\n", dept);
    for (int i = 0; i < n; i++) {
        if (employees[i].deptNo == dept) {
            printf("Code: %d, Name: %s, Salary: %.2f, Hire Date: %s\n",
                   employees[i].code, employees[i].name, employees[i].salary, employees[i].hireDate);
        }}}
void displayAboveAverageSalary(struct Employee *employees, int n) {
    float totalSalary = 0;
    for (int i = 0; i < n; i++) {
        totalSalary += employees[i].salary;
    }
    float averageSalary = totalSalary / n;

    printf("Employees with Salary > 70%% of Average Salary (%.2f):\n", averageSalary * 0.7);
    for (int i = 0; i < n; i++) {
        if (employees[i].salary > (averageSalary * 0.7)) {
            printf("Code: %d, Name: %s, Salary: %.2f\n", employees[i].code, employees[i].name, employees[i].salary);
        }}}
int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee *employees = (struct Employee *)malloc(n * sizeof(struct Employee));
    for (int i = 0; i < n; i++) {
        printf("Enter employee code, name, salary, department number and hire date for employee %d:\n", i + 1);
        scanf("%d %s %f %d %s", &employees[i].code, employees[i].name, &employees[i].salary, &employees[i].deptNo, employees[i].hireDate);
    }
    displayBySalary(employees, n);
        int dept;
    printf("Enter department number to display employees: ");
    scanf("%d", &dept);
    displayByDepartment(employees, n, dept);
    displayAboveAverageSalary(employees, n);
    free(employees); 
    return 0;
}

