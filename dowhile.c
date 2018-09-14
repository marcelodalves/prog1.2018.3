#include <stdio.h>
int main()
{
    int n,soma,i;
    printf("\nEntre com seu numero\n");
    scanf("%d",&n);
    
    i=1;
    soma=0;
    
    do
    {
       soma=soma+i;
       i++;
    } while (i<=n);
    
    printf("\nA soma dos %d primeiros numeros eh = %d",n,soma);
    
    
    system("pause");
    return 0;
}
