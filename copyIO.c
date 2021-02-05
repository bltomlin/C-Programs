#include <stdio.h>

main() {
    int c;

    for(c = 0; getchar() != EOF; c++)
        while(c == ' ')
            ;
        printf("%c", c);
    printf("%d\n", c);
}