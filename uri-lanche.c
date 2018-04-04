#include <stdio.h>

int main() {
    int pedidos_restantes=2, codigo;
    double total=0;
    do {
        scanf("%d", &codigo);
        switch (codigo) {
            case 1:
                total = total + 4.00;
                break;

            case 2:
                total = total + 4.50;
                break;

            case 3:
                total = total + 5.00;
                break;

            case 4:
                total = total + 2.00;
                break;

            case 5:
                total = total + 1.50;
                break;

            default:
                break;
        }
        pedidos_restantes = pedidos_restantes - 1;
    } while (pedidos_restantes != 0);


      printf("Total: R$: %.2f", total);

    return 0;
}