/*PROGRAMA REALIZADO POR JAVIER MORALES
MM18014
UNIVERSIDAD DE EL SALVADOR
PROGRAMACION
TAREA 2*/


#include <iostream>		//libreria para input and output del sistema		

using namespace std;

void cl();		 //declaracion funcion limpieza
float soda(float sa, float s); 		 //declaracion funcion total de agua para sodas
float sod(float saz, float s);		//declaracion funcion total de azucar para sodas
float jugo(float ja, float j);		//declaracion funcion total de agua para jugos
float jug(float jaz, float j);		//declaracion funcion total de azucar para jugos
void f(); 		//declaracion funcion de impresion de documentacion
void sy();		//declaracion funcion system pause

int main(){
	float in;		//declaracion de variable insumos a verificar
	float s;		//declaracion de variable de sodas producidas
	float j;		//declaracion de variable de jugos producidos
	float sa=0.5;		//declaracion de variable de valor a el agua de soda
	float saz=0.8;		//declaracion de variable de valor a el azucar de soda
	float ja=0.6;		//declaracion de variable de valor a el agua de jugo
	float jaz=0.7;		//declaracion de variable de valor a el azucar de jugo
	
	do{ 	//ciclo para validar datos y saber que tipo de refresco quiere verificar
	
	cout<<"¿Que tipo de bebida desea calcular sus insumos?"<<endl;
	cout<<"1- Sodas."<<endl;
	cout<<"2- Jugos."<<endl;
	cin>>in;
	cl(); 		//llamado de funcion limpieza
	} while(in<1 || in>2);		 //repetir ciclo mientras el numero sea menor a 1 y mayor a 2


	if (in==1){ 		//condicion a cimplir si el insumo a verificar es el 1, o sea las sodas
		cout<<"¿Cuantas sodas se producieron?"<<endl;
		cin>>s;		 //introduccion de sodas producidas
		cl();		//llamado de funcion limpieza
		sa=soda(sa,s);  		//calcular el agua total usando la funcion soda
		saz=sod(saz,s);		//calcular el azucar total usando la funcion sod
		cout<<"Los insumos total para la elaboracion de sodas del dia fueron:"<<endl;
		cout<<"Agua: "<<sa<<" l de agua."<<endl;
		cout<<"Azucar: "<<saz<<" kg de azucar."<<endl;
		sy();		//llamado a funcion system pause
		cl();		//llamado de funcion limpieza
		f();		//llamado a funcion de impresion de documentacion
	} else { 		//entonces si el insumo a verificar es el 2, o sea los jugos
		cout<<"¿Cuantos jugos se producieron?"<<endl;
		cin>>j;
		cl();		//llamado de funcion limpieza
		ja=jugo(ja,j);		//calcular el agua total usando la funcion jugo
		jaz=jug(jaz,j);		//calcular el azucar total usando la funcion jug
		cout<<"Los insumos total para la elaboracion de jugos del dia fueron:"<<endl;
		cout<<"Agua: "<<ja<<" l de agua."<<endl;
		cout<<"Azucar: "<<jaz<<" kg de azucar."<<endl;
		sy();		//llamado a funcion system pause
		cl();		//llamado de funcion limpieza
		f();		//llamado a funcion de impresion de documentacion
	}
	
	return 0;
}

void cl(){ 		//funcion para limpieza de pantalla
	system("cls"); 
}

float soda(float sa, float s){ 		//funcion para saber el agua total en sodas multiplicando las variables de sodas hechas por el valor de agua en cada una
	

	return sa*s;
}
float sod(float saz, float s){		//funcion para saber el azucar total en sodas multiplicando las variables de sodas hechas por el valor de azucar en cada una
	

	return saz*s;
}

float jugo(float ja, float j){		//funcion para saber el agua total en jugos multiplicando las variables de jugos hechas por el valor de agua en cada una
	
	return ja*j;
}

float jug(float jaz, float j){		//funcion para saber el azucar total en jugos multiplicando las variables de jugos hechas por el valor de azucar en cada una
	
	return jaz*j;
}
 
void f(){		//funcion para impresion de documentacion del sistema
	cout<<"Programa realizado por: JAVIER MORALES."<<endl;
	cout<<"UNIVERSIDAD DE EL SALVADOR"<<endl;
}

void sy(){ 		//funcion para el system pause
	system("pause");
}
