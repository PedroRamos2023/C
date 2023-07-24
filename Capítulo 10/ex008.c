#include <stdio.h>

void graph(int count, char ch); // Adicionando o novo parâmetro 'ch' à definição da função

int main()
{
    int value;

    value = 2;

    while (value <= 64)
    {
        graph(value, '*'); // Passando o caractere '*' como segundo argumento
        printf("Value is %d\n", value);
        value = value * 2;
    }
    return (0);
}

void graph(int count, char ch) // Incluindo o novo parâmetro 'ch' na definição da função
{ 
    int x;

    for (x = 0; x < count; x = x + 1)
        putchar(ch); // Imprimindo o caractere passado como argumento
    putchar('\n');
}