#include <stdio.h>
#include <string.h>

union Student {
    char name[50];
    int rollno;
    float cgpa;
};

struct StudentDetails {
    union Student student;
    float cgpa;
};

// Function to sort students based on CGPA
void sortByCGPA(struct StudentDetails students[], int n) {
    struct StudentDetails temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].cgpa > students[j + 1].cgpa) {
                // Swap if CGPA is greater
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// Function to print student details
void printStudents(struct StudentDetails students[], int n) {
    printf("Name\tRoll No\tCGPA\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t%.2f\n", students[i].name, students[i].student.rollno, students[i].cgpa);
    }
}

int main() {
    struct StudentDetails students[20];
    int n;

    printf("Enter number of students (up to 20): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, and CGPA for student %d:\n", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].student.rollno, &students[i].cgpa);
    }

    sortByCGPA(students, n);
    printStudents(students, n);

    return 0;
}

