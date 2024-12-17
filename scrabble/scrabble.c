#include <ctype.h>
#include <stdio.h>
#include <string.h>

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int scores(char *word)
{
    int score = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (isalpha(word[i]))
            score += points[toupper(word[i]) - 'A'];
    }
    return score;
}

int main()
{
    char word1[50];
    char word2[50];
    printf("Player 1: ");
    scanf("%49s", word1);
    printf("Player 2: ");
    scanf("%49s", word2);

    int score1 = scores(word1);
    int score2 = scores(word2);

    if (score2 > score1)
        printf("Player 2 wins!\n");
    else if (score2 < score1)
        printf("Player 1 wins!\n");
    else if (score2 == score1)
        printf("Tie!\n");
    return 0;
}
