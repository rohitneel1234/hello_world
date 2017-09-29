#include "header.h"
#include<stdio.h>
#define MAX_SIZE 20
int  main()
{
char str1[MAX_SIZE],str2[MAX_SIZE];

    printf("Enter  string 1 : ");
    scanf("%[^\n]s",str1);//read string with spaces

	getchar();//read enter after entering first string

    printf("Enter  string 2 : ");
    scanf("%[^\n]s",str2);//read string with spaces

    stringCat(str1,str2);
    printf("\nAfter concatenate strings are :\n");
    printf("String 1: %s \nString 2: %s",str1,str2);

    printf("\n");
    return 0;
}
