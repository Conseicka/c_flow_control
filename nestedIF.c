#include<stdio.h>
int opt1 = 2;
int opt2 = 2;

int main(){
    printf("Bienvenido a platzi store : \n");
    printf("Opcion 0 para platzi bebidas \n");
    printf("Opcion 1 para platzi comidas \n");
    printf("Opcion 2 oara platzi postres \n");

    //Este programa genera menus segun el usuario elija
    if ( opt1 == 0 ) {
        printf("Usted eligio la opcion 0, ver nuestro menu de bebidas, elija una:\n");
        printf("Opcion 0 para platzi cola cero \n");
        printf("Opcion 1 para platzi cola normal \n");
        printf("Opcion 2 para platzi pina colada \n");

        if ( opt2 == 0 ) 
            printf("Uste eligio una platzi cola cero, mmm que rico!");
        else if ( opt2 == 1 )
            printf("Usted eligio una platzi cola con azucar, mmm que rico!");
        else if ( opt2 == 2 )
            printf("Usted eligio una platzi pina colada con azucar, mmm que rico!");
        else 
            printf("Opcion invalida");
        
    }
    else if ( opt1 == 1 ){
        //aqui va el menu de alimentos
        printf("Usted eligio la opcion 1, ver nuestro menu alimentos, elija una:\n");
        printf("Opcion 0 para platzi tacos \n");
        printf("Opcion 1 para platzi pizza \n");
        printf("Opcion 2 para platzi  guaraches en ahogada\n");

         if ( opt2 == 0 ) 
            printf("Uste eligio una platzi tacos, mmm que rico!");
         else if ( opt2 == 1 )
            printf("Usted eligio una platzi pizza, mmm que rico!");
         else if ( opt2 == 2 )
            printf("Usted eligio una platzi guaraches en ahogada, mmm que rico!");
         else 
            printf("Opcion invalida");
        
    }
    else if ( opt1 == 2 ){
        //aqui va el menu de postres
        printf("Usted eligio la opcion 2, ver nuestro menu de postres, elija una:\n");
        printf("Opcion 0 para platzi dona \n");
        printf("Opcion 1 para platzi nieve \n");
        printf("Opcion 2 para platzi pay de manzana \n");

         if ( opt2 == 0 ) 
            printf("Uste eligio una platzi dona, mmm que rico!");
         else if ( opt2 == 1 )
            printf("Usted eligio una platzi nieve, mmm que rico!");
         else if ( opt2 == 2 )
            printf("Usted eligio una platzi pay de manzana, mmm que rico!");
         else 
            printf("Opcion invalida");
    }
    return 0;
}