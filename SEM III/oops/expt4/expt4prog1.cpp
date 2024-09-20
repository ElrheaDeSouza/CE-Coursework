 /* Write a program to implement a class ‘Box’ with data members (Length, Breadth,
Height). Include different constructors to initialize data members and also include
members functions to compute surface area and volume of each box objects */

#include <iostream>
using namespace std;

class BOX
 {
private:
    float length;
    float breadth;
    float height;

public:
    // Default constructor
     BOX()
    {
        length = 0;
        breadth = 0;
        height = 0;
    }


   BOX(float,float,float);
    void putdata();
};
BOX::BOX( float l,float b,float h)
{
   float length,breadth,height;
   l=length;b=breadth;h=height;
   float sa,vol;
    cout<<"\n Enter the length breadth and height:";
    cin>>length>>breadth>>height;
    sa=2*(length*breadth+breadth*height+height*length);
    vol=length*breadth*height;
}
void BOX::putdata()
{
   float sa,vol;
    cout<<"\n The surface area="<<sa;
    cout<<"\n The volume="<<vol;
}

int main()
{
    BOX b();

    BOX b1(10,20,30);
    b1.putdata();

    BOX b2(10,20,30);
    b2.putdata();

    return 0;
}





















