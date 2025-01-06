#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero; 
    
    int contadordenpares = 0; 

    int contadordenimpares = 0;


    do
    {
        printf("ingresar un numero (negativo para acabar  el programa): ");
        scanf("%d", &numero);

        if (numero > 0)
        {
            if (numero % 2 == 0)
            {
                contadordenpares++; 
            }
            else { 
                contadordenimpares++;
            }
            
        }
        
    } while (numero >= 0 );
    
    printf("cantidad de numeros pares: %d\n", contadordenpares); 
    printf("cantidad de numeros pares: %d\n", contadordenimpares);
    
    return 0;
}
