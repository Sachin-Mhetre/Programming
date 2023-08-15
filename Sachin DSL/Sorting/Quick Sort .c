// Online C compiler to run C program online
#include <stdio.h>

int partition(int a[],int lb,int ub){
    int pivot,start,end,temp;
    pivot = a[lb];
    start = lb;
    end = ub;
    while(start<end){
        while(a[start]<= pivot){
            start++;
        }
        while(a[end]>pivot){
            end--;
        }
        if(start<end){
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }
     temp = a[lb];
     a[lb] = a[end];
     a[end] = temp;
     return end;
}

int quicksort(int a[],int lb,int ub){
    int loc;
    if(lb<ub){
        loc = partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}
void printArray(int a[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", a[i]);
  }
  printf("\n");
}


int main() {
    // Write C code here
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  
  int n = sizeof(data) / sizeof(data[0]);
  
  printf("Unsorted Array\n");
  printArray(data, n);
  
  // perform quicksort on data
  quicksort(data, 0, n - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(data, n);
    return 0;
}
