// Online C compiler to run C program online
#include <stdio.h>
int gcd(){
        int a,b,rem,gcd;
        printf("Enter first numbers : ");
        scanf("%d",&a);
        printf("Enter second numbers : ");
        scanf("%d",&b);
        while(a % b != 0){
            int rem = a % b ;
            a = b;
            b = rem;
            gcd = b ;
            printf("GCD is : %d",gcd);
        }
    }

   int lcm(){
        int a,b,rem,gcd,lcm;
        printf("Enter first numbers : ");
        scanf("%d",&a);
        printf("Enter second numbers : ");
        scanf("%d",&b);
        while(a % b != 0){
            int rem = a % b ;
            a = b;
            b = rem;
            gcd = b ;
        }
        lcm = (a + b) / gcd ;
        printf("LCM is : %d",lcm);
    } 
int main() {
    // Write C code here
    int ops;
    printf("1) GCD \n2) LCM \n3) exit \n");
    scanf("%d",&ops);
    switch(ops){
        case 1 :
           gcd();
           break;
        case 2 :
           lcm();
           break;
        case 3 :
           break;
        default:
          printf("Invalid options");
          break;
    }

    return 0;
}
