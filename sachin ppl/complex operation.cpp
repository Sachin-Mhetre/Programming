// Online C compiler to run C program online
#include<stdio.h> 
struct complex
{
   int real, img;
   int subreal, subimg;
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

int main()
{
    int ops;
	printf("1) Addition \n2) Substration \n");
	printf("Enter your choice : ");
	scanf("%d",&ops);
	switch(ops){
		case 1:
			add();
			break;
		case 2:
		    sub();	
		    break;
	}
   return 0;
}  
