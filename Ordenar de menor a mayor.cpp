//Programa para ordenar valores de menor a mayor
//JAVIER ALEXANDER MORALES


#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	cout<<"array values: "<<"132,520, 210, 510, 140, 125, 52, 96, 55, 85"<<"\n"; //imprimiendo los valores en pantalla
	//input array values
	int array [SIZE] = {132,520, 210, 510, 140, 125, 52, 96, 55, 85}; //asignando los valores

	
	cout << "sorted values: ";
	for (int startIndex=0; startIndex<SIZE; ++startIndex) //ciclo mientras startIndex sea menor que Size
	{
		int smallestIndex = startIndex; //el mas pequeño es igual a el start
		for ( int nowIndex= startIndex+1; nowIndex<SIZE; ++nowIndex) 
		{
			if (array[nowIndex]<array[smallestIndex]) //si el index actual es menor que el mas pequeño
			{
				smallestIndex=nowIndex; //entonces el actual es el mas pequeño
			}
		}
		swap(array[startIndex], array[smallestIndex]);
	}
	for(int index=0; index < SIZE; ++index)
	{
		cout<<array[index]<<' '; //imprimiendo resultados
	}
	
	
	return 0;
}
