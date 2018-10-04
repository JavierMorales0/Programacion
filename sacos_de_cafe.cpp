//Creado por JAVIER ALEXANDER MORALES
//CARNET: MM18014
//Tarea 1 PROGRAMACION


#include <iostream> //librerias

using namespace std; 

int main() {
	float sacos, iva, precio, des, total, neto, prenew, destotal; //declaracion de variables necesarias
	precio=100;
	
	cout<<"-----------------------------------------------------------------"<<endl;
	cout<<"                BIENVENIDO A CAFETERIA EL CARMEN                 "<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	
	cout<<"¿Cuantos sacos de cafe desea comprar?"<<endl; 
	cin>>sacos; //introduccion de dato
	
	if (sacos<100){ 					//condicion a cumplir
		iva= precio*0.13; 					//calculando iva
		neto= precio + iva; 					//calculando el precio neto
		total=neto*sacos; 					//calculando el total del precio neto por los sacos
		destotal= des*sacos; 					//calculando el descuento total
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"				El total a pagar es: $"<< total<< endl ; 					//imprimir el total a pagar
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"				Descuento total: $"<< destotal<< endl; 					//imprimir descuento total
	} else {
		if(sacos>=100 && sacos<200){					//condicion a cumplir
		des=precio*0.10; 					//calculando descuento
		prenew=precio - des; 					//calculando precio nuevo con descuento
		iva= prenew * 0.13;					//calculando iva
		neto= prenew+iva;					//calculando el precio neto
		total= neto * sacos;					//calculando el total del precio neto por los sacos
		destotal= des*sacos;					//calculando el descuento total
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"				El total a pagar es: $"<< total<< endl ; 					//imprimir el total a pagar
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"				Descuento total: $"<< destotal<< endl;					//imprimir descuento total
		} else {
				if(sacos>=200 && sacos<250){					//condicion a cumplir
				des=precio*0.15;					//calculando descuento
				prenew=precio - des;					//calculando precio nuevo con descuento
				iva= prenew * 0.13;					//calculando iva
				neto= prenew+iva;					//calculando el precio neto
				total= neto * sacos;					//calculando el total del precio neto por los sacos
				destotal= des*sacos;					//calculando el descuento total
				cout<<"-----------------------------------------------------------------"<<endl;
				cout<<"				El total a pagar es: $"<< total<< endl ;					//imprimir el total a pagar 
				cout<<"-----------------------------------------------------------------"<<endl;
				cout<<"				Descuento total: $"<< destotal<< endl;					//imprimir descuento total
				} else {
					if(sacos>=250 && sacos<300){					//condicion a cumplir
						des=precio*0.20;					//calculando descuento
						prenew=precio - des;					//calculando precio nuevo con descuento
						iva= prenew * 0.13;					//calculando iva
						neto= prenew+iva;					//calculando el precio neto
						total= neto * sacos;					//calculando el total del precio neto por los sacos
						destotal= des*sacos;					//calculando el descuento total
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"				El total a pagar es: $"<< total<< endl ; 					//imprimir el total a pagar
						cout<<"-----------------------------------------------------------------"<<endl;
						cout<<"				Descuento total: $"<< destotal<< endl;					//imprimir descuento total
					} else {
							des=precio*0.25;					//calculando descuento
							prenew=precio - des;					//calculando precio nuevo con descuento
							iva= prenew * 0.13;					//calculando iva
							neto= prenew+iva;					//calculando el precio neto
							total= neto * sacos;					//calculando el total del precio neto por los sacos
							destotal= des*sacos;					//calculando el descuento total
							cout<<"-----------------------------------------------------------------"<<endl;
							cout<<"			El total a pagar es: $"<< total<< endl ;					//imprimir el total a pagar
							cout<<"-----------------------------------------------------------------"<<endl;
							cout<<"			Descuento total: $"<< destotal<< endl;					//imprimir descuento total
					}
				}	
			}
		}
	

	return 0;
}
