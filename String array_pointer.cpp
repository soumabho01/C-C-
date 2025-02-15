//23BCE7546-Soumabha sarkar
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void order(char *names[], int count) {
    char *temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }}}}

int main() {
    char *names[10];
    for (int i = 0; i < 10; i++) {
        names[i] = (char *)malloc(50 * sizeof(char)); 
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    order(names, 10);

    printf("\nSorted Names:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
        free(names[i]); 
    }
    return 0;
}

