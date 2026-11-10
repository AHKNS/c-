#include <iostream>

using namespace std;


double circleArea ( double r){
	
	return (3.14 * r * r) ;
}






int main(){
	double r1 , r2 ;
	double Area;
	
	cout << "Enter the radius of circle 1  =";
	cin >> r1;
		cout << "Enter the radius of circle 12  =";
	cin >> r2;
	
	ringArea = circleArea (r1) - circleArea (r2);
	
//	cout << "The Area of your circle is " << circleRadius(r);
	
	cout << ringArea;
	
}
















































//#include <iostream>
//
//using namespace std;
//
//
//double raisetopower (double x ,int power){
//
// double result  = 1 ;
//	int i ;
//	i = 1 ;
//	
//	for ( i = 1 ; i <= power ; i++){
//		result *= x;
//		
//	}
//	return (result) ;
//}
//
//
//main (){
//	
//	double x ;
//	int i ;
//	cout << "Plese enter your no";
//	cin >> x;
//	cout << "enter the interger power";
//	cin >> i ;
//	
//	cout << "raised to power  " << i << "is equle to " << raisetopower (x , i);
//}
//













//
//
//	int square (int i)	{
//		
//		return (i*i);
//		
//	}
//	
//	
//int main(){
//	
//	int i ;
//	cout << "enter your no";
//	cin >> i ;
//	
//	int result = square(i);
//    cout << "square is: " << result;
//
//
//}