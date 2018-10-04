/*PROGRAMA REALIZADO POR JAVIER MORALES
MM18014
UNIVERSIDAD DE EL SALVADOR
PROGRAMACION
TAREA 2*/



#include <iostream>		 //libreria para input and output del sistema
#include <iomanip> 		//libreria necesaria para el set precision

using namespace std;

void limpieza(); 		//declaracion de funcion limpieza de espacio
void p();		//declaracion de funcion system pause
float oper(float min, float costo);		//declaracion de funcion operacion donde multiplica el minuto por el costo


int main() {
	float costo; 		//variable flotante para el costo del minuto en 2 decimales
	float min;		//variable flotante para minutos llamados con dos decimales
	float total; 		//variable que almacena el valor total de la llamada
	
	do{ 		//ciclo para validar datos
		cout<<"Introduzca los minutos de la llamada: ";
		cin>>min; 
		limpieza(); 		//Llamado de la funcion limpieza
	} while (min<=0);		 //ciclo se repetira mientras los minutos sean menores o iguales a 0
	
		if (min<=10){ 		//condicion a cumplir si los minutos son iguales o menores a 10
		costo=0.05; 		//aplicando valor a variable costo
		total= oper(min, costo); 		//aplicar valor a variable total haciendo uso de la funcion oper
		cout<<"El total a pagar es de: $"<<fixed<<setprecision(2)<<total<<endl; 		//imprimir resultado con 2 decimales
		cout<<"El minuto esta siendo cobrado a: $"<<fixed<<setprecision(2)<<costo<<endl;		//imprimir resultado de costo con 2 decimales
		p();		//llamado a funcion system pause
		limpieza();		//Llamado de la funcion limpieza
	} else if(min<=15){		//condicion a cumplir si los minutos son iguales o menores a 15
		costo=0.08;		//aplicando valor a variable costo
		total= oper(min, costo);		//aplicar valor a variable total haciendo uso de la funcion oper
		cout<<"El total a pagar es de: $"<<fixed<<setprecision(2)<<total<<endl;		//imprimir resultado con 2 decimales
		cout<<"El minuto esta siendo cobrado a: $"<<fixed<<setprecision(2)<<costo<<endl;		//imprimir resultado de costo con 2 decimales
		p();		//llamado a funcion system pause
		limpieza();		//Llamado de la funcion limpieza
	} else {		//entonces si los minutos son mayores a 15
		costo=0.10;		//aplicando valor a variable costo
		total= oper(min, costo);		//aplicar valor a variable total haciendo uso de la funcion oper
		cout<<"El total a pagar es de: $"<<fixed<<setprecision(2)<<total<<endl;		//imprimir resultado con 2 decimales
		cout<<"El minuto esta siendo cobrado a: $"<<fixed<<setprecision(2)<<costo<<endl;		//imprimir resultado de costo con 2 decimales
		p();		//llamado a funcion system pause
		limpieza();		//Llamado de la funcion limpieza
	}
	
	
	
	return 0;
}

void limpieza(){ //funcion de limpieza de pantalla
	system ("cls");
}

void p(){ //funcion para el system pause
	system("pause");
}

float oper(float min, float costo){ //funcion para operar los minutos por el costo y retornar el valor total
	return min*costo;
}
