#include<iostream>
#include<stdio.h>
using namespace std;

class Student{
	public:
	char name[10];
	int m1,m2,m3,m4,m5;
	int prn;
	int per;
	void input(){
		cout<<"Enter your name : ";
		cin>>name;
		cout<<"Enter your prn : ";
		cin>>prn;
		cout<<"Enter your marks : ";
		cin>>m1;
		cout<<"Enter your marks : ";
		cin>>m2;
		cout<<"Enter your marks : ";
		cin>>m3;
		cout<<"Enter your marks : ";
		cin>>m4;
		cout<<"Enter your marks : ";
		cin>>m5;
	}
	void output()
        {
                cout<<"\n the student name: "<<name;
                cout<<"\n the student roll no: "<<prn;
                cout<<"\n the student mark of sub 1: "<<m1;
                cout<<"\n the student mark of sub 2: "<<m2;
                cout<<"\n the student mark of sub 3: "<<m3;
                cout<<"\n the student mark of sub 4: "<<m4;
                cout<<"\n the student mark of sub 5: "<<m5;
        }
    void calculate ()
        {
                per= (m1+m2+m3+m4+m5)/5;
                cout<<"\n total percentage :: "<<per<<"\n";
        }
};
int main(){ 
  Student sachin;
  int ch;
    cout<<"\n1.input data";
    cout<<"\n2.output data";
    cout<<"\n3.Calculate percentage";
    cout<<"\n4.exit\n";
    while(ch!=4){
    cout<<"\nEnter the choice : "; 
    cin>>ch;
    switch(ch){
    	case 1:
    		sachin.input();
    		break;
    	case 2:
    	    sachin.output();
    	    break;
    	case 3 : 
    	    sachin.calculate();
    	    break;
    	case 4 : 
    	   break;
	}
 }
}
