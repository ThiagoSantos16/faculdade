#include<stdio.h>
#include<stdlib.h>


int main (void)


float NP1, NP2, PIM, MEDIA;


printf (" Digite a nota da NP1 (peso 4)\n");
scanf ("%f",&NP1);
printf ("Digite a nota da NP2 (peso 4)\n");
scanf ("%f",&NP2);
printf ("Digite a nota do PIM (peso 2)\n");
scanf ("%f", &PIM);

MEDIA= (NP1 * 4 + np2 * 4 + PIM * 2) / ( 4 + 4 + 2);
printf ("A media e %.f\ n", MEDIA);

if (MEDIA>=7){
printf("Aluno aprovado.\n");
}else{
printf ("Aluno de exame.\n");
}

return 0;
