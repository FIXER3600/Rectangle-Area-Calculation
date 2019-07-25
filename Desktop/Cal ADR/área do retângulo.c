#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
	system("color 0A");
	setlocale(LC_ALL, "Portuguese"); 
	float h,b,res;
	printf("\n\t Área do retângulo \n\n");
	printf("\n\t\a Digite a base: \n\n");
	scanf("%f",&b);
	printf("\n\t \a Digite a altura: \n\n");
	scanf("%f",&h);
	res=b*h;	
	printf("\n \t \a Área do retângulo: %.2f\n\n",res); 
	return 0;	
}

