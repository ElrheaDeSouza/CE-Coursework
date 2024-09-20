//write a program to overload ++ operator using member function

#include<iostream>
using namespace std;
class Op{
	private:
		int x;
	public:
		Op(){ }
		Op(int x1){x=x1;}
		Op operator++(int);//post increment
		Op operator++();   //pre increment
		void disp();
};
Op Op::operator++(int){
	x++;
}
Op Op::operator++(){
	++x;
}

void Op::disp(){
	cout<<"x= "<<x;
}
int main(){
	Op o1;
	int x,n;
	cout<<"Enter x value: ";
	cin>>x;
	o1=Op(x);
	cout<<"How many times to increment: ";
	cin>>n;
	for(int i=1; i<=n; i++){
		++o1;
		//o1++  (both can work)
	}
	o1.disp();
	return 0;
}
