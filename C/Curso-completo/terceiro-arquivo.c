/*1º exercicio: calculadora de media*/
#include<stdio.h>
#include<math.h>

/* int main() {
    float nota1, nota2, media;
    
    printf("Insira suas duas notas a seguir: \n");
    scanf(" %f %f", &nota1, &nota2);
    media = (nota1 + nota2) / 2;
    printf("Sua media é: %.2f \n", media);

    return 0;
} */

/* 2º exercicio: calculadora de consumo medio de combustivel */

/* int main() {
    float combustivel, distancia, consumo_medio;

    printf("Qual foi o consumo total de combustivel e a distancia percorrida por ele? (em L e em KM) \n");
    scanf(" %f %f", &combustivel, &distancia);
    consumo_medio = distancia / combustivel;
    printf("O consumo medio de combustivel para a distancia foi de: %.1f KM/L \n", consumo_medio);

    return 0;
} */

/* 3º exercicio: Caculadora de hipotenusa */

/*int main() {

    float cat1, cat2, hipotenusa;

    printf("Coloque o valor do cat1: \n");
    scanf(" %f", &cat1);
    printf("Coloque o valor do cat2: \n");
    scanf(" %f", &cat2);
    hipotenusa = sqrt((cat1 * cat1) + (cat2 * cat2));
    printf("A hipotenusa vale: %.2f \n", hipotenusa);

    return 0;
    
}*/

/* 4º exercicio: Comparadora de numeros */

/* int main() {

    float n1, n2;

    printf("Digite 2 números quaisquer: \n");
    scanf(" %f %f", &n1, &n2);
    if (n1 > n2) {
        printf("O número %.1f é maior que o número %.1f \n", n1, n2);
    } else {
        printf("O número %.1f é maior que o número %.1f \n", n2, n1);
    };
    
    return 0;
} */

/*  5º exercicio: ano bissexto */

/* int main() {

    int ano;

    printf("Digite um ano para saber se ele será bissexto: ");
    scanf("%d", &ano);
    if (((ano % 4) == 0) && ((ano % 100) != 0))  {
        printf("O ano %d é bissexto \n", ano);
    } else {
        printf("O ano %d não é bissexto \n", ano);
    };
    return 0;
} */

/* 6º Exercicio: Reajuste salarial */

/* int main() {

    float s1, s2;

    printf("Digite seu salário: ");
    scanf("%f", &s1);
    if (s1 <= 750.00) {
        s2 = s1 + 100 + s1*0.05;
        printf("Seu salário com todos os reajustes será igual a: %.2f \n", s2);
    } else {
        s2 = s1 + s1*0.05;
        printf("Seu salário com o reajuste será igual: %.2f \n", s2);
    };
    
    return 0;
} */

