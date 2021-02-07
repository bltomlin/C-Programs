#include <stdio.h>

main(){
    int c;

    c = getchar();
    while(c != EOF){
        if(c == '\t')
            c = '/t';
        if(c == '\b')
            c = '/b';
        if(c == '\\')
            c == '//';
        putchar(c);
        c = getchar();
    }
}