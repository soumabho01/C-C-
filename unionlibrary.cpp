//23BCE7546-SOUMABHA SARKAR
#include <stdio.h>
union Library {
    char sname[50];
    int sid;
    char bname[50];
    int bid;
    int noOfDays;
    float fine;
};

void finecalc(union Library lib) {
    if (lib.noOfDays > 30) {
        printf("Membership cancelled!\n");
    } else if (lib.noOfDays <= 5) {
        lib.fine = 0.50 * lib.noOfDays;
    } else if (lib.noOfDays <= 10) {
        lib.fine = 5.0 + (1.0 * (lib.noOfDays - 5));
    } else {
        lib.fine = 5.0 + (5.0 * (lib.noOfDays - 10));
    }
    printf("Fine for %s (SID: %d) is: %.2f\n", lib.sname, lib.sid, lib.fine);
}

int main() {
    union Library students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter student name, ID, and days late for student %d:\n", i + 1);
        scanf("%s %d %d", students[i].sname, &students[i].sid, &students[i].noOfDays);
        finecalc(students[i]);
    }
    return 0;
}

