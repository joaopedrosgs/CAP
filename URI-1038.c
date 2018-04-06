#include <stdio.h>

int main() {
  int quantidade = 0;
  int codigo = 0;
  double total = 0;

  scanf("%d", &codigo);
  scanf("%d", &quantidade);

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
  total = total * quantidade;

  printf("Total: R$: %.2f", total);
  return 0;
}
