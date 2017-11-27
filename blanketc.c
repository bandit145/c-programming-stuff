#include <stdio.h>


main(){

	int tab,new,blanks,c;
	tab = new = blanks = 0;

	while((c = getchar()) != EOF){
		if (c == '\t'){
			tab++;
		}
		if (c == ' '){
			blanks++;
		}
		if (c == '\n'){
			new++;
		}
	}
	printf("%d - lines\n",new);
	printf("%d - tabs\n", tab);
	printf("%d - blanks\n", blanks);
}