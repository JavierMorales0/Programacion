//Hecho por: Javier Alexander Morales Melara
//Fecha: 10 de septiembre 2018

#include <iostream>
#include <iomanip> //Esta libreria sirve para activar la funcion set presicion y no tener problema con los decimales
#include<cstdlib> //es necesaria para el color del fondo

using namespace std;

int main() {
	system ("color 1f");
	float ventas; //Sirve para almacenar venta de la empresa
	float sueldo; //Sirve para calcular el salario
	
	do{		//Hacer la peticion de total de ventas...
		cout<<"  	Bienvenido 		  "<<endl;
		cout<<"------------------------------"<<endl;
		cout<<"Introduzca total de ventas: ";
		cin>>ventas;  //introduccion de valor para la variable ventas
		cout<<"------------------------------"<<endl;
		
	} while (ventas<0); //...mientras ésta no sea mayor a 0
	
	if (ventas>=0 && ventas<=500000){ //condiciones a cumplir
		sueldo= 80000;
		cout<<"El sueldo del empleado es: $" <<fixed<<setprecision(2)<< sueldo <<endl;
	} else if(ventas>=500001 && ventas<=1000000){//condiciones a cumplir
		sueldo= 160000;
		cout<<"El sueldo del empleado es: $"<<fixed<<setprecision(2)<< sueldo<<endl;
	} else if(ventas>=1000001 && ventas<=1500000){//condiciones a cumplir
		sueldo= 320000;
		cout<<"El sueldo del empleado es: $"<<fixed<<setprecision(2)<< sueldo<<endl;
	} else if (ventas>=1500001 && ventas<=2500000){//condiciones a cumplir
		sueldo= 450000;
		cout<<"El sueldo del empleado es: $"<<fixed<<setprecision(2)<< sueldo<<endl;
	} else if (ventas>=2500001 && ventas<=4000000){//condiciones a cumplir
		sueldo= 550000;
		cout<<"El sueldo del empleado es: $" <<fixed<<setprecision(2)<<sueldo<<endl;
	} else { //Cuando es mayor que 4000000
		sueldo= ventas * 0.20; //calculo del 20% del total de ventas
		cout<<"El sueldo del empleado es: $"<<fixed<<setprecision(2)<<sueldo<<endl;
	}
	
	return 0;
}
