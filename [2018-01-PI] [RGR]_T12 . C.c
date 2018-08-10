#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Tpunto {
	float x;
	float y;
};

struct Ttrapecio {
	struct Tpunto p1;
	struct Tpunto p2;
	struct Tpunto p3;
	struct Tpunto p4;
	float area;
	float perimetro;
};
int main(int argc, char* argv[]){
	struct Ttrapecio trapecio;
	float lado1, lado2, lado3, lado4, s;
	
	printf("Introduzca las coordenadas del punto 1:\n");
	scanf("%f %f",&trapecio.p1.x,&trapecio.p1.y);
	printf("Introduzca las coordenadas del punto 2:\n");
	scanf("%f %f",&trapecio.p2.x,&trapecio.p2.y);
	printf("Introduzca las coordenadas del punto 3:\n");
	scanf("%f %f",&trapecio.p3.x,&trapecio.p3.y);
	printf("Introduzca las coordenadas del punto 4:\n");
	scanf("%f %f",&trapecio.p4.x,&trapecio.p4.y);
	
	lado1 = sqrt(pow(trapecio.p1.x-trapecio.p2.x,2)+pow(trapecio.p1.y,2));
	lado2 = sqrt(pow(trapecio.p1.x-trapecio.p3.x,2)+pow(trapecio.p3.y,2));
	lado1 = sqrt(pow(trapecio.p3.x-trapecio.p4.x,2)+pow(trapecio.p4.y,2));
	lado1 = sqrt(pow(trapecio.p4.x-trapecio.p2.x,2)+pow(trapecio.p2.y,2));
	
	trapecio.perimetro = lado1 + lado2 + lado3 + lado4;
		
	printf("El perimetro del trapecio es de: %.2f\n",trapecio.perimetro);
	
	return 0;	
}
