#include <stdio.h>
/* print Fahrenherit-Clesius table
 for fahr = 0 ,20, ...., 300 */

main(){
	float fahr, celsisus;
	int lower, upper, step;

	lower = 0; /* lower limimt of temp table */
	step = 20; /* step size*/ 
	upper = 300; /*  step limimt*/
	fahr = lower;
	printf("Fahrenherit\tClesius\n");
	while ( fahr <= upper){
		celsisus = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t\t%6.1f\n",fahr,celsisus);
		fahr = fahr + step;
	}
}