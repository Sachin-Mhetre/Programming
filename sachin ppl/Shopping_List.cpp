#include<iostream>
using namespace std;

class shopping{
	int itemcode[50];
	float itemprice[50];
	int count;
	public:
		void cntzero(){
			count = 0;
		}
		void getitem(){
			cout<<"Enter item code : ";
			cin>>itemcode[count];
			cout<<"Enter item price : ";
			cin>>itemprice[count];
			count++;
		}
		void displayitem(){
			cout<<"\n Code \t Price \n";
			for(int i = 0 ;i<count ; i++){
				cout<<" "<<itemcode[i]<<"\t "<<itemprice[i]<<endl;
	         }
	         cout<<"\n";
		}
        void remove(){
			int a;
			cout<<"Enter item code : ";
			cin>>a;
			for(int i = 0 ; i<count;i++){
				if(itemcode[i]==a){
				   itemprice[i] = 0;
			    }
			}
		}
		
		void displaysum(){
			int i;
			float sum = 0;
			for(i =0;i<count;i++){
				sum = sum + itemprice[i];
			}
			cout<<"\n Total : "<<sum<<"\n";
	}
};

int main(){
  int ops;
  shopping list;
  list.cntzero();
  while(ops!=5){
  cout<<"\n you can do the following:";
 	cout<<"Enter Appropriate number \n";
 	cout<<"\n1 : Add an item";
 	cout<<"\n2 : Display Total Value";
 	cout<<"\n3 : Delete an item";
 	cout<<"\n4 : Display all items";
 	cout<<"\n5 : Quit";
 	cout<<"\n\n Choice : ";
 	cin>>ops;
    switch(ops){
    	case 1:
    		list.getitem();
    		break;
    	case 2:
		    list.displaysum();
			break;
		case 3:
		    list.remove();
			break;
		case 4:
		    list.displayitem();
			break;
		case 5:
		    break;		
	}			
    
 }
}
