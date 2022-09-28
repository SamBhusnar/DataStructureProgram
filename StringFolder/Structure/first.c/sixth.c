// C program to illustrate
// size of struct
#include <stdio.h>

int main()
{

	struct A
	{

		// sizeof(int) = 4
		int x;
		// Padding of 4 bytes

		// sizeof(double) = 8
		double z;

		// sizeof(short int) = 2
		short int y;
		// Padding of 6 bytes
		// char sam[2];
		// int sam2[5];
	};
	struct A y;
	printf("Size of struct: %ld", sizeof(y));

	return 0;
}
