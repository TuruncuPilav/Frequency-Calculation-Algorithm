/*
	Aynı değerleri içerebilen bir dizi verilen tüm elemanları ve frekanslarını yazdıran algoritmanın C kodunu yazın.

 	Write the C code of the algorithm that prints out all the elements and their frequencies given an array that can contain the same values.
*/

#include <stdio.h>
#include <string.h>

void soru1(int dizi[], int uzunluk) {
	int hh = 1, i, j;

	for (i = 0; i < uzunluk; i++){
		for (int j = i+1; j < uzunluk; j++){
			if (dizi[i] == dizi[j]) {
				hh++;
				for (int k = j; k < uzunluk; k++){
					dizi[k] = dizi[k + 1];
				}
				j--;
			}
		}
		printf("%d -> %d\n", dizi[i], hh);
		hh = 1;
	}
}

int main() {
	int numbers[] = { 10,20,20,10,10,20,5,20 };
	int uzunluk = sizeof(numbers) / sizeof(numbers[0]);

	soru1(numbers, uzunluk);

	return 0;
}
