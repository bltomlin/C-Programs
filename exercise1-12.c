#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int c, cs, state;
	while (( c = getchar() ) != EOF){
		if (c == ' ') 
		{
			state = OUT;
			putchar('\n');
			++cs;
		}
		while (cs >= 1) 
		{
			c = getchar();
			if (c != 32) 
			{
				cs = 0;
				break;
			}
			else 
			{ 
				c = 0;
			}
		}	
		if (state == OUT) 
		{
			state = IN;
		}
	putchar(c);
	}
}
