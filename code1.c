#include <stdio.h>

int main()
{
    char name[8]="book";
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        printf("%c\n",name[i]);
    }
    

    return 0;
}