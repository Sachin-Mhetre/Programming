// Online C compiler to run C program online
#include<stdio.h> 
struct complex
{
   int real, img;
   int subreal, subimg;
   int mulreal, mulimg;
   int divreal, divimg;
};
int add(){
    struct complex a, b, c;

   printf("Enter a and b where a + ib is the first complex number.\n");
   scanf("%d%d", &a.real, &a.img);
   printf("Enter c and d where c + id is the second complex number.\n");
   scanf("%d%d", &b.real, &b.img);

   c.real = a.real + b.real;
   c.img = a.img + b.img;
   
   printf("Sum of the complex numbers: (%d) + (%di)\n", c.real, c.img);
}

int sub(){
   struct complex a, b, c;
   printf("Enter a and b where a + ib is the first complex number.\n");
   scanf("%d%d", &a.real, &a.img);
   printf("Enter c and d where c + id is the second complex number.\n");
   scanf("%d%d", &b.real, &b.img);
   
   c.subreal = a.real - b.real;
   c.subimg = a.img - b.img;
   
   printf("Sum of the complex numbers: (%d) + (%di)\n", c.subreal, c.subimg);
}

int mul(){
   struct complex a, b, c;
   printf("Enter a and b where a + ib is the first complex number.\n");
   scanf("%d%d", &a.real, &a.img);
   printf("Enter c and d where c + id is the second complex number.\n");
   scanf("%d%d", &b.real, &b.img);
   c.mulreal = a.real*b.real - b.real*b.img ;
   c.mulimg = a.real*b.img + a.img*b.real ; 
   printf("Sum of the complex numbers: (%d) + (%di)\n", c.mulreal, c.mulimg);
}

int div(){
   struct complex a, b, c;
   printf("Enter a and b where a + ib is the first complex number.\n");
   scanf("%d%d", &a.real, &a.img);
   printf("Enter c and d where c + id is the second complex number.\n");
   scanf("%d%d", &b.real, &b.img);
   c.divreal = (a.real*b.real + b.real*b.img )/b.real*b.real + b.img*b.img;
   c.divimg  = (a.img*b.real - a.real*b.img) / b.real*b.real + b.img*b.img; 
   printf("Sum of the complex numbers: (%d) + (%di)\n", c.mulreal, c.mulimg);
}

int main()
{
    int ops;
	printf("1) Addition \n2) Substration \n3) Multiplication \n4) Division \n5) Exit \n");
	while(ops != 5){
		printf("Enter your choice : ");
	    scanf("%d",&ops);
	    switch(ops){
		     case 1:
			  add();
			  break;
	     	 case 2:
		       sub();	
		       break;
		     case 3:
		       mul();
			   break;
		     case 4:
		     	div();
		        break;
		     case 5:
			    break;	
		     default:
		       printf("Invalid option");	    
	    }
	}
   return 0;
}  
