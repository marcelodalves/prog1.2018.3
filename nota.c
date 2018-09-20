#include <stdio.h>

int main()
{
    float nota, maior, menor,soma=0,media;
    int i;
    maior = -1;
    menor = 9999;
    
    
    for (i=0; i<5; i++)
    {
        printf("\nEntre com nota %d:\n",i+1);
        scanf("%f",&nota);
        
                    if (nota>maior)
        {
                       maior = nota;
        }
                  if (nota<menor)
       {
               menor=nota; 
       }
             soma= soma+nota; //acumula todas as notas
            
    }
     media= soma/i;
    
       
       printf("\nMenor nota lida = %.2f\n",menor);      
       printf("\nMaior nota lida = %.2f\n",maior);
       printf("\nA media das 5 notas eh igual a :%f\n",media);
    
                   
system("pause");
return 0;
}
