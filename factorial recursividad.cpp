//JAVIER ALEXANDER MORALES 
//recursividad, interando en la misma funcion para obteneer los datos

#include <iostream>
#include <cstdlib>

using namespace std;
int factorial (int n){ //FUNCION PARA CALCULAR EL FACTORIAL DE UN NUMERO CON RECURSIVIDAD
	if (n<0)
		return 0;
	 else if(n>1)
		return n*factorial(n-1);
		return 1;
	
	
}

int main(){
	
cout<<factorial(3)<<endl;
	
	
}
