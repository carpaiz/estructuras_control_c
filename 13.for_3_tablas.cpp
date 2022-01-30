#include <iostream>
using namespace std;

main(){

int inicio=0,fin=0,multiplicar=0;
cout <<"Ingrese tabla inicio:";
cin>>inicio;
cout <<"Ingrese tabla fin:";
cin>>fin;

for (int i=inicio; i<=fin;i++){
	//cout<<i<<endl;
	for (int ii=1; ii<=10;ii++){
		//cout<<ii<<endl;
	 multiplicar=i*ii;
	 cout<<i<<" X "<<ii<<" = "<<multiplicar<<endl;
	}
	cout<<endl;
}
 

system("pause");
}
