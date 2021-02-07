#include <stdio.h>

main()
{
    int c, nc;

    c = getchar();
    while (c != EOF){
        if (c == ' ')
            ++nc;
        while(nc >= 1){
            c = getchar();
            if(c != 32){
                putchar(32);
                nc = 0;
                break;
            }
            else{
                c = 0;
            }
        }
        putchar(c);
        c = getchar();
    }
}