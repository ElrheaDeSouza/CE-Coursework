// Write a program to overload array subscript [] operator
#include<iostream>
#include<stdlib.h>
using namespace std;
class Array {
private:
int num[10];
int size;
public:
void setArray()
{
cout<<"enter the no of elements\n";
cin>>size;
cout<<"enter"<<size<<"elements\n";
for(int i=0;i<size;i++)
{ cin>>num[i];
}
}
int &operator[](int x)
{ if(x>=size)
{ cout<<"Array out of bounds\n";
exit(0);
}
else {return num[x];}
}
void display()
{ for(int i=0;i<size;i++)
{ cout<<num[i]<<"\n"; }
}
};
int main()
{ Array a1;
a1.setArray();
int x=a1[3];
cout<<endl<<"x="<<x<<endl;
return 0;
}
