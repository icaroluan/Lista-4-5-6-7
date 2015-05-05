#include <stdio.h>
struct ponto{
	float x;
	float y;	
};
typedef struct ponto Ponto;
float leitura(Ponto teste){
	scanf("%f %f", &teste.x , &teste.y);
} 

float imprime(Ponto teste){
	printf("%f %f", teste.x , teste.y);
} 

int main(){
	Ponto cord;
	leitura(cord);
	imprime(cord);
	return 0;
}
