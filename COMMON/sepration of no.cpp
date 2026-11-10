 #include<iostream>
 
 using namespace std;
 
 int main(){
 	int userno;
 	int output;
 	int  y,z,a,b,c;
 	 cout << "Enter a four digit no please  :   ";
 	 cin >> userno;
 	
 	// ksi no sa akri digit alag kara ka liya ( no  % 10  ) karta hain
	// alag karna ka bad us ko katam karna ka lita ( no / 10  ) karta hain
	 	
 	
 	y = userno%10; //seprate 4 
 	
 	userno = userno /10;
 	
 	z = userno % 10; //seprate 3
 	
 	userno = userno/10;
 	
 	a = userno % 10; //seprate 2
 	
 	userno = userno/ 10; //seprate 1
 	
 	b = userno;

 	
 
 	
 	cout <<"the first no is :"   << b <<endl <<"the second no is :"   << a << endl <<"the third no is: "  << z << endl <<"the forth no is:  " << y ;         
 	
 	
 }