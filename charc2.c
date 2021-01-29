#include <stdio.h>

/* copy input to output; 2nd version */
main()
{
    int c;

    while(c=getchar() != EOF)
        printf("%d\n", c);
        putchar(c);
}