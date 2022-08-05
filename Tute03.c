/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
//Main function begins
int main(void){

  //Declarations
	int x, n, sum;

  //Assigning values
	x=0;
	sum =0;

  //Taking user inputs
	printf("Please enter a number : \n");
	scanf("%d",&n);
	 
	 while(x<=n){
	 	sum=sum+x;
	 	x++;
	 }

  //Display the output
	printf("Sum is : %d ",sum);
  
	return 0;
}
//End of main function
