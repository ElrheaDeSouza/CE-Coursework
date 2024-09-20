//Write a program to add 2 'Fraction' objects using operator overloading concept.
//implement using a) friend function b) member function

#include<iostream>
#include<stdlib.h>
using namespace std;

int func(int n1, int n2)
{
	int res = min(n1, n2);
	while(res>0){
		if(n1%res==0 && n2%res==0)
		break;
	res--;
	}
	return res;
}
class Fraction{
	int n, d;
	public:
		Fraction():n(0), d(0){}
		Fraction(int x, int y)
		{
			n=x;
			d=y;
		}
		void display()
		{
			if(d==0)
            {
				cout<<"Result= ("<<n<<")";
			}
			else{
				cout<<"Result= ("<<n<<"/"<<d<<")";
			}
		}
		friend Fraction operator+(Fraction &f1, Fraction &f2);
};

Fraction operator+(Fraction &f1, Fraction &f2){
	Fraction res;
	res.n=f1.n*f2.d+f2.n*f1.d;
	res.d=f1.d*f2.d;
	if(res.d==0){
		cout<<"Computation not possible";
		exit(1);
	}
	else{
	int div= func(res.n, res.d);
	res.n=res.n/div;
	res.d=res.d/div;
		return res;
	}
}

int main()
{
	int a, b;
	Fraction f1, f2, f3;
	cout<<"Enter fraction value(a/b): ";
	cin>>a>>b;
	f1=Fraction(a, b);
	cout<<"Enter fraction value(a/b): ";
	cin>>a>>b;
	f2=Fraction(a, b);
	f3=f1+f2;
	f3.display();
	return 0;
}
