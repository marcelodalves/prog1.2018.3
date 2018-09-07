#include <stdio.h>

int main()
{
int n1,resto;

printf("Digite um numero aqui\n");
scanf("%d",&n1);

resto = n1 % 2;
printf("\nO resto da divisao eh igual a %d",resto);

if (resto == 0)
printf("\nO numero %d e par. \n",n1);
else
printf("\nO numero %d e impar. \n",n1); 
    
    
    
    
    
    
    
    
 getch(); 
    
 return 0;
}
