#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name? ");
//print input
    printf("hello, %s\n", name);
}
