#include<stdio.h>
#include<stdlib.h>

struct prenda
{
	char prenda[20];
};

int main()
{
	int numeroprendas, contador, contador2, menu, i, cambiarnombre, contadorprendas = 1, contadorprendas2 = 1, eliminarprenda;
	struct prenda prenda1[9];
	
	printf("¿Cuantas prendas va a ingresar? Maximo 9\n");
	scanf("%i", &numeroprendas);
	
	contador=0;
	do
	{
		printf("Ingrese el nombre de las prendas\n");
		scanf("%s", prenda1[contador].prenda);
		contador++;
	}
	while(contador<numeroprendas);
	
	system("cls");
	printf("Estas son tus prendas...\n");
	for(i = 0 ; i < numeroprendas; i++)
		printf("%i %s\n", contadorprendas++, prenda1[i].prenda);
	

	
	contador2=0;		
	do
	{
	printf("¿Desea cambiar el nombre de una prenda o borrar una prenda?\n1:Cambiar\n2:Borrar\n3:Salir\n\n");
	scanf("%i", &menu);
		switch(menu)
		{
			case 1:
				
				printf("Que numero de prenda deseas cambiar?\n");
				scanf("%i", &cambiarnombre); 
				cambiarnombre--;
				printf("Ingrese el nuevo nombre de la prenda\n");
				scanf("%s", prenda1[cambiarnombre].prenda);	
				printf("Estas son tus prendas...\n");
				for(i = 0 ; i < numeroprendas; i++)
					printf("%i %s\n", contadorprendas2++, prenda1[i].prenda);
							
			break;
			
			case 2: 
			
				printf("Que numero de prenda deseas eliminar\n");
				scanf("%d", &eliminarprenda);
				eliminarprenda--;
				
			
			
			break;
			case 3: contador2++;
			
			break;
			default: 
				printf("Esa opcion no existe");
			break;
		}
	}while(contador2==0);
	
return 0;
}

