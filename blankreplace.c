#include <stdio.h>

main(){

	int charac, spacenums;

	spacenums = 0;

	while((charac = getchar()) != EOF){
		if( charac == ' '){
			while((charac = getchar()) == ' '){
			
			}
			putchar(' ');
			putchar(charac);
		}
		else{
			putchar(charac);
		}
	}
}