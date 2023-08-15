
#include<stdio.h>
void bubblesort(int a[], int size){
	int i,j;
	int flag=0;
	for(i = 0 ; i<size-1;i++){
		flag = 0 ; 
		for( j = 0 ; j < size - i - 1 ; j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]= temp;
				flag = 1;
			}
		}
		
		if(flag == 0){
			break;
		}
	}
}



int main(){
	int size,i;
	printf("Enter the how many element you want to enter : ");
	scanf("%d",&size);
	printf("Enter the term : ");
	int a[size];
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	bubblesort(a,size);
	printf("Sorted array: \n");
     for ( i = 0; i < size; i++){
        printf("%d ", a[i]);
     }
	return 0;
}
