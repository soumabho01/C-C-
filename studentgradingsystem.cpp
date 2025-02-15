//23BCE7546
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks[3];
    float total;
    float average;
};

void input(struct Student *s) {
    printf("Enter student's name: ");
    scanf("%s", s->name);
    printf("Enter roll number: ");
    scanf("%d", &s->roll);
    printf("Enter marks for 3 subjects: ");
    for(int i = 0; i < 3; i++) {
        scanf("%f", &s->marks[i]);
    }
    s->total = s->marks[0] + s->marks[1] + s->marks[2];
    s->average = s->total / 3.0;
}

void displayHighScorers(struct Student s[], int n) {
    for(int i = 0; i < n; i++) {
        if(s[i].marks[0] > 75 && s[i].marks[1] > 75 && s[i].marks[2] > 75) {
            printf("\n%s (Roll No: %d) scored above 75%% in all subjects.\n", s[i].name, s[i].roll);
        }
    }
}

int main() {
    struct Student students[5];
    for(int i = 0; i < 5; i++) {
        input(&students[i]);
    }

    displayHighScorers(students, 5);

    return 0;
}

