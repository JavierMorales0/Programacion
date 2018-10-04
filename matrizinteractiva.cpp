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
	for(int i=0; i<fil; i++) //ciclos anidados para la asignacion de valores hasta llenar las filas y columnas
	{
		for (int j=0; j<col; j++)
		{
			cout<<"Ingrese dato["<<i+1<<"]["<<j+1<<"]: ";
			cin>>matriz[i][j]; //asignando dato a matriz 
			
		}
	}
	
	for(int i=0; i<fil; i++) //ciclos anidados para la impresion de todas las filas y columnas de la matriz
	{
		for (int j=0; j<col; j++)
		{
			cout<<"dato["<<i+1<<"]["<<j+1<<"]: " << matriz[i][j]<<"		";
			
		}
		cout<<endl;
	}
	
	return 0;
	getch();
}
