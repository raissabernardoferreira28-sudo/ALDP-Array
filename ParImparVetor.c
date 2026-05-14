/*
	Name: ParImparVetor.cpp
	Author: Raissa Bernardo
	Date: 14/05/26 11:32
	Description: Programa para separar números pares dos ímpares e vetors especificos
 
*/

#include <stdio.h>

main()
{ 
	int par[20], impar[20];
	int p, i, cont, num;
	p = i = cont = num = 0;
	puts("Programa para sepárar numeros PARES dos iMPARES");
	
	//Carga no vetor
	cont = 0;
	do 
	{
		printf("%do num: ", cont + 1);
		scanf("%i", &num);
			if(num%2 == 0)
			{
				par[p] = num;
				p++;
			}
			else
			{
				impar[i] = num;
				i++;
			}
	cont = cont + 1;
	}while(cont < 20);
	
	puts("\n\n===> Conteudo do Vetor PAR <===");
	cont = 0;
	while(cont<p)
	{
		printf("%d|", par[cont]);
		cont++;
	}
	
	puts("\n\n===> Conteudo do Vetor IMPAR <===");
	cont = 0;
	
	while(cont < i)
	{
		printf("%d|", impar[cont]);
		cont++;
	}
}//fim do programa