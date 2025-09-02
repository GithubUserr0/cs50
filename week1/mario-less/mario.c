// KILL ME
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    //CAN also use while loop
    do
    {
        height = get_int("height: ");
    }
    while(height<2);
    int i = 1;
    while(i<height+1)
    {
        for(int space=0; space<height-i; space++)
        {
            printf(" ");
        }
        for(int hash=0; hash<height-(height-i); hash++)
        {
            printf("#");
        }
        printf("\n");
        i++;
    }
}
