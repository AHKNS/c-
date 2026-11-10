#include <iostream>

using namespace std;

int main(){
	int a , b,  c;
	cout << "enter no a = ";
	cin >> a;
	
	cout << "emter no b =";
	cin >> b;
	
	cout << "enter no c = ";
	cin >> c;
	
	a = a + b + c ;
	c = a - b - c ;
	b = a - b - c ;
	a = a - b - c ;
	
		cout << "a = " << a << endl;
		cout << "b =" << b << endl;			
		cout << "c =" << c ;
}