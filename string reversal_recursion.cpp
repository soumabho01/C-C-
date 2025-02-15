//23BCE7546-Soumabha Sarkar
#include <stdio.h>

void reverse(char *str, int index) {
    if (str[index] == '\0') return; 
    reverse(str, index + 1);
    putchar(str[index]); 
}

int main() {
    char str[100];
    printf("Enter a line of text:\n");
    fgets(str, sizeof(str), stdin);
    printf("Reversed text: ");
    reverse(str, 0);
    printf("\n");
    return 0;
}

