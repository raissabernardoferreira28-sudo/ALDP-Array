/*
	Name: VetorBinario.cpp
	Author: Raissa Bernardo
	Date: 14/05/26 11:06
	Description: Programa para carregar um vetor com elementos positivos e negativos e copiar para um novo vetor transformando em binário
*/

#include <stdio.h>
main()
{
	int numeros[12], binario[12]; 
	int x = 0;
	
	puts("Carregue o vetor com 12 numeros positivos ou negativos: ");
	for (x; x < 12; x++)
		scanf("%d", &numeros[x]);
		
	//Gerendo o vetor binário - 0's e 1's
	x = 0;
	while(x < 12)
	{ 
		if(numeros[x] < 0)
			binario[x] = 0;
		else 
			binario[x] = 1;
	x = x +1;
	}
	
	//Ipressão do vetor numeros
	puts("\n\n===> Conteudo do Vetor Numeros <===");
	for(x = 0; x < 12; x++)
		printf("%d|", numeros[x]);
		
 	puts("\n\n===> Conteudo do Vetor Binario <===");
	for(x = 0; x < 12; x++)
		printf("%d|", binario[x]);
		
}//fim do main