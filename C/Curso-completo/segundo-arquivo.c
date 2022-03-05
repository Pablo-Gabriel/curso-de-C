/* codigo do exercicio 2 do livro */
#include<stdio.h>

#define PI 3.1415

int main() {
    float raio, perim;
    
    printf("Qual a medida do raio? \n");
    scanf("%f", &raio);
    perim = 2*PI*raio;
    printf("O perimetro é %.2f \n", perim);

}