#include <cs50.h>
#include <stdio.h>

void print_spaces(int spaces);
void print_row(int bricks);

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);
    for (int i = 0; i < n; i++)
    {
        print_spaces(n - (i + 1));
        print_row(i + 1);
    }
}
void print_row(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}

void print_spaces(int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
}
