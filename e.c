#include "stdio.h"
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

// by Leandro Rometsch
int main(int argc, char *argv[])  {
  signed int a;
  signed int b; // signed -> algo works with negative numbers
  int result = 0;
  bool inv = false;

  // get a and b from user
  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);

  // is a negative? If yes, indicate negation of result at the end
  if (a < 0) {
    inv = true;
    a = abs(a); // a = absulute value of a
  }

  // egypt multiplication
  while (a > 0) 
  {
    if (a % 2 != 0) { // is a uneven?
      result = result + b;
    }
    a = a>>1; // a = a / 2
    b = b<<1; // b = b * 2
  }

  // negate result if a was below zero
  if(inv) {
    result = ~(result)+1;
  }

  printf("Result = %d\n", result);

  return 0;
}