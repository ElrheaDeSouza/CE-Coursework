
#include<iostream>
using namespace std;
class add
{
    int a[10],n;
    public:
       int getdata();
       int sclrAdd(int x);
       int display();
};


int add::getdata()
{
    cout<<"\n Enter the total number of elements:";
    cin>>n;
    cout<<"\n Enter the numbers:";
    for(int i=0;i<n;i++)
        cin>>a[i];
}
int add::sclrAdd(int x)
{
    for(int i=0;i<n;i++)
    a[i]=a[i]+x;

}
int add::display()
{
    for(int i=0;i<n;i++)
        cout<<"\t"<<a[i];
}

int main()
{
    add n1;
    int x;
    n1.getdata();
    cin>>x;
 n1.sclrAdd(x);
 n1.display();

}
