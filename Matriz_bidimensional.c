/*
	Name: Matriz.cpp
	Author: Raissa Bernardo
	Date: 28/05/26 11:14
	Description: Programa para fazer a carga em uma matriz quadrada de ordem 3.
*/

# include <stdio.h>

main()
{
	int mat [3][3];
	int i, j, ordem;
    int somaDP, somaADP, somaBDP;
	i = 0;
	j = 0;
    ordem = 3;
    somaDP = 0;
	somaADP = 0;
	somaBDP = 0;
	
	//Realizar a carga da matriz
	puts("Digite 9 numeros inteiros: ");
	
	do
	{
		do
		{
			printf("[%d][%d]:", i, j);
			scanf("%d", &mat[i][j]);
			j = j + 1;
		}while(j < 3);
	j = 0;
	i = i + 1;
	}while(i < 3);
	
	//Exibindo o conteúdo da matriz
	puts("\n\n <<< Conteudo da matriz >>>");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			printf("%d\t", mat[i][j]);
	puts("\n");
	}

    //Exibindo os elementos da Diagonal Principal 
	puts("Elementos da Diagonal Principal (DP): ");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if(i==j)
            {
				printf("%d|", mat[i][j]);
            somaDP = somaDP + mat[i][j];
			}
	printf("===> Soma da DP: %d", somaDP);

    //Exibindo os elementos acima da Diagonal Principal
	puts("\n\nElementos acima da Diagonal Principal (DP): ");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if(i < j)
            {
				printf("%d|", mat[i][j]);
            somaADP = somaADP + mat[i][j];
     		}
    printf("===> Soma da ADP: %d", somaADP);
				
	//Exibindo os elementos abaixo da Diagonal Principal
	puts("\n\nElementos abaixo da Diagonal Principal (DP): ");
	for (i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if(i > j)
            {
				printf("%d|", mat[i][j]);
            somaBDP = somaBDP + mat[i][j];
			}
	printf("===> Soma da BDP: %d", somaBDP);
				
	//Exibindo os elementos da Diagonal Secundária 
	puts("\n\nElementos da Diagonal Secundaria (DS): ");
	for (i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if(i + j == ordem - 1)
				printf("%d|", mat[i][j]);
				
	//Exibindo os elementos acima da Diagonal Secundária 
	puts("\n\nElementos acima da Diagonal Secundaria (DS): ");
	for (i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if(i + j < ordem - 1)
				printf("%d|", mat[i][j]);
				
	//Exibindo os elementos acima da Diagonal Secundária 
	puts("\n\nElementos abaixo da Diagonal Secundaria (DS): ");
	for (i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if(i + j > ordem - 1)
				printf("%d|", mat[i][j]);
}//Fim da matriz