#include <stdio.h>
#include <stdlib.h>
#ifndef ex004
#define ex004

void fillstructure(void);
void printstructure(void);

struct thing {
    char name[32];
    int age;
    };

typedef struct thing human;

#endif