/* PROGRAMA REALIZADO POR: JAVIER ALEXANDER MORALES
CARNET: MM18014*/

#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;
struct Empleado{ //Estructura para los datos de los empleados
	char cod[5];
	char nombre[50];
	int edad;
	float salbase;
	float salliquido;
	float isss;
	float afp;
	float renta;
	float totalprestamo;
	char departamento[60];
	char puesto[60] ;
};
struct Sucursal{ //Estructura para los datos de la sucursal
	int numsucursal;
	char nombresucursal[60];

};
float calisss(float sal,float tope) //Funcion para calcular el isss
		{
		int isss=0; //Iniciar variable en 0
		if(sal>=1000)
		isss=30;
		else
		isss=sal*0.03; //Dandole valor al iss del 3%
		return isss;
		}

float calafp(float sal,float isss) //Funcion para calcular el afp
{
	float afp; //declaracion de variable para almacenar el dato del afp
	afp=sal*0.0725;//calculo del 7.25%
	return afp;
}
float calrenta(float sal,float isss,float afp)//Funcion para calcular la renta
{
	float renta; //Declaracion de variables necesarioas para el calculo interno de la funcion y darle valor a la renta
	float calc;
	if (sal<=472) //Si el sueldo del empleado es menor a 472
	{
		renta=0;
	} else if(sal<=895.25)//Si el sueldo del empleado es menor a 895
	{
		calc=(sal-isss-afp)-472;
		renta=(calc*0.10)+17.67;
		return renta;
	} else if(sal<=2038.10)//Si el sueldo del empleado es menor a 2038
	{
		calc=(sal-isss-afp)-895.25;
		renta=(calc*0.2)+60;
		return renta;
	} else //Si el sueldo del empleado es mayor a todos los anteriores
	{
		calc=(sal-isss-afp)-2038.10;
		renta= (calc*0.3)+288.57;
		return renta;
	}
}

void c(){ //funcion para limpiar pantalla
	system("cls");
}

void AltEnter()
{
    keybd_event(VK_MENU,
                0x38,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                KEYEVENTF_KEYUP,
                0);
    keybd_event(VK_MENU,
                0x38,
                KEYEVENTF_KEYUP,
                0);
    return;
} 

int main(int argc, char *argv[])
{ 	system ("color 8f"); //Editar diseño de programa en consola
	int n;
	cout << ""<<endl;
	cout << "----------PRESIONE ALT + ENTER para pantalla completa-----------"<<endl; //Mensaje para apertura en pantalla completa
	system("pause");
	c();
	cout << "¿Cuantos empleados tiene su empresa?"<<endl;
	while(!(cin>>n)){		 			//Validacion de tipo de dato
		cout<<"Error: Intente de nuevo..."<<endl;
		cin.clear();
		cin.ignore(22,'\n');					
		};
	c();
	Empleado e[n];
	Sucursal s;
	int cp;
	int contador;
		for(int i=0; i<n;i++)   		//ciclo a realizar para la cantidad de empleados que poseen
			{	
				cout<<"Datos de empleado "<<i+1<<endl;
				cout << "Cod:"<<"\t"<<"\t";
				cin>>e[i].cod;
				cout << "Nombre:"<<"\t"<<"\t";
				cin>>e[i].nombre;
				cout << "Edad:"<<"\t"<<"\t";
				cin>>e[i].edad; 
				cout << "Salbase:"<<"\t"; 
				while(!(cin>>e[i].salbase)){ 					//Validacion de tipo de dato
						cout<<"Error: Intente de nuevo..."<<endl;
						cin.clear();
						cin.ignore(22,'\n');
					};
				e[i].isss=calisss(e[i].salbase,0.03);					//llamado a funcion caliss
				e[i].afp=calafp(e[i].salbase, e[i].isss);					//llamado a funcion calafp
				e[i].renta=calrenta(e[i].salbase, e[i].isss, e[i].afp); 					//llamado a funcion calrenta
				cout << "Cantidad de prestamos:";
				while(!(cin>>cp)){ 									//Validacion de tipo de dato
						cout<<"Error: Intente de nuevo..."<<endl;
						cin.clear();
						cin.ignore(22,'\n');
					};
				contador=0;					//contador
				float totpres=0;
				float pres;					//variable para hacer la suma en los prestamos
				while(contador<cp)
				{
				cout << "monto a descontar:"<<"\t"<<"\t";
				cin>>pres;
				if(e[i].salbase*0.8>(totpres+pres))
				{
					totpres=totpres+pres;
					e[i].totalprestamo=totpres;

				}
				contador++;
				}
				cout << "Departamento:"<<"\t";
				cin>>e[i].departamento; 
				cout << "Puesto:"<<"\t"<<"\t";
				cin>>e[i].puesto; 
				c();
				
			}
			
				cout <<"Codigo	"<<"|"<<"\t";
				cout <<"Nombre	"<<"|"<<"\t";
				cout <<"Edad	"<<"|"<<"\t";
				cout <<"Salario	"<<"|"<<"\t";
				cout <<"ISSS	"<<"|"<<"\t";
				cout <<"AFP	"<<"|"<<"\t";
				cout <<"RENTA	"<<"|"<<"\t";
				cout <<"Prestamos"<<"|"<<"\t";
				cout <<"Departamento"<<"|"<<"\t";
				cout <<"Puesto	"<<"|"<<"\t";
				cout<<endl;
			
			for(int i=0; i<n;i++) 				//impresion de los resultados de todos los empleados
			{
				cout <<e[i].cod<<"	"<<"|"<<"\t";
				cout <<e[i].nombre<<"	"<<"|"<<"\t";
				cout<<e[i].edad<<"	"<<"|"<<"\t";
				cout<<e[i].salbase<<"	"<<"|"<<"\t";
				cout<<e[i].isss<<"	"<<"|"<<"\t";
				cout<<e[i].afp<<"	"<<"|"<<"\t";
				cout<<e[i].renta<<"	"<<"|"<<"\t";
				cout<<e[i].totalprestamo<<"	"<<"|"<<"\t";
				cout<<e[i].departamento<<"	"<<"|"<<"\t";
				cout<<e[i].puesto<<"	"<<"|"<<"\t";
				cout<<endl;
				
			}
			
			
			system("Pause");
			}
