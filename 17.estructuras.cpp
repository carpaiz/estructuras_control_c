#include<iostream>
using namespace std;
struct Estudiante{
	int codigo;
	string nombre;
	int nota;
};

main(){
Estudiante estudiante;
	cout<<"Ingrese Codigo: ";
	cin>>estudiante.codigo;
	cin.ignore();
	cout<<"Ingrese Nombre: ";
	getline(cin,estudiante.nombre);
	cout<<"Ingrese Nota: ";
	cin>>estudiante.nota;
	
	
	cout<<"Codigo: "<<estudiante.codigo<<" Estudiante:"<<estudiante.nombre<<" Nota:"<<estudiante.nota<<endl;
	system("PAUSE");

	
}


