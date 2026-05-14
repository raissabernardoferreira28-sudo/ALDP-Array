/*
	Name: FibonacciVetor.cpp
	Author: Raissa Bernardo
	Date: 14/05/26 12:05
	Description: Programa para carregar um vetor com os elementos de Fibonacci
*/

#include <stdio.h>

main()
{
	int ant, atual, prox, qtde, cont;
	ant = 1;
	atual = 1; 
	qtde = prox = cont = 0;
	
	printf("Quantos elementos de Fibonacci devo mostrar: ");
	scanf("%d", &qtde);
	int fibo[qtde];
	
	fibo[0] = ant;
	fibo[1] = atual;
	
	while(cont < qtde)
	{
		prox = atual + ant;	
		fibo[cont + 2] = prox;
		ant = atual;
		atual = prox;
		
	cont++;
	}
	
	puts("\n\n===> Conteudo do Vetor Fibonacci <===");
	for(cont = 0; cont < qtde; cont++)
	printf("%d,", fibo[cont]);
}//fim do programa 