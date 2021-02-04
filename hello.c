#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Say Hello with Userinput
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}