/*
	Input : 8
	Output : 2 4 6 8 10 12 14 16
*/

#include <stdio.h>


void Pattern(int iNo)
{
	for ( int iCnt = 1 ; iCnt <= iNo ; iCnt++ )
	{
		printf( "%d " , ( iCnt * 2 ) );
	}
	printf("\n");
}

int main()
{
	int iValue = 0;

	printf("Enter number of elements");
	scanf("%d",&iValue);

	Pattern(iValue);

return 0;
}

