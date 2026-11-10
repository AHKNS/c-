#include <iostream>
using namespace std;

int main(){
	int S1  , S2 ;
	S1 = 0;
	S2 = 0;
	cout <<  "                 age claculator" << endl;
	cout << "PLASE ENTER S1  AGE";
	cin >> S1;cout <<endl;
	cout << "please enter S2 name";
	cin >> S2;cout << endl;
	if(S1 > S2){
		cout << "S1 is younger then S2";
	}else if(S1 == S2){
		cout<<"both have equal";
	}else if(S2 > S1) {
		cout << "s2 is younger then s1";
	}
}