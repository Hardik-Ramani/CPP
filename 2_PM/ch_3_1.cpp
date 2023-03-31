#include<iostream>
using namespace std;

class stud { 
	char name[10];
	int id;
	int r_n;
 	public :
	 	input() {
	 		cout<<"Enter name of student : ";
	 		cin>>name;
	 		cout<<"Enter id of student : ";
	 		cin>>id;
	 		cout<<"Enter roll number of student : ";
	 		cin>>r_n;
		 }
		 output() {
		 	cout<<"The name of student : "<<name<<endl;
		 	cout<<"The id of student : "<<id<<endl;
		 	cout<<"The roll number of student : "<<r_n<<endl;
		 }
};

main () {
	stud s;
	s.input();
	s.output();
}


