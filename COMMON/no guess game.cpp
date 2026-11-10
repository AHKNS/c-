

#include <iostream>
using namespace std ;

int main(){
	
  	char c;
int maxTries, userTry;
userTry = 1 ;
maxTries = 5;

do{
		cout << "Enter your character : ";
	cin >> c;
	 if (c == 'z'){
	 	cout << "congratulation your enter no is correct" << endl;
	 }else{
	 	cout << "Your entered no is incorrect ," <<endl <<"please try again   ";
	 	userTry ++;
	 }
	
	}while ( userTry <= maxTries && c != 'z');
	
	cout << "user no of tries = " << userTry ;

}