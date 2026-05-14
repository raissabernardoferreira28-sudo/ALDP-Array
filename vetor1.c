Name: Vetor1.ccp
	Author: Raissa Bernardo
	Date: 14/05/26 10:22
	Description: Programa para realizar operações com arrays unidimensionais (vetores)
*/
#include <stdio.h>

main()
{
	int vet[10], i;
	puts("Digite 10 numeros inteiros: ");
	
	//Fazer a carga no vetor com 10 nº inteiros 
	i = 0;
	do 
	{
		printf("Digite o %do numero: ", i+1);
		scanf("%i", &vet[i]);
		i++;
	}while(i < 10); 
	
	puts("\n\n===> Conteudo do Vetor <===");
	i = 0;
	while(i < 10)
	{
		printf("%d|",vet[i]); //pipe
		i = i + 1;	
	}
	
	puts("\n\n===> Conteudo do Vetor ao Contrario <===");
	for(i=9; i >= 0; i--)
		printf("%d|",vet[i]);
		
}