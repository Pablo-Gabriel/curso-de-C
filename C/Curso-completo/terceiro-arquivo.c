/*calculadora de media*/
#include<stdio.h>
#include<math.h>

int main() {
    float nota1, nota2, media;
    
    printf("Insira suas duas notas a seguir: \n");
    scanf(" %f %f", &nota1, &nota2);
    media = (nota1 + nota2) / 2;
    printf("Sua media é: %.2f \n", media);

    return 0;
}