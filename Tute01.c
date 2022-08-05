/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
//Main function begins
int main(void){

  //Declarations
	int x, y;
	float avg;

  //Taking user inputs
	printf("Please enter marks for subject 1 : \n");
	scanf("%d",&x);
	
	printf("Please enter marks for subject 2 : \n");
	scanf("%d",&y);

  //Calculating the average
	avg=(x+y)/2.0;

  //Display the output
	printf("Average is : %.2f",avg);
	
	return 0;
	
}
//End of main function
