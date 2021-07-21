#include<stdio.h>
int main()
{
	char str1[100],str2[100];
    int i,j,flg=0;
    printf("Enter the string 1 :");
    gets(str1);
    printf("Enter the string 2 :");
    gets(str2);

    for(i=0,j=0;str1[i]!='\0'&&str2[j]!='\0';i++,j++)
    {
    	if(str1[i]!=str2[j])
    	{
	    	flg++;
	    	break;
	    }
    }
    if(flg ==0)
    printf("\n TWO STRINGS ARE EQUAL :\N");
    else
    printf("TWO STRINGS ARE NOT EQUAL ");
       
       return 0;
}