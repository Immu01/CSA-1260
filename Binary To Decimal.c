#include <stdio.h>

int main() {
  int binaryNumber, decimalNumber = 0, i = 0, remainder;

  printf("Enter a binary number: ");
  scanf(" %d ", &binaryNumber);

  while (binaryNumber != 0) {
    remainder = binaryNumber % 10;
    decimalNumber = decimalNumber + remainder * (2 * i);
    binaryNumber = binaryNumber / 10;
    i++;
  }

  printf("The decimal equivalent of the binary number is: %d ", decimalNumber);

  return 0;
}