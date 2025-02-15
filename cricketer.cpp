//23BCE7546-Soumabha Sarkar
#include <stdio.h>
#include <string.h>

struct Cricketer {
    char name[50];
    int age;
    int matches;
    float averageRuns;
};

void sort(struct Cricketer *players, int n) {
    struct Cricketer temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (players[i].averageRuns > players[j].averageRuns) {
                temp = players[i];
                players[i] = players[j];
                players[j] = temp;
        }}}}

int main() {
    struct Cricketer players[20];
    int n;

    printf("Enter number of cricketers (max 20): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter name, age, matches played and average runs for cricketer %d:\n", i + 1);
        scanf("%s %d %d %f", players[i].name, &players[i].age, &players[i].matches, &players[i].averageRuns);
    }
    sort(players, n);
    printf("Cricketers sorted by average runs:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, Matches: %d, Average Runs: %.2f\n",
               players[i].name, players[i].age, players[i].matches, players[i].averageRuns);
    }
    return 0;
}

