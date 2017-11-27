#include <stdio.h>
#define IN 0 
#define OUT 1

main(){
	int nw,c, state, lastchar;

	state = OUT;

	while ((c = getchar())!= '\n'){


		if (c != ' ' && c != '\t'){
			state = IN;
		}
	 	else{
			state = OUT;
			putchar('\n');
		}
		/*Don't really need state coulda put it up top*/
		if (state == IN){
			putchar(c);
		}
		lastchar = c;
		
	}
	putchar('\n');

}