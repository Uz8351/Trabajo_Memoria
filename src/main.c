/*
memoria.c
*/
#include "Variables.h"
int main()
{
    
    
	printf("\n");
    /*
    La llamada "malloc()", tiene como finalidad
    la asignación dinámica de memoria.
    */
    puntero = (unsigned char *) malloc(256);
    printf("%p puntero:  ",puntero );
    for ( i = 0; i < 256; i++)
    {
    	letra=*puntero;
    	printf("%02x ",letra );
    	puntero++;
    	if (!(i%15))
    	{
    		 
    		 if (i!=256)
                printf("\n");
    		  printf("%p [Desplazamiento] : ", puntero);
    	}

    }
    printf("\n");

    
printf("Seleccione una de las direcciones de arriba a cambiar en HEX:\n");
scanf("%p%*c",&puntero);
printf("Introduzca el nuevo valor, o frase en esa posición:\n");
scanf("%hhx",&valor);
*puntero=(unsigned char)valor;
printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n" );

   
printf("\n");

           for (i = 0; i < 288; ++i) {
        printf("%02X ", ((unsigned char*)puntero)[i]);
        if (((unsigned char*)puntero)[i] >= ' ' && ((unsigned char*)puntero)[i] <= '~')
         {
            Codigo_ascii[i % 16] = ((unsigned char*)puntero)[i];
        } else {
            Codigo_ascii[i % 16] = '.';
        }
        if ((i+1) % 8 == 0 || i+1==288) {
            printf(" ");
            if ((i+1) % 16 == 0) {
                printf(" |  %s \n", Codigo_ascii);
}}}
printf("\n" );

}



	