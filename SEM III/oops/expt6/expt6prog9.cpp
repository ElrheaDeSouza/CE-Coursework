//program for conversion routines.
#include<iostream>
#include<math.h>
using namespace std;

class Rectangle{
    public:
    float x, y;
    Rectangle(){x=0, y=0;}
    Rectangle(float l, float b){x=l, y=b;}
    void dis_rect(){
    cout<<"x :"<<x<<" y :"<<y;
    }
    Rectangle operator+(Rectangle& R1){
    Rectangle temp;
    temp.x=x+R1.x;
    temp.y=y+R1.y;
    return temp;
    }
};

class Polar{
    public:
    float r, a;
    Polar(float r1, float a1){r=r1, a=a1;}
    Polar(){r=0, a=0;}
    void dis_pol(){
    cout<<"r :"<<r<<" a :"<<a<<endl;
    }

    operator Rectangle(){
    Rectangle r1;
    r1.x=r*cos(a);
    r1.y=r*sin(a);
    return r1;
    }

    Polar(Rectangle& r1){
    r=sqrt((r1.x*r1.x)+(r1.y*r1.y));
    a=tan(r1.y/r1.x);
    }
};

int main(){
    Rectangle r1,r2,r3;
    Polar p1(1,0.75),p2(2,0.85),p3;
    r1=p1;
    r2=p2;
    r3=r1+r2;
    p3=r3;
    p3.dis_pol();
    r3.dis_rect();

    return 0;
}
