/* 
Faça um programa em C que calcule as raízes de uma equação do 2 grau através da fórmula de de Bhaskara (-b +/- raiz_quadrada(b² -4ac)2a).
*/

#include <stdio.h>
#include <math.h>

int main(){
int coeficiente_a = -1;
  int coeficiente_b = 2;
  int coeficiente_c = 1;
  double delta = pow(coeficiente_b,2)-4*coeficiente_a*coeficiente_c;
  double raiz1 = (-coeficiente_b + sqrt(delta))/2*coeficiente_a;
  double raiz2 = (-coeficiente_b - sqrt(delta))/2*coeficiente_a;
  
  

  printf("As raizes da equação %dX²+ %dX+ %d são %f e %f\n",coeficiente_a, coeficiente_b, coeficiente_c, raiz1, raiz2);

  return 0;
}