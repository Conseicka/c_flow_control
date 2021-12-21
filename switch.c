#include <stdio.h>

int opt1 = 2;
int opt2 = 2;

int main()
{
    printf("Bienvenido a platzi store : \n");
    printf("Opcion 0 para platzi bebidas \n");
    printf("Opcion 1 para platzi comidas \n");
    printf("Opcion 2 oara platzi postres \n");

    switch (opt1)
    {
    case 1:
        //bebidas
        printf("Usted eligio la opcion 0, ver nuestro menu de bebidas, elija una:\n");
        printf("Opcion 0 para platzi cola cero \n");
        printf("Opcion 1 para platzi cola normal \n");
        printf("Opcion 2 para platzi pina colada \n");

        switch (opt2)
        {
        case 1:
            //bebida 1
            printf("Uste eligio una platzi cola cero, mmm que rico!");
            break;
        case 2:
            //bebida 2
            printf("Usted eligio una platzi cola con azucar, mmm que rico!");
            break;
        case 3:
            //bebida 3
            printf("Usted eligio una platzi pina colada con azucar, mmm que rico!");
            break;
        default:
            //opcion invalida
            printf("Opcion invalida");
            break;
        }
        break;

    case 2:
        //alimentos
        printf("Usted eligio la opcion 1, ver nuestro menu alimentos, elija una:\n");
        printf("Opcion 0 para platzi tacos \n");
        printf("Opcion 1 para platzi pizza \n");
        printf("Opcion 2 para platzi  guaraches en ahogada\n");

        switch (opt2)
        {
        case 1:
            //alimento 1
            printf("Uste eligio una platzi tacos, mmm que rico!");
            break;
        case 2:
            //alimento 2
            printf("Usted eligio una platzi pizza, mmm que rico!");
            break;
        case 3:
            //alimento 3
            printf("Usted eligio una platzi guaraches en ahogada, mmm que rico!");
            break;
        default:
            //opcion invalida
            printf("Opcion invalida");
            break;
        }
        break;

    case 3:
        //postres
        printf("Usted eligio la opcion 2, ver nuestro menu de postres, elija una:\n");
        printf("Opcion 0 para platzi dona \n");
        printf("Opcion 1 para platzi nieve \n");
        printf("Opcion 2 para platzi pay de manzana \n");

        switch (opt2)
        {
        case 1:
            //postre 1
            printf("Uste eligio una platzi dona, mmm que rico!");
            break;
        case 2:
            //postre 2
            printf("Usted eligio una platzi nieve, mmm que rico!");
            break;
        case 3:
            //postre 3
            printf("Usted eligio una platzi pay de manzana, mmm que rico!");
            break;
        default:
            //opcion invalida
            printf("Opcion invalida");
            break;
        }
        break;

    default:
        //opcion invalida
        printf("Opcion invalida");
    }
    return 0;
}