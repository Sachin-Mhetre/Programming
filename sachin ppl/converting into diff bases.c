#include<stdio.h>
#include<math.h>
int decimaltobinary(){
   int bin[32],dec;
   int i = 0;
   printf("Enter the decimal number :");
   scanf("%d",&dec);
    while (dec!= 0) {
        bin[i] = dec % 2;
        dec = dec / 2;
        i++;
    }
	int j;
	for (j = i - 1; j >= 0; j--){
		 printf("%d",bin[j]);
	}
 }  


int binarytodecimal(){
	int bin,last_digit,base = 0,dec_value,temp;
	printf("Enter the binary number :");
	scanf("%d",&bin);
	while(bin){
		last_digit = bin % 10;
		bin = bin / 10;
		dec_value += last_digit * pow(2,base);
		base++;
	}
	printf("%d",dec_value);
}

int decimaltooctal(){
	int dec[100],n,i=0;
	printf("Enter the decimal number :");
	scanf("%d",&n);
	while(n!=0){
		dec[i] = n % 8;
		n = n / 8;
		i++;
	}
	for (int j = i - 1; j >= 0; j--){
	  printf("%d", dec[j]);
	}
}

int octaltodecimal(){
	int oct,last_digit,base = 0,dec_value,temp;
	printf("Enter the octal number :");
	scanf("%d",&oct);
	while(oct){
		last_digit = oct % 10;
		oct = oct / 10;
		dec_value += last_digit * pow(8,base);
		base++;
	}
	printf("%d",dec_value);

}

int decimaltohexadecimal(){
	int dec[100],n,i=0;
	printf("Enter the decimal number :");
	scanf("%d",&n);
	while(n!=0){
		dec[i] = n % 16;
		n = n / 16;
		i++;
	}
	for (int j = i - 1; j >= 0; j--){
	  printf("%d", dec[j]);
	}
}

int hexadecimaltodecimal(){
    int hex,last_digit,base = 0,dec_value = 0,temp=0;
	printf("Enter the octal number :");
	scanf("%d",&hex);
	while(hex){
		last_digit = hex % 10;
		hex = hex / 10 ;
		dec_value += last_digit * pow(16,base);
		base++;
	}
	printf("%d",dec_value);

}
int main(){
	printf("!--------Welcome to my base converter--------! \n");
	int n;
	printf("1) Decimal to binary \n2) Binary to decimal \n3) Decimal to octal \n4) Octal to decimal \n5) Decimal to Hexadecimal \n6) Hexadecimal to decimal \n7) exit \n");
	printf("Enter the option you want to choose : ");
	scanf("%d",&n);
	while(n != 7){

	switch(n){
	
		case 1 :
			decimaltobinary();
			break;
		case 2 :
			binarytodecimal();
			break;
		case 3 :
		    decimaltooctal();
			break;
		case 4 :
		    octaltodecimal();
			break;
		case 5 :
		    decimaltohexadecimal();
			break;
		case 6 :
		    hexadecimaltodecimal();
			break;
		case 7 :
		    break;	
		default :
		   printf("Invalid option");
		   break;

}
}
   return 0;		   			     	
}
