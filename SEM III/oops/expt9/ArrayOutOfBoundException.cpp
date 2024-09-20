//Write a program to handle array index out of bound exception
#include<iostream>
using namespace std;
int main(){
 int a[]={12,3,5};
 int n,i;
 cout<<"\n Enter the size of array:";
 cin>>n;
 try{
 if(n>a[4]) {
  throw n;
 }
  else {
  cout<<"\n Enter the elements:";
  for( i=0;i<n;i++)
  cin>>a[i];
  for(i=0;i<n;i++)
  cout<<a[i]<<" ";
 }
 }
 catch(int n){
  cout<<"\n Array out of bonds ";
 }
 cout<<endl;
 return 0;
}
