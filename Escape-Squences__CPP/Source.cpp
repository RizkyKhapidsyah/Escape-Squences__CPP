#include <stdio.h>
#include <conio.h>

int main() {
	char Nama1[10] = "Dila", Nama2[10] = "Ani", Nama3[10] = "Fitri";
	float a = 88.3, b = 93.2, c = 33.1;

	printf("%8s\t %7s\t %8s", Nama1, Nama2, Nama3);
	printf("\n%8.2f \t %8.2f \t %8.2f ", a, b, c);

	_getch();
	return 0;
}