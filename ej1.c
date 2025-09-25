#include <stdio.h>
int main() {

/*# Sum of birth date digits
assignment: add the numbers of a birth date

## instructions

Ask the user for the day, month and year of her birth.
The year must have four digits.
Add the numbers in the following fashion:

``` DD+MM+YYYY ```

For example, if the birth date is 01/07/2003, the result must be:

``` 01+07+2003 = 2011 ```

Display the result of the operation
*/

	int day, month, year, result;

	printf("\nInserta tu dia de nacimiento: ");
	scanf_s("%d", &day);
	printf("\nInserta tu mes de nacimiento: ");
	scanf_s("%d", &month); 
	printf("\nInserta tu año de nacimiento: ");
	scanf_s("%d", &year);

	printf("\n");
	printf("\nTu fecha de nacimiento es:");
	printf("\n%d + %d + %d", day, month, year);

	result = day + month + year;

	printf("\nEl resultado es:");
	printf("\n%d + %d + %d = %d", day, month, year, result);

	return 0;
}