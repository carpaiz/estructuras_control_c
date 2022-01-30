#include <iostream>
using namespace std;
main(){
char letra=0;	

cout<<"Ingrese la letra:";
cin>>letra;
switch(letra)
{
	case 'a': cout << "Es una Vocal"<<endl;
    break;
    case 'e': cout << "Es una Vocal"<<endl;
    break;
    case 'i': cout << "Es una Vocal"<<endl;
    break;
    case 'o': cout << "Es una Vocal"<<endl;
    break;
    case 'u': cout << "Es una Vocal"<<endl;
    break;
    default: cout << "Este una consonante"<<endl;
}
 	
system("pause");	
}
