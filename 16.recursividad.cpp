#include <iostream>
using namespace std;
int temporizador(int n);
int factorial(int n);
main(){
//El factorial se simboliza como n!, se lee como "n factorial", y la definición es:
//n! = n * (n-1) * (n-2) * ... * 1
int num =0;
cout<<"Ingrese Numero:";
cin>>num;
cout<<temporizador(num)<<endl;
cout<<"------------"<<endl;
cout<<"El factorial es: "<<factorial(num)<<endl;
system("PAUSE");
}
	
int temporizador(int n){
	
	if (n>0){
		cout<<n<<endl;
		n = temporizador(n-1);
	}else {
		n =  0;
	}
	return n;
	
}
/*Hay algunas limitaciones:
No es posible calcular el factorial de números negativos, no está definido.
El factorial de cero es 1.
*/
int factorial(int n) {
   if(n < 0) {
   	n = 0;
   }
   else{
   	if(n > 1) {
	   	n = n*factorial(n-1);
	   }else{
	   	n = 1;
	   }
   }
     return n;
}
