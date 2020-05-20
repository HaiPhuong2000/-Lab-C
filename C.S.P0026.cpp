#include <stdio.h>
#include <math.h>
#include <conio.h>

long decimalToBinary(int decimalnum)
{
    long binarynum = 0;
    int rem, temp = 1;

    while (decimalnum!=0)
    {
        rem = decimalnum%2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    return binarynum;
}

int main()

{
	    int decimalnum, c;
	do{	
    printf("Convert Decimal to Binary program");
    printf("\nEnter a positive Number: ");
    scanf("%d", &decimalnum);
    printf("\nBinary Number: %ld", decimalToBinary(decimalnum));
    printf("\nPress any key to do another conversion\n");
    c = getch();
	}
	while (c != 0);
    return 0;
}
