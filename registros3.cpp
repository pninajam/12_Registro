#include<iostream>
using namespace std;

int main(){
	int c,n,ms;
	c=0;
	struct FECHA{
		int dia;
		int mes;
		int ano;
	};
	struct PERSONA{
		char nombre[20];
		FECHA nacimiento;
	}Gente[100];
	
	cout<<"Ingrese la cantidad de personas a registrar: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"\t\t\tIngrese los datos de la persona "<<i+1<<":"<<endl;
		cout<<"Nombre: ";
		cin>>Gente[i].nombre;
		cout<<"Dia de nacimiento: ";cin>>Gente[i].nacimiento.dia;
		cout<<"Mes de nacimiento: ";cin>>Gente[i].nacimiento.mes;
		cout<<"Ano de nacimiento: ";cin>>Gente[i].nacimiento.ano;		
	}
	cout<<endl;
	do{
		cout<<"Ingrese mes:";cin>>ms;cout<<endl;
		if(ms!=0){
			for(int i=0;i<n;i++){
				if(ms==Gente[i].nacimiento.mes){
					cout<<"La persona que cumple anos en ese mes es: \n";
					cout<<"Nombre: "<<Gente[i].nombre<<endl;
					cout<<"Dia de nacimiento: "<<Gente[i].nacimiento.dia<<endl;
					cout<<"Mes de nacimiento: "<<Gente[i].nacimiento.mes<<endl;
					cout<<"Ano de nacimiento: "<<Gente[i].nacimiento.ano<<endl;
					c++;		
				}
			}
			if(c==0){
				cout<<"No hay coincidencias"<<endl;
			}	
		}
	}while(ms!=0);
	cout<<"Mes incorrecto: \n";
	return 0;
}