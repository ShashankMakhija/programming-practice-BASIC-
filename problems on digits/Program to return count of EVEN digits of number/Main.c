////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	A6.1.Write a program which accept number from user and return the count of even digits.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Header.h"

int main()
{

	auto int iValue = 0;
	printf ( "Enter Number :\n");
	scanf ( "%d" , &iValue );
	
	auto int iRet = 0;
	
	iRet = CountEven ( iValue );
	
	printf("%d\n" , iRet );

return 0;
}