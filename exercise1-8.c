#include <stdio.h>

main(){
    int n, nc;

    nc = 0;
    while((n = getchar()) != EOF)
        if (n == '\n')
            ++nc;
        else if (n == '\t')
            ++nc;
        else if (n == ' ')
            ++nc;
    printf("%d\n", nc);
}
