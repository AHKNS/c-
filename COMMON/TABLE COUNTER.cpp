#include <iostream>
using namespace std ;

int main(){
	
  
int no,i,value ;

cout <<   "num btain gis  ka app table likwana chahta ha  : ";
cin >> no;

cout << "AP TABLE KHA SA SHROW KAWANA CHAHTA HA eg (1,2 ,2 3 etc.) : ";
cin >> i;

cout << "Ap kis no tak table likhwana chahta hain  : ";
cin >> value;

cout << "                           Table of " << no << endl ;


 for (i ; i <= value ; i ++){
 

cout << no <<"     x    " << i << "  =  " << no*i << endl ;
}
}





