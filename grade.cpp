//23BCE7546
#include <stdio.h>
int main() {
int marks;
// Taking input from the user
printf("Enter your marks: ");
scanf("%d", &marks);
// Decision-making construct: if-else if-else

if (marks >= 90) {
printf("Grade: A\n");

} else if (marks >= 80) {
printf("Grade: B\n");

}
else if (marks >= 70) {
printf("Grade: C\n");

} else if (marks >= 60) {
printf("Grade: D\n");

} else {
printf("Grade: F\n");

}
return 0;

}
