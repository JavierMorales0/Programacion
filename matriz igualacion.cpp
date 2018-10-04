//JAVIER ALEXANDER MORALES

#include <iostream>
#include <conio.h>
#include <stdlib.h>


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int fil;
	int col;
	
	int matriz [30] [30]; //creacion de matriz limite 

	cout<<"Ingrese el numero de filas: "; 
	cin>>fil;
	cout<<"Ingrese el numero de columnas: ";
	cin>>col;
	 
	int matrizb [fil] [col]; //creacion de otra matriz usando los datos ingresados por el usuario
		
	for(int i=0; i<fil; i++)
	{
		for (int j=0; j<col; j++)
		{
			cout<<"Ingrese dato["<<i+1<<"]["<<j+1<<"]: ";
			cin>>matriz[i][j]; //asignacion de datos a matriz principal
			
		}
	}
	
	for(int i=0; i<fil; i++)
	{
		for (int j=0; j<col; j++)
		{
			cout<<"dato["<<i+1<<"]["<<j+1<<"]: " << matriz[i][j]<<"		"; //impresion de datos en matriz principal
			
		}
		cout<<endl;
	}
	
	for(int i=0; i<fil; i++) //igualacion de matriz principal a matriz b
	{
		for (int j=0; j<col; j++)
		{
			matrizb[i][j]=matriz[i][j];
		
			
		}
		cout<<endl;
	}
	
	for(int i=0; i<fil; i++) //impresion de matriz b
	{
		for (int j=0; j<col; j++)
		{
			cout<<"dato["<<i+1<<"]["<<j+1<<"]: " << matrizb[i][j]<<"		";
			
		}
		cout<<endl;
	}
	return 0;
	getch();
}
