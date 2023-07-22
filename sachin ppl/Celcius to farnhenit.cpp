#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int farn(int);
int main(){
    int a;
    float result;
    printf("Enter temp which you want to convert it in farnehite :");
    scanf("%d",&a);
    result = farn(a);
    printf("Temp in farnehint is %f",result);
     return 0;       
}

int farn(int a){
    return (a * 9/5) + 32;
}
