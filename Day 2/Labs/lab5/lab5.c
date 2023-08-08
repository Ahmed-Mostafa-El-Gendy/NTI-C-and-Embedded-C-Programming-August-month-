#include <stdio.h>

int main() {

  char op=0;
  int op1=0, op2=0;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%d %d", &op1, &op2);

  switch (op) {
    case '+':
      printf("%d + %d= %d", op1, op2, op1 + op2);
      break;
    case '-':
      printf("%d - %d = %d", op1, op2, op1 - op2);
      break;
    case '*':
      printf("%d * %d = %d", op1, op2, op1 * op2);
      break;
    case '/':
      printf("%d / %d = d", op1, op2, op1 / op2);
      break;
    default:
      printf(" operator is not correct");
  }

  return 0;
}
