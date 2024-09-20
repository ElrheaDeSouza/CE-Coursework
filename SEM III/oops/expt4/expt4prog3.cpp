/*  Write a program to implement a class ‘Solid’ with data members (radius,height).
Include different constructors to initialize data members and also include members
functions to compute volume of cylinder and cone. Include default argument for the
data member ‘radius’.*/

#include<iostream>
#include<stdlib.h>
#define pi 3.14
using namespace std;

class Solid
{
	float radius=10, height;
	public:
		Solid(){ }
		Solid(float h, float r);
		void vol_of_cylinder();
		void vol_of_cone();
};
Solid::Solid(float h, float r=10)
{
	radius =r; height=h;
}
void Solid::vol_of_cylinder()
{
	float vol= pi*radius*radius*height;
	cout<<"Volume of Cylinder is: "<<vol<<endl;
}
void Solid::vol_of_cone(){
	float vol= pi*radius*radius*height*(0.33);
	cout<<"Volume of Cone is: "<<vol<<endl;
}
int main()
{

	Solid s;
	int r, h;
        cout<<"Enter Height and Radius: ";
        cin>>h>>r;
        s=Solid(h);
        s.vol_of_cylinder();
        s.vol_of_cone();
	    return 0;
}

