#include <iostream>
using namespace std;

main(){

int i = 0;
do {
  cout << i <<endl;
  i++;
  
}while (i < 5);
char s;

do{
	cout<<"Desea Ingresar Otro Valor: ";
	cin>>s;
} while (s=='s');

/*char s='s';
while(s=='s'){
	cout<<"Desea Ingresar Otro Valor: ";
	cin>>s;
}*/
system("pause");
}
