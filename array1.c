#include <stdio.h>

int main ()
{
	int i = 0, n = 0, temp;
	
	printf ("Please enter the total amount of elemtents: ");
	scanf ("%d", &i);
	
	//Creates array with number of elements that user inputted
	int intergers [i], pos1 = 0, pos2 = i - 1;
	n = i;
	

	printf ("Please enter the numbers: ");
	
	for (i = 0; i < n; i++)

		scanf ("%d", &intergers [i]);

	if ( n % 2 == 0) {

		while ( pos2 > pos1) {

			temp = intergers [pos2];
			intergers [pos2] = intergers [pos1];
		    intergers [pos1] = temp;
			pos1++;
			pos2--;
			}
		}
		
	else {

		while ( pos1 != pos2 ) {

			temp = intergers [pos2];
			intergers [pos2] = intergers [pos1];
			intergers [pos1] = temp;
			pos1++;
			pos2--;
			}	
		}
	

	printf ("The numbers in reverse order: ");

	for (i = 0 ; i < n; i++)

		printf ("%d ", intergers [i]);


	printf ("\n");

	printf ("Good bye!\n\n");


	return 0;
}
 