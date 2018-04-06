/*
Snack - 1038
Adapted by Neilor Tonin, URI Brazil
Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay. This is a very simple program with the only intention of practice of selection commands.
Input: The input file contains two integer numbers X and Y. X is the product code and Y is the quantity of this item according to the above table.
Output: The output must be a message "Total: R$ " followed by the total value to be paid, with 2 digits after the decimal point.

Input Sample     	Output Sample

3 2               Total: R$ 10.00

4 3               Total: R$ 6.00

2 3               Total: R$ 13.50

*/

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
