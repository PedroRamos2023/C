#include <stdio.h>
#include <stdlib.h>
#ifndef ex003
#define ex003

void fillstructure(void);
void printstructure(void);

struct thing {
    char name[32];
    int age;
    };

typedef struct thing human;

#endif