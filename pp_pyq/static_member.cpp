#include<iostream>
#include<string>
using namespace std;

class A{
    static int count;
    public:
    A(){
        count++;
    }
    
    static void showcount(){
        cout<<"Object created : "<<count<<endl;
    }
};

int A::count = 0;

int main(){
    A obj1,obj2,obj3;
    A::showcount();
    
}
