/* JAVIER ALEXANDER MORALES
FUNCIONES 2


void imprimir (){
        
}

int sumar (int a, int b){
    return 0;
}

int datos(char a, int b, float c){

}

Ciertos parametros se envian por
Valor -- Se hace copias de los valores de la memoria
Referencia -- no se hace copias de los valores de la memoria
Diferencia como los datos se trabajam en la memoria de la pc
*/
#include <iostream>


using namespace std;
float sumar(float &x, float &y);
void pedirNumeros();

float sumar (float &x, float &y){
    
    return x+y;
}

void pedirNumeros(){
    float x;
    float y;
    float res;

    cout<<"Ingrese un numero: "<<endl;
    cin>>x;
    cout<<"Ingrese un numero: "<<endl;
    cin>>y;
cout<<&x<<endl;
cout<<&y<<endl;
    res=sumar (x,y);
cout<<"El resultado es:  "<<res<<endl;
    
}


int main(){
    pedirNumeros();
    
    return 0;
}
