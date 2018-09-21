#include <stdio.h>

int main()
{
    int t,i,j;
    printf("\nEntre com tamanho do quadrado\n");
    scanf("%d",&t);
    
    for (i=1; i<=t;i++){
        for(j=1;j<=t;j++)
        {
             if(i==1 || i==t)
             printf("#");
             
             else if (j==1 || j==t)
             printf("#");
             
             else
             printf(" ");
             
        }
        printf("\n");
}

    
    
    
    system("pause");
    return 0;
}
