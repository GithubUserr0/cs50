#include <cs50.h>
#include <stdio.h>

int num_coins(int change);

int main(void)
{
    int change;
    do
    {
        change = get_int("Change owed: ");
    }
    while(change<0);
    printf("%i\n", num_coins(change));
}

int num_coins(int change)
{
    // 25,10,5,1

    int coins = 0;

    int value[4];
    value[0] = 25;
    value[1] = 10;
    value[2] = 5;
    value[3] = 1;

    while(change>0)
    {
        for(int i = 0; i<4; i++)
        {
            if(change/value[i] > 0)
            {
                coins = coins + (change/value[i]);
                change = change%value[i];
            }
        }
    }
    return coins;

}
