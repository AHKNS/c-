#include<iostream>
using namespace std;
int main(){
    int x, y; 
    cout << "Enter first number:\t";
    cin >> x; 
    cout << "Enter second number:\t";
    cin >> y; 
  
    cout << "Before:\nx = " << x << "\ny = " << y << endl;

 x = y + (y=x) - x; 
    cout << "After:\nx = " << x << "\ny = " << y << endl;

    return 0;
