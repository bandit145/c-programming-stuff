#include <stdio.h>
/* print Fahrenheit-Clesius table
 for fahr = 0 ,20, ...., 300 */

main(){
	float cel, fahrenheit;
	int lower, upper, step;

	lower = 0; /* lower limimt of temp table */
	step = 20; /* step size*/ 
	upper = 300; /*  step limimt*/
	cel = lower;
	printf("Clesius\t\tFahrenheit\n");
	while ( cel <= upper){
		fahrenheit = (cel*(9.0/5.0))+32.0;
		printf("%3.0f\t\t%6.1f\n",cel,fahrenheit);
		cel = cel + step;
	}
}