#include<iostream>
using namespace std;

class complex{
	private:
		float real,img;
	public:
	    complex(){
	    	real =0;
	    	img = 0;
		}
			
		complex(float r , float i){
			real =r;
			img = i;
		}
		
		friend complex sum(complex c1,complex c2);
		
		void display(){
			cout<<"("<<real<<","<<img<<"i)"<<endl;
		}
		
};

complex sum(complex c1,complex c2){
	complex sum;
	sum.real = c1.real + c2.real;
	sum.img = c1.img + c2.img;
	return sum;
}

int main(){
	complex c1(2.3,5.9),c2(9.8,6.4),c3;
	c3 = sum(c1,c2);
	c1.display();
	c2.display();
	cout<<"And the sum is :"<<endl;
	c3.display();
	return 0;
	
}
