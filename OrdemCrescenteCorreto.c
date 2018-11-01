#include <stdio.h>

int main()
{
	int n1,n2,n3;
	
	printf("\nDigite seu primeiro numero\n");
	scanf("%d",&n1);
	
	printf("\nDigite seu segundo numero\n");
	scanf("%d",&n2);
	
	printf("\nDigite seu terceiro numero\n");
	scanf("%d",&n3);
	
	if ((n1>n2)&&(n2>n3))
	printf("\nA ordem crescente eh %d > %d > %d\n",n3,n2,n1);
	
	else if ((n1>n3)&&(n3>n2))
	printf("\nA ordem crescente eh %d > %d > %d\n",n2,n3,n1);
	
	else if ((n2>n1)&&(n1>n3))
	printf("\nA ordem crescente eh %d > %d > %d\n",n3,n1,n2);
	
	else if ((n2>n3)&&(n3>n1))
	printf("\nA ordem crescente eh %d > %d > %d\n",n1,n3,n2);
	
	else if ((n3>n1)&&(n1>n2))
	printf("\nA ordem crescente eh %d > %d > %d\n",n2,n1,n3);
	
	else if ((n3>n2)&&(n2>n1))
	printf("\nA ordem crescente eh %d > %d >%d\n",n1,n2,n3);
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
