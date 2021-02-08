#include <iostream>
using namespace std;

int main(){
	int x,a;
	cout<<"ÇëÊäÈë"<<endl;
	cin>>x;
	a=x<1?1:x<10?2:3;
	switch(a){
		case 1:
			break;
		case 2:
			x=2*x-1;
			break;
		case 3:
			x=3*x-11;
			break;
	}
	cout<<x<<endl;
}
