#include <stdio.h>
#include <string.h>

void selectionSort(char str[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < n; j++)
        {
            if(str[j] < str[minIndex])
            {
                minIndex = j;
            }
        }
        if(minIndex != i)
        {
            char temp = str[i];
            str[i] = str[minIndex];
            str[minIndex] = temp;
        }
    }
}

int main()
{
    char text[] = "C Programming is fun!";
    int length = strlen(text);

    printf("Texto original: %s\n", text);
    selectionSort(text, length);
    printf("Texto ordenado: %s\n", text);
    return(0);
}