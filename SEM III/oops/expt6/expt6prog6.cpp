// Write a program to overload ++ operator using friend functions
#include<iostream>
using namespace std;
class IncrementOperator
{ int value;
public:
IncrementOperator (){value=0;}
IncrementOperator(int v){value=v;}
friend void operator++(IncrementOperator &op);
friend void operator++(IncrementOperator &op,int);

void display()
{ cout<<value;}
};
void operator++(IncrementOperator &op){op.value++;}
void operator++(IncrementOperator &op,int x){op.value=op.value;}
int main()
{ IncrementOperator i1,i2;
int a,b;
cout<<"\n Enter two numbers:";
cin>>a>>b;
i1=IncrementOperator(a);
i2=IncrementOperator(b);
cout<<"\nValue 1:";
i1.display();
cout<<"\nValue 2:";
i2.display();
++i1;
cout<<endl<<"modified value1:";
i1.display();
i2++;
cout<<"\nmodified value2:";
i2.display();
return 0;
}
