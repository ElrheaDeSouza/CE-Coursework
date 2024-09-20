/*Write a program to overload pre-decrement and post-decrement operator using a) friend
functions b) member functions*/
#include<iostream>
using namespace std;
class optr{
	private:
		int x;
	public:
		optr(){ }
		optr(int x1){x=x1;}
		optr operator--(int);
		optr operator--();
		void disp();
};
optr optr::operator--(int){
	x--;
}
optr optr::operator--(){
	--x;
}

void optr::disp(){
	cout<<"x= "<<x;
}
int main(){
	optr o1;
	int x;
	cout<<"Enter x value: ";
	cin>>x;
	o1=optr(x);
	cout<<"How many times to increment: ";
	cin>>x;
	for(int i=1; i<=x; i++){
		--o1;
		//o1++  (both can work)
	}
	o1.disp();
}
