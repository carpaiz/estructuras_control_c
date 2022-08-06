#include <iostream>

using namespace std;
main(){
	
//Variables Numericas
//Numero Enteros
/*Variable: Espacio reservado en memoria*/
short sh=2; //short 2Bytes (-32768 a 32767)
int in =4; //4 Bytes -2147483648 a +2147483647
unsigned int in2=5;
signed int in3=-5;
long lg = 4.25;
cout<<"------ Enteros ------"<<endl;
	cout<<"short: "<<sh<<endl;
	cout<<"int: "<<in<<endl;
	cout<<"int Positivo: "<<in2<<endl;
	cout<<"int Negativo: "<<in3<<endl;
	cout<<"long: "<<lg<<endl;
// Numero reales de punto flotante
float flo = 100.253;// 4 bytes
double dob=200.253;// 8 Bytes
long double ldob=400.253;// 10 Bytes
cout<<"------ Enteros y Decimales ------"<<endl;
cout<<"float: "<<flo<<endl; 
cout<<"double: "<<dob<<endl; 
cout<<"long double: "<<ldob<<endl;
 // Falso y verdadero
 bool bl = true;// verdedero (1) o falso (0) 
 cout<<"------ Verdadero o Falso ------"<<endl;
 cout<<"bool: "<<bl<<endl;
 /* caracter o cadenas*/
 char cr= 'C';
 char ascc = 64; 
 char cadena[8]="texto";
 string cadenas="texto string";
 char saludo[4];
 saludo[0]='H';
 saludo[1]='O';
 saludo[2]='L';
 saludo[3]='A';
 
 cout<<"------ Caracter o Cadena   ------"<<endl;
 cout<<"char: "<<cr<<endl;
 cout<<"char codigo ascii: "<<ascc<<endl;
 cout<<"char cadena: "<<cadena<<endl;
 cout<<"string: "<<cadenas<<endl;
 cout<<"char array: "<<saludo<<endl;
 cout<<"char array[2]: "<<saludo[2]<<endl;
	system("pause");	
}
