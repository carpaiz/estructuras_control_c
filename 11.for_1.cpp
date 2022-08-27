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
	 
		// int 4 bytes
 	int datos[]={8,12,35,200,1000};   //array initialization
 	//cout<<sizeof(datos)<<endl;
 	//cout<<sizeof(datos[0])<<endl;
    int tama = (sizeof(datos)/sizeof(datos[0]));
    
    for (int i=0;i<tama;i++){
    	cout<<datos[i]<<endl;
	}
	/*for( int i : datos) // Tool -> compiler options ->Settings -> Code Generation -> language standard (-std) : ISO c++ 11
    {
    	cout<<i<<endl;
    }
      */  	
	
system("pause");
}
