#include <stdio.h>

int main(void)
{
    printf ("hello, world\n") ;

    // get from stdin
    puts("Please enter your name:");
    char input_string[20];
    fgets(input_string, sizeof(input_string), stdin);

    // set
    char name;
    sscanf(input_string, "%s", &name);

    printf("hello, %s\n", &name);
}