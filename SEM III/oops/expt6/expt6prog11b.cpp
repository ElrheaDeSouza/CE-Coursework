/*Write a program to overload pre-decrement and post-decrement operator using a) friend
functions b) member functions*/

#include<iostream>
using namespace std;
class decrementOperator
{ int value;
public:
decrementOperator (){value=0;}
decrementOperator(int v){value=v;}
friend void operator--(decrementOperator &op);
friend void operator--(decrementOperator &op,int);

void display()
{ cout<<value;}
};
void operator--(decrementOperator &op){op.value--;}
void operator--(decrementOperator &op,int x){op.value=op.value;}
int main()
{ decrementOperator i1,i2;
int a,b;
cout<<"\n Enter two numbers:";
cin>>a>>b;
i1=decrementOperator(a);
i2=decrementOperator(b);
cout<<"\nValue 1:";
i1.display();
cout<<"\nValue 2:";
i2.display();
--i1;
cout<<endl<<"modified value1:";
i1.display();
i2--;
cout<<"\nmodified value2:";
i2.display();
return 0;
}
