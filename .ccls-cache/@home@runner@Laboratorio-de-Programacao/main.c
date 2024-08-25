#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //Exercício 1: Verifica se o número é positivo ou negativo
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num >= 0) {
        printf("O número %d é positivo.\n", num);
    } else {
        printf("O número %d é negativo.\n", num);
    }

    //Exercício 5: Calcula a média de duas notas e resultado
    float nota1, nota2, soma;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    soma = (nota1 + nota2) / 2;
    if (soma >= 6)
        printf("Parabéns, você foi aprovado!\n");
    else if (soma < 6 && soma > 3)
        printf("Exame!\n");
    else
        printf("Você foi reprovado!\n");

    //Exercício 6: Verifica o maior número entre dois números
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("O maior número é: %d\n", num1);
    } else {
        printf("O maior número é: %d\n", num2);
    }

    //Exercício 7: Ler um valor que esteja na faixa de 1 a 9
    int faixa;
    printf("Digite um número:");
    scanf("%d", &faixa);
    if (faixa >= 1 && faixa <= 9) {
        printf("O valor está na faixa permitida.\n");
    } else {
        printf("O valor está fora da faixa permitida.\n");
    }

    //Exercício 8: Apto para votar ou não
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 16) {
        printf("Você pode votar esse ano!");
    } else {
        printf("Você não pode votar esse ano!");
    }

    return 0;
}