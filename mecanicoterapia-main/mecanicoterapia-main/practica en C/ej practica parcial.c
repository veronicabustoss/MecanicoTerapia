#include<stdio.h>

struct Alumnos{
	int dni;
	char nombre [20];
	char apellido [20];
	int edad;
	char direccion [20];
	int telefono;
};

int main(){
	struct Alumnos Datos [50];
	int opcion, cant, vf=0;
	
	
	do{
	printf("Elija la opcion deseada: \n");
	printf(" [1] Carga de alumnos \n [2] Listar alumnos cargados \n [3] Busqueda \n Ingrese 0 para salir \n");
	scanf("%i", &opcion);
	
	
	switch (opcion){
		case 1: 
			printf("Ingrese la cantidad de Alumnos: ");
			scanf("%i", &cant);
			for(int i=vf; i<vf+cant; i++){
				printf("Ingrese numero de dni sin puntos:  ");
				scanf("%i", &Datos[i].dni);
				printf("Ingrese nombre: ");
				scanf("%s", Datos[i].nombre);
				printf("Ingrese apellido: ");
				scanf("%s", Datos[i].apellido);
			}
			vf+=cant;
		break;
		
		case 2:
			for(int i=0; i<vf; i++){
				printf("%s\n", Datos[i].nombre);
				printf("%i\n", Datos[i].dni);
				printf("%s\n\n", Datos[i].apellido);
			}
		break;
		
		case 3:
			int bdni, bandera=0;
			
			printf("Ingrese numero de dni sin puntos: ");
			scanf("%i",&bdni);
			
			for(int i=0; i<vf; i++){
				if(bdni == Datos[i].dni){
					printf("%s", Datos[i].nombre);
					printf("%s", Datos[i].apellido);
					bandera=1;
					break;
				}
			}
			
			if(bandera == 0){
				printf("El dni no se encontro \n");
			}
	}
}while(opcion != 0);

	return 0;
}