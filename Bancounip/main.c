#include <stdio.h>
#include <stdlib.h>

int main()
{
  int saldo=200;
int deposito=0;
int saque=0;
int opcao=0;
char nome[30];

system("clear");

printf("Digite seu nome:");
scanf("%s", nome);

system ("clear");

printf("\n");
printf("*** Bem vindo ao Bank ***\n");
printf("             %s", nome);
printf("\n");
printf("\n");
 printf("Digite 1 para saque \n");
printf("Digite 2 para deposito\n");
printf("\n");
printf("\n");
 printf("Opcao:");
scanf("%d", &opcao);

if(opcao == 1)
{
system("clear");

printf("\n");
printf("\n");
printf("*** Voce selecionou a  opcao SAQUE***/n");
printf("           saldo atual: %d", saldo);
printf("\n");
printf("\n");
printf("Qual valor que deseja SACAR ?");
printf("\n");
printf("\n");
printf("Valor do saque:");
scanf("%d", &saque);
if(saque > saldo || saque <0)
{

system("clear");
printf("\n");
printf("\n");
printf("\n");
printf("     *** Saldo insuficiente!!! ***            ");

printf("\n");
printf("\n");
printf("\n");
}
}
else { 
saldo= saldo - saque;

printf("\n");
printf("\n");
printf("\n");

system ("clear");
printf("\n");
printf("\n");
printf("     *** Seu saldo atual e de : %d", saldo);

printf("***");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
}
if( opcao == 2);
{
system("clear");
printf("\n");
printf("\n");
printf("*** Voce selecionou a opcao DEPOSITO ***/n");
printf("             Saldo atual: %d", saldo);
printf("\n");
printf("\n");
printf("\n");
printf("Digite o valor que deseja DEPOSITAR: ");
scanf("%d", &deposito);
saldo = saldo + deposito;
/*saldo+= deposito  */

system ("clear");

printf("\n");
printf("\n");
printf("      *** Seu saldo atual e de: %d", saldo);
printf("***");
printf("\n");
printf("\n");
printf("\n");

}
}

