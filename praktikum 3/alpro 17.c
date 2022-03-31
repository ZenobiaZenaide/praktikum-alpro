
/* alpro nomor 17 : TarifPLN
nama : Zenobia Wirandi Zenaide
NIM : 24060121140164
Deskripsi : membuat bahasa c TarifPN
*/

#include <stdio.h>

int main (){
	//Kamus
	int i,g,T;

	//Algoritma
	printf("Membuat Program Tarif PLN \n");
	printf("Jumlah daya listrik yang dipakai  : ");
	scanf("%d", &i);
	printf("Golongan Tarif  : ");
	scanf("%d", &g);

	if ( i < 100 ) {
		T = g * 1000 * 100;
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
    }
	else if ( i >= 1000 ) {
		T = (g * 1000 * i) * 1.1;
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
	}
	else {
		T = g * 1000 * i;
		printf(" Maka Tunjangan yang harus dibayar sebesar  : %d", T);
	}
	return 0;
}
