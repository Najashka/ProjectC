#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getMax(char level[]) {
    if (strcmp(level, "easy") == 0) return 10;
    if (strcmp(level, "medium") == 0) return 100;
    if (strcmp(level, "hard") == 0) return 1000;
    return 100;
}

int loadBest() {
    FILE *f = fopen("best_score.txt", "r");
    int best;
    if (f == NULL) return -1;
    fscanf(f, "%d", &best);
    fclose(f);
    return best;
}

void saveBest(int score) {
    FILE *f = fopen("best_score.txt", "w");
    fprintf(f, "%d", score);
    fclose(f);
}

int main() {
    char level[10];
    int min = 1, max, guess, attempts = 0;

    printf("Level (easy/medium/hard): ");
    scanf("%s", level);

    max = getMax(level);

    srand(time(NULL));
    int secret = rand() % max;

    int best = loadBest();

    printf("Tebak angka %d - %d\n", min, max);

    while (1) {
        printf("Tebakan: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret)
            printf("Terlalu kecil\n");
        else if (guess > secret)
            printf("Terlalu besar\n");
        else {
            printf("Benar dalam %d percobaan!\n", attempts);

            if (best == -1 || attempts < best) {
                printf("Best score baru!\n");
                saveBest(attempts);
            }
            break;
        }
    }
    return 0;
}