/*Write a program to implement a class called Phonebook. It should contain the contact name and
contact number and include member functions to initialize the data members (use setter and getter
functions). Use an array of object to display contact list.*/


#include<iostream>
#include<stdlib.h>
using namespace std;
class PhoneBook{
	char contact_name[30];
	char contact_num[30];
	public:
		void setContact();
		void getContact();
};
void PhoneBook::getContact(){
	cout<<"Enter name of the person: ";
	cin>>contact_name;
	cout<<"Enter phone number: ";
	cin>>contact_num;
}

void PhoneBook::setContact(){
	cout<<"Contact: "<<contact_name<<endl;
	cout<<"Ph. No.: "<<contact_num<<endl;
}

int main(){
	PhoneBook p[30];
	int n, c;
	while(1){
		cout<<"\t\tWelcome to PhoneBook\t\t\nPress 1 to add contacts\nPress 2 to display contacts\nPress 3 to exit\nEnter choice: ";
		cin>>c;
		switch(c){
			case 1:
				cout<<"Enter the number of contacts you want to add: "<<endl;
				cin>>n;
				for(int i=0; i<n; i++){
					p[i].getContact();
					}
					break;
			case 2:
				for(int i=0; i<n; i++){
					p[i].setContact();
				}
				break;
			case 3:
				exit(1);
			default:
				cout<<"Invalid choice"<<endl;
				break;
				}
			}
	return 0;
}
