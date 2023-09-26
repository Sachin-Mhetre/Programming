#include<iostream>
using namespace std;

class complex;

class calculator{
  public:
     complex sum(complex c1,complex c2);
};

class complex{
	private:
		float real,img;
	public:
	    complex(){
	    	real =0;
	    	img = 0;
		}
		
		complex(complex &c){
        cout<<"copy constructor"<<endl;
        real=c.real;
        img=c.img;
        }
			
		complex(float r , float i){
			real =r;
			img = i;
		}
		
		friend complex calculator::sum(complex c1,complex c2);
		
		void display(){
			cout<<"("<<real<<","<<img<<"i)"<<endl;
		}
		
};

complex calculator::sum(complex c1,complex c2){
	complex sum;
	sum.real = c1.real + c2.real;
	sum.img = c1.img + c2.img;
	return sum;
}

int main(){
	complex c1(2.3,5.9),c2(6.4,8.9),c3;
	calculator cal;
	c3 = cal.sum(c1,c2);
	c1.display();
	c2.display();
	cout<<"And the sum is :"<<endl;
	c3.display();
	return 0;
	
}
