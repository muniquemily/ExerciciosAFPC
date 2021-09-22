#include<stdio.h>

int main()
{
	float F=40,C;
	
	for(F=40;F<=60;F++){
		C=((5.0/9.0)*(F-32));
		printf("%.0f graus Fahrenheit = %.2f graus Celcius\n",F,C);
	}

}
