#include <stdio.h>
int main()
{
	int matA[3][3];
	int matB[3][3];
	int matC[3][3];
	int i,j;
	
	//popular os elemntos da matriz
	printf("\nMatriz A\n");
	for (i=0;i<3;i++){
		for(j=0;j<3;j++)
   		{
   			printf("\nEntre com o elemento [%d, %d]",i+1,j+1);
   			scanf("%d",&matA[i][j]);
		}	
	}
	//imprimir a matriz 
	for (i=0;i<3;i++)
	{
		printf("\n| ");
		for (j=0;j<3;j++)
		{
			printf("%d ", matA[i][j]);
		}
		printf(" |");
	}
	//imprimir a diagonal principal
	printf("\nDiagonal principal: | ");
	for(i=0;i<3;i++)
{
    printf("%d",matA[i][i]);
}
printf("\n\n");

//imprimir a diagonal secundaria
printf("\nDiagonal secundaria: | ");
j=2;
for(i=0;i<3;i++)
{
                printf("%d ",matA[i][j--]);
                }
                printf(" | ");
                
//popular os elemntos da matriz B
	printf("\nMatriz B\n");
	for (i=0;i<3;i++){
		for(j=0;j<3;j++)
   		{
   			printf("\nEntre com o elemento [%d, %d]",i+1,j+1);
   			scanf("%d",&matB[i][j]);
		}	
	}
	//imprimir a matriz 
	for (i=0;i<3;i++)
	{
		printf("\n| ");
		for (j=0;j<3;j++)
		{
			printf("%d ", matB[i][j]);
		}
		printf(" |");
	}
	//imprimir a diagonal principal
	printf("\nDiagonal principal: | ");
	for(i=0;i<3;i++)
{
    printf("%d",matB[i][i]);
}
printf("\n\n");

//calcular matC = matA + matB

for (i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
                    matC[i][j] = matA[i][j] + matB[i][j];
    }
}
//imprimir resultado
printf("\nMatriz A\n");
for (i=0;i<3;i++)
	{
		printf("\n| ");
		for (j=0;j<3;j++)
		{
			printf("%d ", matA[i][j]);
		}
		printf(" |");
	}
	printf("\nMatriz B\n");
for (i=0;i<3;i++)
	{
		printf("\n| ");
		for (j=0;j<3;j++)
		{
			printf("%d ", matB[i][j]);
		}
		printf(" |");
	}
printf("\nMatriz C\n");
for (i=0;i<3;i++)
	{
		printf("\n| ");
		for (j=0;j<3;j++)
		{
			printf("%d ", matC[i][j]);
		}
		printf(" |");
	}


		
		
		system("pause");
		
		return 0;
}
