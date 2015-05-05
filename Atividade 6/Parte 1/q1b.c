#include <stdio.h>
struct ponto{
	float x;
	float y;	
};
typedef struct ponto Ponto;
int main(){
	Ponto cord;
	scanf("%f %f", &cord.x , &cord.y);
	printf("%f %f", cord.x , cord.y);

	return 0;
}
