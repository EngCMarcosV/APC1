#include <stdio.h>

int main (){

float valor = 0.0f;
float valor_do_desconto = 0.0f;

printf("Entre com o valor: ");
scanf("%f", &valor);

if (valor <= 100.0f) {
valor_do_desconto = valor * 0.01;
}

if (valor > 100.0f && valor <= 500.0f) {
  valor_do_desconto = valor * 0.05;
}

if (valor > 500.0f) {
  valor_do_desconto = valor * 0.1;
}

printf("O valor do desconto foi de %.2f\n", valor_do_desconto);
  
  return 0;
}