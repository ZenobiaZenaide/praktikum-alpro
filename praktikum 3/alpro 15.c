/* alpro nomor 15 : UpahKerja
nama : Zenobia Wirandi Zenaide
NIM : 24060121140164
Deskripsi : membuuat aplikasi bahasa c terhadap upahkerja
*/

#include <stdio.h>

int main (){
	//Kamus
	int i,g,U1;

	//Algoritma
	printf("Membuat Program Upah Kerja \n");
	printf("Jam Kerja per Minggu  : ");
	scanf("%d", &i);
	printf("Golongan Karyawan  : ");
	scanf("%d", &g);

	if ( i < 40) {
		U1 = i * (1000 + (i-2)*500);
		printf(" Upah kerja sebesar : %d", U1);
    }
	else{
		U1 = i * (1000 + (i-2)*500)*40 + ((i-40)*(1000 + (g-1)*500));
		printf(" Upah kerja sebesar : %d", U1);
	}
	return 0;
}
