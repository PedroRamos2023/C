#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct stock {
        char symbol[5];
        int quantity;
        float price;
    };
    struct stock *invest;

/* Cria uma estrutura na memória */
    invest = (struct stock *)malloc(sizeof(struct stock));
    if(invest == NULL)
    {
        puts("Some kind of malloc() error");
        exit(1);
    }

/* Atribui dados da estrutura */
    strcpy(invest->symbol, "GOOG");
    invest->quantity = 100;
    invest->price = 801.19;

/* Exibe base de dados */
    puts("Investment Portfolio");
    printf("Symbol\tShares\tPrice\tValue\n");
    printf("%-6s\t%5d\t%.2f\t%.2f\n", \
        invest->symbol,
        invest->quantity,
        invest->price,
        invest->quantity * invest->price);

    return(0);
}