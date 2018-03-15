#include "revert_string.h"
#include <stdio.h>
#include "swap.h"
#include <string.h>

void RevertString(char *str)
{
    
	int len = strlen(str);
	
    //printf("%i", len);
	
	for(int i =0;i<len/2;i++)
	
	{
	   // printf("%i\n", i);
	  //  printf("%i\n", len-i);
	    Swap(&str[i],&str[len-1-i]);
	    
	}
	
}

