/*!
@file       q.c
@author     Timothy Lee (timothykexin.lee@digipen.edu.sg)
@course     RSE 1201
@section    Assignment 5
@assignment 5
@date       08/10/2021
@brief      This file contains code for choosing of sleeping bags based on 
			temperature and humidity conditions. A bag type is selected based 
			on temperature rating (*C), and insulation type is selected based 
			on relative humidity (%). 
			The guidelines are as follows:
			_____________________________________________ 
			| Bag Type   |	Temperature Rating (°C)		|
			| Summer 	 |	+30°C (inclusive) and higher|
			| 3-Season   |	+15°C (inclusive) to +30°C	|
			| Winter	 | 	Below +15°C					|
			---------------------------------------------
			| Insulation Type 	  | Relative Humidity(%)|
			| Synthetic Insulation| Above 40%	   	    |
			| Down Insulation     | < 40% (inclusive)   |
			----------------------------------------------
			Temperature range: -50 ≤ Temperature ≤ 100 in degrees Celsius
			Humidity range:  0 ≤ Humidity ≤ 100 as a percentage
*//*__________________________________________________________________________*/

#include <stdio.h>	// printf
/*!
@brief  The function takes in a temperature and humidity values and verifies it.
		It then takes chooses the ideal bag type and insulation type in 
		accordance to the guideline.
		E.g.
		Input:
			Temperature = 13*C
			Humidity = 23%
		Output:
			The temperature is 13*C, humidity is 24%.
			The best sleeping bag is Winter type insulated with Down.

@param  temperature is declared  as signed char
		humidity is declared as unsigned char

@return Returns nothing
*//*___________________________________________________________________________*/
void sleeping_bag(signed char temperature, unsigned char humidity)
{
	if (-50 > temperature || temperature > 100 || humidity > 100) 
	{
		puts("Invalid input!");
	}	
	else if (temperature >= 30)	
	{
		printf("The temperature is %d*C, humidity is %d%%.\n", temperature, humidity);
		printf("The best sleeping bag is Summer type ");
		if (humidity > 40)	{
			printf("insulated with Synthetic.\n");
		} else {
			printf("insulated with Down.\n");
		}
	}
	else if (15 <= temperature && temperature < 30) 
	{
		printf("The temperature is %d*C, humidity is %d%%.\n", temperature, humidity);
		printf("The best sleeping bag is 3-Season type ");
		if (humidity > 40)	{
			printf("insulated with Synthetic.\n");
		} else {
			printf("insulated with Down.\n");
		}
	}
	else 
	{
		printf("The temperature is %d*C, humidity is %d%%.\n", temperature, humidity);
		printf("The best sleeping bag is Winter type ");
		if (humidity > 40)	{
			printf("insulated with Synthetic.\n");
		} else {
			printf("insulated with Down.\n");
		}
	}

}
