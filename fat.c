#include <stdio.h>

int main()
{
    int i,n,fat;
    printf("\nEntre com um numero:\n");
    scanf("%d",&n);

    fat= 1;
    for (i=1; i<=n; i++)
    {
    fat = fat * i;
    }
    printf("\nFat. de %d = %d\n",n,fat);
   
    
    
    
    
    
    
    
    
    
    
    system("pause");
    return 0;
}
