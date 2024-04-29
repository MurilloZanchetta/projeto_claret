
#include <stdio.h>

int main() {
    char forma;
    float valor, total_a_vista = 0, total_a_prazo = 0, valor_total_de_compras = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite a forma de pagamento (V para a vista, P para prazo) da compra %d: ", i + 1);
        scanf(" %c", &forma);

        printf("Digite o total valor da compra %d: ", i + 1);
        scanf("%f", &valor);

        if (forma == 'V' || forma == 'v')
            total_a_vista += valor;
        else if (forma == 'P' || forma == 'p')
            total_a_prazo += valor;
        else {
            printf("Forma invalida\n");
            return 1;
        }

        valor_total_de_compras += valor;
    }

    printf("Valor total de compras a vista: %.2f\n", total_a_vista);
    printf("Valor total de compras a prazo: %.2f\n", total_a_prazo);
    printf("Valor total das compras a vista e a prazo: %.2f\n", valor_total_de_compras);

    return 0;
}