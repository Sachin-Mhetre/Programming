#include<iostream>
#include<string>
using namespace std;

class complex{
    int real;
    int imag;
    public:
    complex(){
        real=imag= 0;
    }
    
    complex(int r , int i){
        real = r;
        imag = i;
    }
    
    friend ostream&operator<<(ostream&out , complex &c);
    friend istream&operator>>(istream&in , complex &c);
};

ostream & operator<<(ostream&out , complex&c){
    out<<"real : "<<c.real<<"imag : "<<c.imag<<endl;
    return out;
}

istream & operator>>(istream&in , complex &c){
    cout<<"Real part : ";
    in>>c.real;
    cout<<"Imag part : ";
    in>>c.imag;
    return in;
}

int main(){
    complex c1,c2;
    cout<<"Enter complex 1 : "<<endl;
    cin>>c1;
    cout<<"Enter complex 2 : "<<endl;
    cin>>c2;
    
    cout<<"Complex number 1 : "<<c1<<endl;
    cout<<"Complex number 2 : "<<c2<<endl;
}
