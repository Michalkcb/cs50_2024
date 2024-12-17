#include <cs50.h>
#include <stdio.h>

void left_pyramid(int spaces, int hashes)
{
    for (int s = spaces - hashes; s > 0; s--)
        printf(" ");
    for (int i = 0; i < hashes; i++)
        printf("#");
    printf("  ");
}
void right_pyramid(int hashes)
{
    for (int i = 0; i < hashes; i++)
        printf("#");
    printf("\n");
}
int main()
{
    int d;
    do
        d = get_int("Height: ");
    while (d < 1);

    for (int i = 0; i < d; i++)
    {
        left_pyramid(d, i + 1);
        right_pyramid(i + 1);
    }
}
