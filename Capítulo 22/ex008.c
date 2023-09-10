#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *handle;
    int highScores[5]; // Array para armazenar os cinco high scores
    int i;

    handle = fopen("scores.dat", "wb"); // Usando "wb" para escrita binária
    if (!handle) {
        puts("File error!");
        exit(1);
    }

    printf("Enter your top 5 high scores:\n");
    for (i = 0; i < 5; i++) {
        printf("High score %d: ", i + 1);
        scanf("%d", &highScores[i]);
    }

    fwrite(highScores, sizeof(int), 5, handle); // Grava o array inteiro

    puts("High scores saved");
    fclose(handle); // Fecha o arquivo
    return(0);
}