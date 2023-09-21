#include<stdio.h> //printf - escreve no console; scanf - ler do sonsole;


int main(){
char item1[61] = "Caneta preta com tampa";
int quantidade1 = 1;
float preco1 = 20.0f;

char item2[61] = "Lápis";
int quantidade2 = 5;
float preco2 = 5.0f;

char item3[61] = "Borracha";
int quantidade3 = 2;
float preco3 = 6.0f;

printf("Entre com o nome do item 1: ");
scanf("%s",item1);
printf("Entre com a quantidade do item 1: ");
scanf("%i", &quantidade1);
printf("Entre com o preço do item 1: ");
scanf("%f", &preco1);
  
printf("Entre com o nome do item 2: ");
scanf("%s",item2);
printf("Entre com a quantidade do item 2: ");
scanf("%i", &quantidade2);
printf("Entre com o preço do item 2: ");
scanf("%f", &preco2);

printf("Entre com o nome do item 3: ");
scanf("%s",item3);
printf("Entre com a quantidade do item 3: ");
scanf("%i", &quantidade3);
printf("Entre com o preço do item 3: ");
scanf("%f", &preco3);

  


float total = quantidade1 * preco1;
total = total + quantidade2 * preco2;
total = total + quantidade3 * preco3;
  

printf("--------------------------\n");
printf("    N O T A L E G A L    \n");
printf("--------------------------\n"); 
printf("Item          Qtd    Valor\n");
printf("%-13.13s %03i %8.2f\n", item1, quantidade1, preco1);
printf("%-13.13s %03i %8.2f\n", item2, quantidade2, preco2);
printf("%-13.13s %03i %8.2f\n", item3, quantidade3, preco3);
printf("--------------------------\n"); 
printf("Total      R$  %11.2f\n", total);
printf("--------------------------\n"); 

  
  return 0;
  
}