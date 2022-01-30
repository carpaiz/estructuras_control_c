#include <iostream>
using namespace std;

main(){

/*
 2 X 1 = 2;
 2 X 2 = 4;
 2 X 3 = 6;
 ....
*/
int tabla=1,multiplicar=0;
cout <<"Ingrese tabla:";
cin>>tabla;
 for (int i=1;i<=10;i++){
 	multiplicar = tabla * i;
 	cout<<tabla<<" X "<<i<<" = "<<multiplicar<<endl;
 	
 }

system("pause");
}
