#include <stdio.h>
#include "calculator.h"



int main (){

double num1 = 10;
double num2 = 20;

double add =addition (num1 , num2);

	printf("sum is :%.2f\n",add);





double sub =subtract (num1 , num2);

	printf("sub is :%.2f\n",sub);

	
double multi =multiply (num1 , num2);

	printf("multiple:%.2f\n",multi);

	
double divid =divide (num1 , num2);

	printf("divide:%.2f\n",divid);



return 0 ; 
}




