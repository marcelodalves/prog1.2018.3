#include <stdio.h>
#include <string.h>

int main()
{
	int i,tam;
	char palavra[30];
	
	printf("\nEntre com a palavra\n");
	gets(palavra);
	tam = strlen(palavra);
	//for(i=29;i>=0;i--) <------- funciona sem o tam e sem o strlen, mas tem os simbolos
	for(i=tam-1;i>=0;i--) //<----- usa quando tiver a variavel tam e strlen
	{
		printf("%c",palavra[i]);
	}
		printf("\n");
		
	//imprimir em caixa alta
	
	for(i=0;i<tam;i++)
	{
		if(palavra[i]>=65 && palavra[i]<=90) //<------ 65 sendo a primeira letra A, e 90 a ultima Z
		{
		printf("%c",palavra[i]);
	}
	else
	{
		printf("%c",palavra[i]-32);
	}
	}
	return 0;
}
