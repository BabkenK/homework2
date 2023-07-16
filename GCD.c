#include <stdio.h> 

int main () {
	int num1, num2, num3;

	printf( "Enter 3 numbers; ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	int GCD = 1;
	int smallest = (num1 < num2) ? num1 : num2;
	smallest = (smallest < num3) ? smallest : num3;

	for (int i = 1; i <= smallest; i++) { 
		if( num1 % i == 0 && num2 % i == 0 && num3 % i == 0) {
			GCD = i;
		}
	}
	printf ( "The greates common devider ; %d\n", GCD );
	
	return 0;
}
