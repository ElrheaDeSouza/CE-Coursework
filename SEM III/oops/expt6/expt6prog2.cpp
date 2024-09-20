//Without using friend function

#include<iostream>
#include<stdlib.h>
using namespace std;
class Complex
{
	int real, imag;
	public:
		Complex(): real(0), imag(0) {}
		void display();
		void getnum();
		Complex operator+(Complex &c);
};
void Complex::getnum(){
	cout<<"Enter Complex numbers real and imag: ";
	cin>>real>>imag;
}
void Complex::display(){
	cout<<real<<"+ "<<imag<<"i"<<endl;
}
Complex Complex:: operator+(Complex &c)
{
	Complex res;
	res.real=real + c.real;
	res.imag=imag + c.imag;
	return res;
}

int main(){
	int a;
	Complex C1, C2, C3;
	cout<<"1.Enter Values\n2.Exit\n";
	while(1){
		cout<<"Enter choice: ";
		cin>>a;
		switch(a){
			case 1:
				C1.getnum();
				C2.getnum();
				C3=C1+C2;
				C3.display();
				break;
			case 2:
				exit(1);
			default:
				cout<<"Invalid choice\n";
				break;
		}
	}
}
