#include<stdio.h>
#include<stdlib.h>
int callbyr(int &nPtr);
int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);
	callbyr(number);
	printf("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;
}
int callbyr(int &nPtr)
{
	nPtr = nPtr * nPtr *nPtr;
	return nPtr;
}