#include <iostream> 
using namespace std;
 
int funcion_valor(int c, int d);
int funcion_referencia(int &c, int &d);
void metodo_valor (int c,int d);
void metodo_referencia (int &c,int &d);
main() { 
int a=0,b=0,resultado=0;
	a = 10;
	b=5;
resultado = funcion_valor(a,b);
	cout<<"La suma es: "<<resultado<<endl;
	cout<<"a: "<<a<<" b: "<<b<<endl;	
resultado = funcion_referencia(a,b);
	cout<<"La suma es: "<<resultado<<endl;
	cout<<"a: "<<a<<" b: "<<b<<endl;
metodo_valor(a,b);
	cout<<"a: "<<a<<" b: "<<b<<endl;
metodo_referencia(a,b);
	cout<<"a: "<<a<<" b: "<<b<<endl;
}
 
int funcion_valor(int c, int d) { 
cout<<"-------- Valor --------"<<endl;
   int suma;
   c +=1;
   d +=1;
   suma = c+d;
   return suma; 
}

int funcion_referencia(int &c, int &d) { 
   cout<<"-------- Referencia --------"<<endl;
   int suma;
   c +=1;
   d +=1;
   suma = c+d;
   return suma; 
}
void metodo_valor(int c,int d){
cout<<"-------- metodo valor--------"<<endl;
	int suma;
   c +=1;
   d +=1;
   suma = c+d;
   cout<<"La suma es: "<<suma<<endl;
}
void metodo_referencia(int &c,int &d){
cout<<"-------- metodo referncia--------"<<endl;
	int suma;
   c +=1;
   d +=1;
   suma = c+d;
   cout<<"La suma es: "<<suma<<endl;
}
