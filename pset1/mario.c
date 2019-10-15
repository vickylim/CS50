#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Enter an integer between 1-8: ");
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        for (int j = i + 1; j <= height; j++)
                printf(" ");
                for (int k = height - i + 1; k <= height; k++)
        {
            printf("#");
        }
        printf("\n");
    }

}
