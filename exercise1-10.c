#include <stdio.h>

#define BACKSPACE 8 /* ascii for backspace */
#define TAB 9       /* ascii for tab */
#define BACKSLASH 92  /* ascii for backslash */

main(){
    int c;                      // initialize the input variable
    while((c = getchar()) != EOF){            // while Enter has not been pressed
        if(c == TAB){     
            c = 0;        
            printf("\\t");
        }
        if(c == BACKSPACE){        
            printf("\\b");
        }
        if(c == BACKSLASH){
            printf("\\");
        }
        putchar(c);
    }
}