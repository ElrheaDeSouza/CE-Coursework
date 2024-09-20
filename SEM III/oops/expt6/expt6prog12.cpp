/*program to overload >,<,<=,>= operators to compare two class object using member functions.*/
#include<iostream>
#include<stdlib.h>
using namespace std;

class Compare{
    int num;
    public:
    Compare(int n){num = n;}
    int operator >(Compare &a){
        return (num>a.num);
    }
    int operator <(Compare &a){
        return (num<a.num);
    }
    int operator >=(Compare &a){
        return (num>=a.num);
    }
    int operator <=(Compare &a){
        return (num<=a.num);
    }
};

int main(){
    float n,n1;
    int c;
    cout<<"enter two values a and b : ";
    cin>>n>>n1;
    Compare a(n),b(n1);

    cout<<"Enter\n1.>\n2.<\n3.>=\n4.<=\n";
    while(1){
    cout<<"\nEnter your choice :";
    cin>>c;
    switch(c){
        case 1:if(a>b)
                cout<<"a greater than b\n";
                else cout<<"a not greater than b\n";
                break;
        case 2:if(a<b)
                cout<<"a less than b\n";
                else cout<<"a not less than b\n";
                break;
        case 3:if(a>=b)
                cout<<"a greater than or equal to b\n";
                else cout<<"a not greater than or equal to b\n";
                break;
        case 4:if(a<=b)
                cout<<"a less than or equal to b\n";
                else cout<<"a not less than or equal b\n";
                break;
        case 5:exit(0);
        }
    }
    return 0;
}
