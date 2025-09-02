#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    while(true)
    {
        height = get_int("Height: ");
        if(height>=1 && height<=8){break;}
    }
    int i = 1;
    while(i<height+1)
    {
        for(int space = 0; space<height-i; space++)
        {
            printf(" ");
        }
        for(int hash = 0; hash<height-(height-i); hash++)
        {
            printf("#");
        }
        printf("  ");
        for(int hash = 0; hash<height-(height-i); hash++)
        {
            printf("#");
        }
        printf("\n");
        i++;
    }
}
