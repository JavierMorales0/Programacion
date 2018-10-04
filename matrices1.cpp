//Matriz

#include <iostream>

using namespace std;

int main (){
    int x[4][4]; //guarda 4 columnas y 4 filas
    for (int i=0; i<=3; i++){ //Asignacion de valor 0 a los datos de la matriz
        for (int j=0; j<=3;j++){
        x[i][j]=0;
}
}
    for (int i=0; i<3; i++){ //asignando especificamente con ciclo y condicion if el valor de 3 a x[0][1]
    x[0][1]=3;
    if(i=3){
         x[3][2]=3; //asignando valor de 3
           x[3][3]=3; //asignando valor de 3
}
}

    
    cout<<x[0][1] <<endl; //impresion en pantalla
    system ("pause");
    return 0;
}
