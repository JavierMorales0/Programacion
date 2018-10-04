//Javier Alexander Morales


#include <iostream>
#include <stdlib.h> 
#include <time.h> //libreria necesaria para el rand

using namespace std;

int main(){
	srand(time(NULL)); //distribucion aleatoria
	int matriz [3][3]; //creacion de matrices
	int matriz2 [3][3];
	int result [3][3];
	
	for (int i=0; i<3; i++){		//Asignacion de valores a cada campo de la matriz 1
		for (int j=0; j<3; j++){
			matriz[i][j]=rand()%101;
		}
	}
	
	for (int i=0; i<3; i++){		//Asignacion de valores a cada campo de la matriz 2
		for (int j=0; j<3; j++){
			matriz2[i][j]=rand()%101;
		}
	}
	
	
	for (int i=0; i<3; i++){ 		//impresion en pantalla de matriz 1
		for(int j=0; j<3; j++){
			cout<<matriz[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	for (int i=0; i<3; i++){		//impresion en pantalla de matriz 2
		for(int j=0; j<3; j++){
			cout<<matriz2[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	for (int i=0; i<3; i++){ 		//suma e impresion de matrices en la pantalla
		for(int j=0; j<3; j++){
			result[i][j]=matriz[i][j]+matriz2[i][j];
			cout<<result[i][j]<<"   ";
		}
		cout<<endl;
	}
	
	return 0;
}
