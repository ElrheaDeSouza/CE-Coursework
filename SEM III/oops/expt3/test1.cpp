#include<iostream>
using namespace std;

float volume(float side)
{
cout<<"\nEnter the side of the cube: ";
cin>>side;
return side*side*side;
}

float volume(float rad, float height)
{
cout<<"\nEnter the radius and height of the cylinder: "<<endl;
cout<<"Radius: ";
cin>>rad;
cout<<"Height: ";
cin>>height;
return 3.14*rad*rad*height;
}

int main()
{
cout<<volume(0)<<" is the volume of the cube  "<<endl;
cout<<volume(0, 0)<<" is the volume of cylinder  "<<endl;

return 0;
}
