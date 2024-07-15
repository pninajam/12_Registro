#include<iostream>
#include<string>
using namespace std;

int main(){
	int m=0,s=0,n,p;
	struct PERSONA{
		string nombres;
		int dni;
		int edad;
	}persona[100];
	
	cout<<"Ingrese la cantidad de personas que desea registar: ";cin>>n;
	cin.ignore(10000,'\n');
	for(int i=0;i<n;i++){
		cout<<"INGRESE LOS DATOS DE LA PERSONA "<<i+1<<": "<<endl;
		cout<<"ingrese el nombre de la persona: ";
		getline(cin, persona[i].nombres);
		cout<<"ingrese el DNI de la persona: ";cin>>persona[i].dni;
		cout<<"ingrese la edad de la persona: ";cin>>persona[i].edad;
		cin.ignore(10000,'\n');
		cout<<endl;
		s+=persona[i].edad;
		if(persona[i].edad>50){
			m++;
		}
	}
	p=s/n;
	cout<<"El promedio de edades es: "<<p<<endl;
	cout<<"La cantidad de personas con edad mayor a 50 anos es: "<<m<<endl;
	for(int i=0;i<n;i++){
		cout<<"lOS DATOS DE LA PERSONA "<<i+1<<endl;
		cout<<"Su nombre es: "<<persona[i].nombres<<endl;
		cout<<"Su DNI es: "<<persona[i].dni<<endl;
		cout<<"Su edad es: "<<persona[i].edad<<endl;
	}

	return 0;
}