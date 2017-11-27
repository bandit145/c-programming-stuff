#include <stdio.h>

main(){

	int input;
	/*ctrl+d to enter EOF*/
	input = getchar();
	if (input == EOF){
		printf("%d\n",EOF);
	}

}