#include<iostream>
using namespace std;

int main(){
	int n,menor=99999,mayor=0,me,ma;
	struct EMPLEADO{
	char nombre[20];
	char sexo[10];
	float sueldo;
	}empleado[100];

	cout<<"Ingrese la cantidad de empleados de DataTech: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"INGRESE LOS DATOS DEL EMPLEADO "<<i+1<<": \n";
		cout<<"Ingrese el nombre del empleado: ";cin>>empleado[i].nombre;
		cout<<"Ingrese el sexo del empleado: ";cin>>empleado[i].sexo;
		cout<<"Ingrese el sueldo del empleado: ";cin>>empleado[i].sueldo;cout<<endl;
			if(empleado[i].sueldo<menor){
				menor=empleado[i].sueldo;
				me=i;
			}
			if(empleado[i].sueldo>mayor){
				mayor=empleado[i].sueldo;
				ma=i;
			}	
	}
	cout<<"El empleado con menor sueldo es: "<<empleado[me].nombre;
	cout<<" Y su sueldo es: "<<empleado[me].sueldo<<endl;
	cout<<"El empleado con mayor sueldo es: "<<empleado[ma].nombre;
	cout<<" Y su sueldo es: "<<empleado[ma].sueldo<<endl;
	return 0;
}