#include<stdio.h>

int main() {

int panjang;
int tinggi;
int luas;

printf("masukan panjang = ");
scanf("%d" , &panjang);
printf("masukan tinggi = ");
scanf("%d" , &tinggi);

luas = panjang * tinggi; 

printf("total luas persegi panjang adalah %d" , luas);

return 0;

}