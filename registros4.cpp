#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,x,m,y,a[100];
	x=0;
	y=0
	string p;
	struct deportistaETAS{
		string nombres;
		char pais[20];
		char disciplina[20];
		int medallas;
	}deportista[100];
	cout<<"INGRESE LA CANTIDAD DE PEPORTISTAS A REGISTRAR: ";cin>>n;
	cin.ignore(10000,'\n');
	for(int i=0;i<n;i++){
		cout<<"INGRESE LOS DATOS DEL DEPORTISTA "<<i+1<<":"<<endl;
		cout<<"Nombres: ";getline(cin,deportista[i].nombres);
		cout<<"Pais: ";cin>>deportista[i].pais;
		cout<<"Disciplina: ";cin>>deportista[i].disciplina;
		cout<<"Cantidad de medallas: ";cin>>deportista[i].medallas;
		cout<<endl;
		cin.ignore(10000,'\n');
	}
	cout<<"\nIngrese un Pais: \n";cin>>p;
	for(int i=0;i<n;i++){
		if((deportista[i].pais)==p){
			a[x]=i;
			x++;
		}
	}
	cout<<"Los deportistas provenientes del pais ingresado son: \n";
	for(int i=0;i<x;i++){
		cout<<deportista[a[i]].nombres;
		for(int e=0;e<x;e++){
			if(deportista[a[i]].medallas>=deportista[a[e]].medallas){
				y++;
			}
		}
		if(y==x){
			cout<<" --> Mayor numero de medallas\n";
		}else{
			cout<<endl;
			y=0;
		}
	}
	return 0;
}