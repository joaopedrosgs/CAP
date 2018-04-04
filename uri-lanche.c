#include <stdio.h>

int main() {
    int qtdade=0, codigo;
    double total=0;

        scanf("%d", &codigo);
        scanf("%d", &qtdade);

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
        total = total*qtdade;




      printf("Total: R$: %.2f", total);

    return 0;
}