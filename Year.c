#include <stdio.h>

int main () {
	int year;

	printf ( " Enter the Year : ");
	scanf ("%d", &year);

	if ((year %4 == 0 && year % 100 != 0) || year % 400 ==0){
		printf ( " Year is leap : %d. \n", year);
	}else {
		printf ( " Year is not leap : %d. \n", year);
	}
	return 0;
}
