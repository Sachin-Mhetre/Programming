// Online C compiler to run C program online
#include<stdio.h>

int binarysearch(int a[] , int n ,int key){
    int l=0;
    int r = n-1;
    while(l<n){
        int mid = (l+r)/2;
        if(a[mid]==key){
           return mid;
        }
        else if(key<a[mid]){
           r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1 ;
}

int main(){
    int a [] = {5,7,8,9,75,47,55,87};
    int key = 55;
    int loc,n;
    n  = sizeof(a)/sizeof(a[0]);
    loc = binarysearch(a,n,key);
    printf("Given number is in : %d index",loc);
}
