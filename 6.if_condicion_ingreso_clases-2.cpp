#include <iostream>
using namespace std;
main(){
char lapiz,lapicero,cuaderno;
cout<<"Trae Lapiz:";
cin>>lapiz;
cout<<"Trae lapicero:";
cin>>lapicero;
cout<<"Cuaderno:";
cin>>cuaderno;

//if (lapiz=='s' && lapicero=='s' )
	if ((lapiz=='s' || lapicero=='s') && cuaderno=='s' ){
			
		cout<<"Entra"<<endl;
	}else{
			cout<<"No Entra"<<endl;
		}
	
 	
system("pause");	
}
