#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return(1);
    }

    char *filename = argv[1];
    FILE *dumpme;
    int x, c;

    dumpme = fopen(filename, "r");
    if (!dumpme) {
        printf("Unable to open '%s'\n", filename);
        return(1);
    }
    
    x = 0;
    while ((c = fgetc(dumpme)) != EOF) {
        printf("%02X ", c);
        x++;
        if (!(x % 16))
            putchar('\n');
    }
    putchar('\n');
    
    fclose(dumpme);
    return(0);
}