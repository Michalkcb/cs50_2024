#include <cs50.h>
#include <stdio.h>

int get_cents()
{
    int cents;
    do
        cents = get_int("Cents Owned: ");
    while (cents < 0);
    return cents;
}
int calculate_25(int cents)
{
    int c25 = 0;
    while (cents >= 25)
    {
        c25++;
        cents -= 25;
    }
    return c25;
}
int calculate_10(int cents)
{
    int c10 = 0;
    while (cents >= 10)
    {
        c10++;
        cents -= 10;
    }
    return c10;
}
int calculate_5(int cents)
{
    int c5 = 0;
    while (cents >= 5)
    {
        c5++;
        cents -= 5;
    }
    return c5;
}
int calculate_1(int cents)
{
    int c1 = 0;
    while (cents >= 1)
    {
        c1++;
        cents -= 1;
    }
    return c1;
}
int main()
{
    int cents = get_cents();

    int c25 = calculate_25(cents);
    cents = cents - c25 * 25;

    int c10 = calculate_10(cents);
    cents = cents - c10 * 10;

    int c5 = calculate_5(cents);
    cents = cents - c5 * 5;

    int c1 = calculate_1(cents);
    cents = cents - c1 * 1;

    int coins = c25 + c10 + c5 + c1;

    printf("%i\n", coins);
}
