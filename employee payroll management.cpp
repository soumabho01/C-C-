//23BCE7546
#include <stdio.h>

struct Employee {
    char name[50];
    int empID;
    float basicSalary;
    float allowances;
    float grossSalary;
};

void input(struct Employee *e) {
    printf("Enter employee's name: ");
    scanf("%s", e->name);
    printf("Enter employee ID: ");
    scanf("%d", &e->empID);
    printf("Enter basic salary: ");
    scanf("%f", &e->basicSalary);
    printf("Enter allowances: ");
    scanf("%f", &e->allowances);
    e->grossSalary = e->basicSalary + e->allowances;
}

void displayHighEarners(struct Employee e[], int n, float threshold) {
    for(int i = 0; i < n; i++) {
        if(e[i].grossSalary > threshold) {
            printf("\n%s (Emp ID: %d) earns a gross salary of %.2f.\n", e[i].name, e[i].empID, e[i].grossSalary);
        }
    }
}

int main() {
    struct Employee employees[5];
    for(int i = 0; i < 5; i++) {
        input(&employees[i]);
    }

    float threshold = 50000;
    printf("Employees earning more than %.2f:\n", threshold);
    displayHighEarners(employees, 5, threshold);

    return 0;
}

