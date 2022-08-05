/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>
//Main function begins
int main (void){
	
	//This program is to calculate the amount to be paid for a rented vehicle.

  //Declarations
	float distance,amount;

  //Taking user inputs
	printf("Please input the distance the van has travelled :\n");
	scanf("%f",&distance);


  //Calculating the amount to be paid
	if(distance<=30){
		amount = distance * 50;
	}
	else{
		amount = (30 * 50) + ((distance - 30)*40);
	}

  //Display the output
	 printf("Your amount to be paid for the vehicle : Rs.%.2f\n",amount);

  
	return 0;
}
//End of the main function
