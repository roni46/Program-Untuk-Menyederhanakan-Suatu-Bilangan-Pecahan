#include<iostream>
#include <stdio.h>
#include<conio.h>


int pecahan();

int main()

{

	pecahan();

}

int pecahan()

{


	int a,b,l,t;

printf("PROGRAM MENYERDEHANAKAN BILANGAN PECAHAN\n\n");
printf("BY M Achmad Sahroni NIM 311620782\n");
printf("KAMPUS PELITA BANGSA. TEKNIK INFORMATIKA\n\n");

	printf("Masukkan Pembilang :");

	scanf("%d",&a);

	printf("Masukkan Penyebut :");

	scanf("%d",&b);

	t=a/b;

	l=a%b;

	if(a%b==0)

		printf("Bilangan(%d/%d)\nDisederhanakan Menjadi %d",a,b,t);

	else if (a%b !=0)

		printf("Bilangan(%d/%d)\nDisederhanakan Menjadi (%d %d-%d)",a,b,t,l,b);



}

