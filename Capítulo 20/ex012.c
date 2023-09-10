/* Um programa interativo de lista ligada */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct typical {
    int value;
    struct typical *next;
};
struct typical *first;
struct typical *current;
struct typical *new;

int menu(void);
void add(void);
void show(void);
void delete(void);
struct typical *create(void);

/* A função principal só funciona com entrada.
    Todo o resto é tratado pela função */
int main()
{
    int choice = '\0'; /* Coloca o loop while para rodar */
    first = NULL;

    while(choice != 'Q')
    {
        choice = menu();
        switch(choice)
        {
        case 'S':
            show();
            break;
        case 'A':
            add();
            break;
        case 'R':
            delete();
            break;
        case 'Q':
            break;
        default:
            break;
        }
    }
    
    return(0);
}

/* Exibe o menu principal e coleta a entrada */
int menu(void)
{
    int ch;

    printf("S) Show, A) Add, R) Remove, Q) Quit: ");
    ch = getchar();
    while(getchar() != '\n') /* Remove o excesso de entrada */
        ;
    return(toupper(ch));
}

/* Adiciona um item ao final da lista ligada */
void add(void)
{
    if(first == NULL) /* Caso especial para o primeiro item */
    {
        first = create();
        current = first;
    }
    else /* Acha o último item */
    {
        current = first;
        while(current->next) /* Último item == NULL */
            current = current->next;
        new = create();
        current->next = new; /* Atualiza o link */
        current = new;        
    }
    printf("Type a value: ");
    scanf("%d", &current->value);
    current->next = NULL;
    while(getchar() != '\n') /* Remove o excesso de entrada */
        ;
}

/* Exibe todas as estruturas na lista ligada */
void show(void)
{
    int count = 1;

    if(first == NULL) /* Esta lista está vazia */
    {
        puts("Nothing to show");
        return;
    }
    puts("Showing all records:");
    current = first;
    while(current) /* Último registro == NULL */
    {
        printf("Record %d: %d\n", count, current->value);
        current = current->next;
        count++;
    }
}

/* Remove um registro da lista */
void delete(void)
{
    struct typical *previous; /* Salva registro anterior */
    int r, c;

    if(first == NULL) /* Verifica se lista está vazia */
    {
        puts("No records to remove");
        return;
    }
    puts("Choose a record to remove:");
    show();
    printf("Record: ");
    scanf("%d", &r);
    while(getchar() != '\n') /* Remove excesso de entrada */
        ;
    c = 1;
    current = first;
    previous = NULL; /* O primeiro registro não tem anterior */
    while(c != r)
    {
        if(current == NULL) /* Garante que 'r' está no intervalo */
        {
            puts("Record not found");
            return;
        }
        previous = current;
        current = current->next;
        c++;
    }
    if(previous == NULL) /* Caso especial para o primeiro registro */
    {
        first = current->next;
    }
    else /* Aponta o primeiro registro anterior para o próximo*/
        previous->next = current->next;
    printf("Record %d removed.\n", r);
    free(current); /* Libera memória */
}

/* Monta uma estrutura vazia e retorna seu endereço */
struct typical *create(void)
{
    struct typical *a;

    a = (struct typical *)malloc(sizeof(struct typical));
    if(a == NULL)
    {
        puts("Some kind of malloc() error");
        exit(1);
    }
    return(a);
}