#include <iostream>
using namespace std;

main(){
//int i=0;
	for (int i=0;i<10;i++){
		cout<<i<<endl;
	}	
	//cout<<"afuera :"<<i<<endl;
	cout<<"_________________________"<<endl;
	for (int i=0;i<10;i=i+2){
		cout<<i<<endl;
	}
	cout<<"_________________________"<<endl;
	for (int i=10;i>0;i--){
		cout<<i<<endl;
	}
	cout<<"_________________________"<<endl;
	
	for (int i=0;i<10;i++){
		if(i==5){
			cout<<"i: "<<i<<endl; // quitar este para ver el comportamiento 
			continue; // si no pongo continuar coloca el 5 dos veces
		}
			cout<<i<<endl;
	}
	cout<<"_________________________"<<endl;
	for (int i=0;i<10;i++){
		if(i==5){
			cout<<"i: "<<i<<endl; 
			break; 
		}
			cout<<i<<endl;
	}
	 
		
	
system("pause");
}
