
/*#include<iostream>
namespace calculator
{
       int add(int x,int y){return(x+y);}
       int sub(int x,int y){return(x-y);}
       int mul(int x,int y){return(x*y);}
       float div(float x,float y){return(x/y);}
}
using namespace calculator;
using namespace std;
int main()
{
    int a,b;
    cout<<"\n Enter two numbers:";
    cin>>a>>b;
    cout<<"\n Sum="<<add(a,b);
    cout<<"\n Diff="<<sub(a,b);
    cout<<"\n Product="<<mul(a,b);
    cout<<"\n divisor="<<div(a,b);
    return 0;
}





//prog4 user defined namespace with the cpp file
//22co11 Elrhea Desouza  date:03/08/2023

#include<iostream>
namespace calculator

{
   int add(int x,int y){return (x+y);}
   int subract(int x,int y){return (x-y);}
   int mul(int x,int y){return (x*y);}
   float div(float x,float y){return (x/y);}
}
using namespace calculator;
using namespace std;
int main()
{
     float a,b;
     cout<<"\n enter two numbers:";
     cin>>a>>b;
     cout<<"\n sum="<<add(a,b);
     cout<<"\n diff="<<subract(a,b);
     cout<<"\n product="<<mul(a,b);
     cout<<"\n divisor="<<div(a,b);
    return 0;

}
*/
//prog13  to find if the number is a multiple of 3
// date:04/08/2023

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"\n assuming maximum age is 100"<<endl;
    cout<<"Enter the age:";
    cin>>age;
    	if(age>=0&&age<=12)
    	{
        	cout<<"Child";
    	}
    	else if(age>12&&age<18)
    	{
        	cout<<"Teen";
    	}
    	else if(age>=18&&age<60)
    	{
        	cout<<"Adult";
    	}
    	else if(age>=60)
    	{
        	cout<<"Senior Citizen";
    	}
    	else
        	cout<<"Invalid age";
    	return 0;
	}


