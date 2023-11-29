#include<iostream>
#include<string>
using namespace std;

class media{
    protected:
    string title;
    float price;
    public:
    media(){
        title = "";
        price = 0.0;
    }
    
    media(string t , float p){
        title = t;
        price = p;
    }
    
    virtual void display(){
        cout<<"title : "<<title<<endl;
        cout<<"price : "<<price<<endl;
    }
};

class book:public media{
    protected:
    int pagecount;
    public:
    book(){
        pagecount=0;
    }
    
    book(string t , float p , int pc):media(t,p){
        pagecount = pc;
    }
    
    void display(){
        media::display();
        cout << "Page Count: " << pagecount << endl;
    }
};

class CD:public media{
    protected:
    float time;
    public:
    CD(){
        time = 0.0;
    }
    
    CD(string t , float p ,float tim):media(t,p){
        time = tim;
    }
    
    void display(){
        media::display();
        cout << "Time play: " << time << endl;
    }
};

int main(){
    book b("programming in JAVA",150,65);
    CD cd("programming in C++",1000,125);
    
    cout<<"Book information"<<endl;
    b.display();
    
    cout<<"CD information "<<endl;
    cd.display();
    
}
