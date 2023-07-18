#include<stdio.h>
#include<math.h>

int add(){	
    int real1,real2,img1,img2,add_complex,img_complex;
	printf("Enter the first real number : ");
	scanf("%d",&real1);
	printf("Enter the second real number : ");
	scanf("%d",&real2);
	printf("Enter the first img number : ");
	scanf("%d",&img1);
	printf("Enter the second img number : ");
	scanf("%d",&img2);
	add_complex = real1 + real2;
	img_complex = img1 + img2 ;
	printf("Addition of complex number is : %d + i%d ",add_complex,img_complex);
}
int subs(){	
    int real1,real2,img1,img2,subs_complex,img_complex;
	printf("Enter the first real number : ");
	scanf("%d",&real1);
	printf("Enter the second real number : ");
	scanf("%d",&real2);
	printf("Enter the first img number : ");
	scanf("%d",&img1);
	printf("Enter the second img number : ");
	scanf("%d",&img2);
	subs_complex = abs(real1 - real2);
	img_complex = abs(img1 - img2);
	printf("Substration of complex number is : %d - i%d ",subs_complex,img_complex);
}
int main(){
	int ops;
	printf("1) Addition \n2) Substration \n");
	printf("Enter your choice : ");
	scanf("%d",&ops);
	switch(ops){
		case 1:
			add();
			break;
		case 2:
		    subs();	
		    break;
	}
	return 0 ;
}
