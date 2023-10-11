#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owed: \n");
    } 
    while (dollars <= 0);
    
    int coins = round(dollars * 100);
    int coinCounter = 0;
    int counter25 = 0;
    int counter10 = 0;
    int counter5 = 0;
    int counter1 = 0;
    while (coins > 0)
    {
        if (coins >= 25)
        {
            coins -= 25;
            coinCounter++;
            counter25++;
        }
        else if(coins >= 10)
        {
            coins -= 10;
            coinCounter++;
            counter10++;
        }
        else if(coins >= 5)
        {
            coins -= 5;
            coinCounter++;
            counter5++;
        }
        else
        {
            coins -= 1;
            coinCounter++;
            counter1++;
        }
    }
    printf("You get %i coins\n", coinCounter);
    printf("It will be 25 cents each: %i coins\n", counter25);
    printf("It will be 10 cents each: %i coins\n", counter10);
    printf("It will be 5 cents each: %i coins\n", counter5);
    printf("It will be 1 cents each: %i coins\n", counter1);
}