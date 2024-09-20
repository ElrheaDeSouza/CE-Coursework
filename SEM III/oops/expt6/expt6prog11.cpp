/*Write a program to overload &gt;,&lt;,&lt;=,&gt;= operators to compare two class object using member
functions.*/
#include<iostream>
#include<stdlib.h>
using namespace std;

class Compare{
	static int a;
	int dim;
	public:
		Compare(){
			cout<<"Enter Dimensions of Object"<<a++<<": ";
			cin>>dim;
		}
		bool operator<(Compare &c);
		bool operator>(Compare &c);
		bool operator<=(Compare &c);
		bool operator>=(Compare &c);
};
int Compare::a=1;
bool Compare::operator<(Compare &c){
	return (dim<c.dim)?true:false;
}
bool Compare::operator<=(Compare &c){
	return (dim<=c.dim)?true:false;
}
bool Compare::operator>(Compare &c){
	return (dim>c.dim)?true:false;
}
bool Compare::operator>=(Compare &c){
	return (dim>=c.dim)?true:false;
}
int main(){
	Compare c1, c2;
	int a;
	while(1){
		cout<<"\t\tComparing Calculator\n";
		cout<<"1.Less than\n2.Less than equal to\n3.Greater than\n4.Greater than equal to\n5.Exit\nEnter choice: ";
		cin>>a;
		switch(a){
			case 1:
				if(c1<c2)
					cout<<"Object1 is less than Object 2\n";
				else
					cout<<"Object 1 is greater than Object2\n";
				break;
			case 2:
				if(c1<=c2)
					cout<<"Object1 is less than or equal to Object 2\n";
				else
					cout<<"Object 1 is not less than or equal to Object 2\n";
				break;
			case 3:
				if(c1>c2)
					cout<<"Object 1 is greater than Object 2\n";
				else
					cout<<"Object1 is not greater than Object 2\n";
					break;
			case 4:
				if(c1>=c2)
					cout<<"Object1 is greater than or equal to Object 2\n";
				else
					cout<<"Object 1 is not greater than or equal to Object 2\n";
				break;
			case 5:
				exit(1);
			default:
				cout<<"Invalid Input, Please try again\n";
				break;
		}

	}
}
