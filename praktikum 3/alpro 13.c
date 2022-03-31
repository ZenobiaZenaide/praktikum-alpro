/*nomor 13 : BiayaParkir
Nama : Zenobia Wirandi Zenaide
NIM : 24060121140164
Deskripsi : membuat bahasa c biayaparkir
*/

#include <stdio.h>

int main (){
	//Kamus
	int i,b;

	//Algoritma
	printf("Membuat Program Biaya Parkir \n");
	printf("Jam lamanya parkir  : ");
	scanf("%d", &i);

	if ( i > 2) {
		b = 200 + (i-2) * 500 ;
		printf(" Biaya Parkir sebesar: %d", b);
    }
	else{
		b = 2000;
		printf(" Biaya Parkir sebesar: %d", b);
	}
	return 0;
}
