#include <stdio.h>

int main ()
{
    int idade;

    printf("\nDigite sua idade\n");
    scanf("%d",&idade);
    
    if (idade<16)
    {
     printf("\nVoce nao pode votar!\n");
    }
    else if (idade<18)
    {
     printf("\nSeu voto eh facultativo!\n");
    }
    else if (idade<=70)
    {
     printf("\nSeu voto eh obrigatorio!\n");
    }   
    else if (idade>70)
    {
    printf("\nSeu voto eh facultativo!\n");
    }
    
    
    
    
    
    
    
    
    system("pause");
return 0;    
}
