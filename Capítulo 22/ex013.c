#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    struct entry {
        char actor[32];
        int year;
        char title[32];
    };
    
    // Dados dos três registros
    struct entry records[3];
    
    strcpy(records[0].actor, "Sean Connery");
    records[0].year = 1962;
    strcpy(records[0].title, "Dr. No");
    
    strcpy(records[1].actor, "Roger Moore");
    records[1].year = 1973;
    strcpy(records[1].title, "Live and Let Die");
    
    strcpy(records[2].actor, "Pierce Brosnan");
    records[2].year = 1995;
    strcpy(records[2].title, "GoldenEye");

    FILE *a007;

    a007 = fopen("bond.db", "a"); // Abre o arquivo em modo de anexação (append)
    if (!a007) {
        puts("SPECTRE wins!");
        exit(1);
    }

    // Escreve os três registros no arquivo
    fwrite(records, sizeof(struct entry), 3, a007);
    fclose(a007);
    puts("Records written");

    return(0);
}