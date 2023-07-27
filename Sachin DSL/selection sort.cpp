#include<stdio.h>

void bubblesort(){
	int a[7] = {8,7,6,9,3,1,5};
	int i,j,min,temp=0;
	for(i = 0 ; i < 6 ; i++){
		for(j = 0 ; j < 7-i-1;j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(int i = 0; i < 7; i++) {
    printf("%d  ", a[i]);
   }
   printf("\n");
	
}
void binarysort(){
	
}

void selectionsort(){
	int a[7] = {8,9,6,7,6,3,68};
	int i,j,min,temp=0;
	for(i = 0;i<6;i++){
		min = i;
		for(j=i+1;j<7;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		if(min!=i){
			int temp = a[i];
			a[i] = a[min] ;
			a[min] = temp;
		}
	}
	
  for(int i = 0; i < 7; i++) {
    printf("%d  ", a[i]);
   }
   printf("\n");
}

int main(){
	int ops;
	printf("!-----Welcome-----!\n");\
	printf("1) Bubble Sort \n2) Binary Sort \n3) Selection Sort \n");
	scanf("%d",&ops);
	switch(ops){
		case 1:
			bubblesort();
			break;
		case 2:
		    binarysort();
			break;
		case 3:
		    selectionsort();
			break;
		default:
		    printf("Invalid option");			
	}

}
