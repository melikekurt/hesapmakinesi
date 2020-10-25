/*
*hesapmakinesi.c
*Basit bir hesap makinesi programi:
kullanicidan islem ve iki sayi isteyip sonra islemin sonucunu gösterir.*/

#include<stdio.h>
int main(){ 
	char operator ; // * + - /
	float n1, n2 ;
		
		printf("Lutfen ilk sayiyi giriniz.\n");
		scanf("%f",&n1);
		printf("Lutfen islemi giriniz.\n");
		scanf("%c",&operator);
		printf("Lutfen ikinci sayiyi giriniz.\n");
		scanf("%f",&n2);
	switch (operator){
		case'+': // if operatpr == '+' 
			printf("Toplamanin sonucu %f \n",n1+n2);
			break;
		case'-':
			printf("Cikarmanin sonucu %f \n",n1-n2);
			break ;
		case'*':
			printf("Carpimin sonucu %f \n", n1*n2);
			break;
		case'/':
			printf("Bolumun sonucu %f \n", n1/n2);
			break;
		default: // operator tanýmlanan dýsýndaysa 
			printf("Islem sunlardan biri olmali : + - / *");
	}
	return 0 ;
}


