#include "inputs.h"

int getInt(char* mensaje)
{
    int numero;
    while((getValidInt(&numero, mensaje)) == -1)
    {
        printf("Error. Ingrese solo numeros!\n");
    }
    return numero;
}
int getValidInt(int* numero, char* mensaje)
{
    int sePudo = 1;
    int esEspacio = 0;
    char cadenaCargada [20];
    int i;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", cadenaCargada);
    for(i=0; i<strlen(cadenaCargada) ; i++)
    {
        if(cadenaCargada[i]==' ')
        {
            esEspacio = 1;
            break;
        }

        if(cadenaCargada[i]!='\0')
        {
            if(cadenaCargada[i] < '0' || cadenaCargada[i] > '9')
            {
                sePudo = -1;
            }
        }
    }
    if(esEspacio == 1)
    {
        sePudo = -1;
    }
    if(sePudo == 1)
    {
        *numero = atoi (cadenaCargada);
    }
    return sePudo;
}
int getIntValidRange(int numero, char mensaje[], int max, int min)
{
    int retorno = 0;
    numero = getInt(mensaje);
    if(numero < min || numero > max)
    {
        numero = -1;
    }
    return retorno;
}
int getIntChoice(int numero, char mensaje[], int max, int min)
{
    while(getIntValidRange(numero, mensaje,max,min)==-1)
    {
        printf("Error debe ingresar %d o %d", max, min);
    }
    return numero;
}
char getChar(char mensaje[])
{
    char letter;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%c", &letter);
    letter = tolower(letter);
    return letter;
}
int getValidChar(char* letra)
{
    int retorno = 0;
    if(*letra <'a' || *letra>'z')
    {
        printf("Error. ingrese una sola letra.\n");
        retorno = 1;
    }
    return retorno;
}
char getConfirmacion(char mensaje[])
{
    char letter;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%c", &letter);
    letter = tolower(letter);
    while(letter!='s' && letter!='n')
    {
        printf("Error. Ingrese s para SI o n para NO:\n");
        fflush(stdin);
        scanf("%c", &letter);
    }
    return letter;
}
int getStringLetras(char cadena[])
{
    int i;
    int flag = 0;
    int esEspacio = 0;
    int tam = strlen(cadena);
    for(i=0; i<tam; i++)
    {
        if(cadena[i] != '\0')
        {
            if ((cadena[i]<'a' || cadena[i]>'z') && (cadena[i]<'A'||cadena[i]>'Z') && cadena[i]!=' ')
            {
                flag = -1;
            }
            if(cadena[i]!=' ')
            {
                esEspacio = -1;
            }
        }
    }
    if(esEspacio == 0)
    {
        flag = -1;
    }
    return flag;
}
int getStringNumeros(char cadena[])
{
    int i;
    int flag = 0;
    int esEspacio = 0;
    int tam = strlen(cadena);
    for(i=0; i<tam; i++)
    {
        if(cadena[i] != '\0')
        {
            if ((cadena[i]<'0' || cadena[i]>'9') && cadena[i]!=' ')
            {
                flag = -1;
            }

        }
    }
    if(esEspacio == -1)
    {
        flag = -1;
    }
    return flag;
}
void getString(char mensaje[], char cadena[])
{
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", cadena);
    while(getStringLetras(cadena)== -1)
    {
        printf("Error. Ingrese solo letras!\n");
        printf("%s", mensaje);
        fflush(stdin);
        scanf("%[^\n]", cadena);
    }
    firstToUpper(cadena);
}
void pedirCadenaSoloNumeros (char mensaje[], char cadena[])
{
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", cadena);
    while(getStringNumeros(cadena)== -1)
    {
        printf("Error. Ingrese solo numeros!\n");
        printf("%s", mensaje);
        fflush(stdin);
        scanf("%[^\n]", cadena);
    }
}
void firstToUpper(char cadena[])
{
    int tam = strlen(cadena);
    int i;
    strlwr(cadena);
    cadena[0] = toupper(cadena[0]);
    for(i=0; i<tam; i++)
    {
        if(cadena[i]!='\0')
        {
            if(isspace(cadena[i]))
            {
                cadena[i+1] = toupper(cadena[i+1]);
            }
        }
    }
}
int getValidFloat(float* numero, char* mensaje)
{
    int sePudo = 1;
    int esEspacio = 1;
    char cadenaCargada [20];
    int i;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", cadenaCargada);
    for(i=0; i<strlen(cadenaCargada) ; i++)
    {
        if(cadenaCargada[i]!='\0')
        {
            if((cadenaCargada[i] < '0' || cadenaCargada[i] > '9') && cadenaCargada[i]!='.' && cadenaCargada[i]!=' ')
            {
                sePudo = -1;
            }
            if(cadenaCargada[i]!=' ')
            {
                esEspacio = -1;
            }
        }
    }
    if(esEspacio == 1)
    {
        sePudo = -1;
    }
    if(sePudo == 1)
    {
        *numero = atof (cadenaCargada);
    }
    return sePudo;
}
float getFloat(char mensaje[])
{
    float numero;
    while((getValidFloat(&numero, mensaje)) == -1)
    {
        printf("Error. Ingrese solo numeros!\n");
    }
    return numero;
}
float pedirFlotante(char msje[])
{
	float num;

	printf("%s", msje);
	scanf("%f", &num);

	return num;
}
void getStringSinVal(char mensaje[], char cadena[])
{
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", cadena);
    firstToUpper(cadena);
}
int MenuPrincipal()
{
	int op;

	printf("1. Alta.\n");
	printf("2. Modificar.\n");
	printf("3. Baja.\n");
	printf("4. Informar.\n");
	printf("5. Salir\n");
	printf("\n");
	op = getInt("Ingrese opcion: ");
	printf("\n");

	return op;
}
int menuSector()
{
	int op;

	printf("1. Administraci?n.\n");
	printf("2. Expedici?n.\n");
	printf("3. Maestranza.\n");
	printf("4. Otros.\n");
	printf("\n");
	op = getInt("Ingrese opcion: ");
	printf("\n");

	return op;
}
int menuModificar()
{
	int op;

	printf("1. Modificar nombre.\n");
	printf("2. Modificar apellido.\n");
	printf("3. Modificar salario.\n");
	printf("4. Modificar sector.\n");
	printf("\n");
	op = getInt("Ingrese opcion: ");
	printf("\n");

	return op;
}
int menuInformar()
{
	int op;

    printf("1. Listado de los empleados ordenados alfab?ticamente.\n");
    printf("2. Total y promedio de los salarios, y cu?ntos empleados superan el salario promedio.\n");
    printf("\n");
    op = getInt("Ingrese opcion: ");
    printf("\n");

	return op;
}

