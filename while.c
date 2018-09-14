#include <stdio.h>

int main()
{
    int n,soma,i;
    printf("\nEntre com um numero\n");
    scanf("%d",&n);  
i=1;
soma=0;

while (i<=n)
 {
      soma=soma+i;
      i++;
 }
printf("\nA soma dos %d primeiros numeros = %d\n",n,soma);

system("pause");
return 0;     
}

      
