#include <iostream>
using namespace std;
main(){
int n1=0,n2=0,n3=0;	
float promedio =0;
cout<<"Ingrese Nota1:";
cin>>n1;
cout<<"Ingrese Nota2:";
cin>>n2;
cout<<"Ingrese Nota3:";
cin>>n3;
promedio = (n1+n2+n3)/3;
cout<<"Nota Final: "<<promedio<<endl;
	if (promedio>61){
		cout<<"Aprobo"<<endl;
	}else{
		cout<<"Reprobo"<<endl;
	}
	
	if (promedio>=0 && promedio<61){
		cout<<"Mala Nota"<<endl;
	}
	if (promedio>=61 && promedio<81){
		cout<<"Buena Nota"<<endl;
	}
	if (promedio>=81){
		cout<<"Excelente"<<endl;
	}
 	
system("pause");	
}
