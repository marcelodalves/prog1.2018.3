#include <stdio.h>

int main()
{
    int n,soma,i;
    printf("\nEntre com um numero\n");
    scanf("%d",&n);  
i=1;
soma=0;

for (i=1;i<=n;i++)
{
    soma=soma+i;
 }
printf("\nA soma dos %d primeiros numeros = %d\n",n,soma);

system("pause");
return 0;     
}

      
