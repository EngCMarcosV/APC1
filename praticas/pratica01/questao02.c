#include <stdio.h>

int main() {
  
int base = 5;
int altura = 3;
printf("Informe o valor da base do triângulo (em metros): ");
scanf("%i", &base);
printf("Informe o valor da altura do triângulo (em metros): ");
scanf("%i", &altura);

float area = base * altura / 2.0f;
  
printf("A área do triangulo é %3.2f metros quadrados\n", area);

  
  return 0;
}