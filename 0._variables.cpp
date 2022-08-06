#include <iostream>

using namespace std; //std, donde se encuentra encerrada toda la librería estándar.
main(){
	//C++ es case-sensitive:   distinguen mayúsculas de minúsculas
	//C++ es un lenguaje compilado y fuertemente tipado
	// Una Variable Es un espacio reservado en memoria que se utiliza para almacenar un valor que corresponde a un tipo de dato.
	// Estilo de nombres para variables: snake case ejemplo String nombre_completo;
	// restricciones nombre de variable: no puede iniciar por número, no puede contener caracteres especiales, no espacios en blanco
	// las variables deben de tener nombres lógicos
	
	

//Variables Numericas
//Numero Enteros

short sh=32767; //short 2Bytes (-32768 a 32767)
int in =2147483647; //4 Bytes -2147483648 a +2147483647
long long lg = 52147483647; // 8 bytes -(2^63) to (2^63)-1
unsigned int in2=5;
signed int in3=-5;
unsigned  long long int entero_largo = 18446744073709551615; //  8 bytes 0 to 18,446,744,073,709,551,615

cout<<"------ Enteros ------"<<endl;
	cout<<"short: "<<sh<<endl;
	cout<<"int: "<<in<<endl;
	cout<<"long: "<<lg<<endl;
	cout<<"int Positivo: "<<in2<<endl;
	cout<<"int Negativo: "<<in3<<endl;
	cout<<"unsigned  long long int: "<<entero_largo<<endl;
	
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
