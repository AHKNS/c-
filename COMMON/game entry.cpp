#include <iostream>
using namespace std;

int main(){
string name ;
int age = 18 ;
int userAge ;
int height = 5;
int userHeight ;

cout <<"please enter your name :  ";
cin >> name;
cout << name << " please enter your AGE :  ";
cin >> userAge;
cout << name <<"  please enter your height :  ";
cin >> userHeight;

if(userAge >= age && height >= 5){
	cout << name <<" , you can join footall team";
}else{
	cout << name <<  " , you can join chess team ";
}




	
}