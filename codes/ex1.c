#include <stdio.h>
#include <math.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
    int distance = 100;

    // this is also a comment
    printf("You are %0d away.\n", distance);
    printf("%'.2f\n", 1234567.89);
    printf("pi = %.8f\n", 4 * atan(1.0));

    return 0;
}
