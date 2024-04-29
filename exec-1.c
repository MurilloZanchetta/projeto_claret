#include <stdio.h>

int main() {
    int numero;
    float salario, aumento_salario, novo_salario;


    printf("Numero 1: Escriturario\n");
    printf("Numero 2: Secretario\n");
    printf("Numero 3: Caixa\n");
    printf("Numero 4: Gerente\n");
    printf("Numero 5: Diretor\n");

    printf("Digite o numero do cargo (1-5): ");
    scanf("%d", &numero);

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    switch (numero) {
        case 1:
            aumento_salario = salario * 0.5;
            novo_salario = salario + aumento_salario;
            printf("Cargo: Escriturario\n");
            break;
        case 2:
            aumento_salario = salario * 0.35;
            novo_salario = salario + aumento_salario;
            printf("Cargo: Secretario\n");
            break;
        case 3:
            aumento_salario = salario * 0.2;
            novo_salario = salario + aumento_salario;
            printf("Cargo: Caixa\n");
            break;
        case 4:
            aumento_salario = salario * 0.1;
            novo_salario = salario + aumento_salario;
            printf("Cargo: Gerente\n");
            break;
        case 5:
            novo_salario = salario;
            printf("Cargo: Diretor\n");
            break;
        default:
            printf("Numero invalido!\n");
            return 1;
    }

    printf("aumento_salario: R$ %.2f\n", aumento_salario);
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}