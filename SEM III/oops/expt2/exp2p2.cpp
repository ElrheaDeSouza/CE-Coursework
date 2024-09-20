/*Create a class called Box with data member length,breadth and height. Use setter and getter functions
and display the volume and surface area of different box objects.*/

#include<iostream>
#include<stdlib.h>
using namespace std;
class Box{
	float length, breadth, height;
	public:
		void setDimensions(float l, float b, float h){
			length = l;
			breadth = b;
			height = h;
		}
		void calcSurfaceArea(){
		float s;
		s=2*((length*breadth)+(length*height)+(breadth*height));
		cout<<"The surface area of box is: "<<s<<endl;
		}
		void calcVolume(){
		float v;
		v= (length*breadth*height);
		cout<<"The volume of box is: "<<v<<endl;
		}
		void getResult(){
		calcSurfaceArea();
		calcVolume();
		}
};

int main(){
	Box b;
	int c;
	int a, r, d;
	while(1){
		cout<<"\t\tWelcome to Box Calculator\t\t\n";
		cout<<"Enter length, breadth and height respectively: ";
		cin>>a>>r>>d;
		b.setDimensions(a, r, d);
		b.getResult();
		cout<<"do you wish to continue?(1/0)"<<endl;
		cin>>c;
		if(c==1){
			continue;
		}
		else{
			exit(1);
		}
	}
	return 0;
}
/*
//or
#include<iostream>
using namespace std;
class Box
{
    float length,breadth,height,sa,vol;
public:
    void getdata();
    void putdata();
};
void Box::getdata()
{
    int n;
    cout<<"\n Enter the length breadth and height:";
    cin>>length>>breadth>>height;
    cout<<"\n Enter 1 to calc vol 2 to cal sa";
    cin>>n;
    if(n==1)
    vol=length*breadth*height;
    else
       sa=2.0*((length*breadth)+(breadth*height)+(height*length));
}
void Box::putdata()
{
    int n;

    if(n==1)
     cout<<"vol ="<<vol;

    else
      cout<<"\n surface area="<<sa;
}
int main()
{   int c;
    Box b1;
    cout<<"\n Enter 1 to cal 2 to exit:";

    while(1)
    { cout<<"\n Enter your choice:";
    cin>>c;
        switch(c)
        {
            case 1:b1.getdata();
                   b1.putdata();
                   break;

            case 2:exit(1);
            default:cout<<"\n Invalid choice...";
        }
        }

    return 0;
}

*/
