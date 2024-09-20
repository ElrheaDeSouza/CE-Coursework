//Overloading stream insertion and extraction operator
#include<iostream>
using namespace std;
class InsertionExtractionOperator
{ int a;
public:
friend ostream &operator<<(ostream &out ,InsertionExtractionOperator &op);
friend istream &operator>>(istream &in,InsertionExtractionOperator &op);
};
ostream &operator<<(ostream &out, InsertionExtractionOperator &op)
{ out<<op.a;
return out;
}
istream &operator>>(istream &in ,InsertionExtractionOperator &op)
{ in>>op.a;
return in;
}
int main()
{ InsertionExtractionOperator i1,i2;
cout<<"reading an object\n";
cin>>i1>>i2;
cout<<"\nDisplaying an object\n";
cout<<i1<<" "<<i2;
return 0;
}
