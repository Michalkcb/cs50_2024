#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
    string s = get_string("Text: ");
    int leter;
    int word;
    int sen;
    leter = 0;
    word = 0;
    sen = 0;

    for (int i = 0, len = strlen(s); i < len; i++)
    {
        if (isalpha(s[i]))
            leter++;
        if ((i == 0 && s[i] != ' ') || (i != i - 1 && s[i] == ' ' && s[i + 1] != ' '))
            word++;
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
            sen++;
    }
    float L = leter / (float) word * 100;
    float S = sen / (float) word * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
        printf("Before Grade 1\n");
    else if (index >= 16)
        printf("Grade 16+\n");
    else
        printf("Grade %i\n", index);
}
