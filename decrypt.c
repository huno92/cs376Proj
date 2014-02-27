#include <stdio.h>
#include "decrypt.h"
void decrypt(char ** a)
{
  int i=0;
  int j=0;
  for(i; a[i]!=NULL;i++){
    for(j=0;a[i][j]!='\0';j++) {
      if (a[i][j] == 33)
	{
	  a[i][j] = 126;
	}
      else
	{
	  a[i][j]--;
	}
      }
  }
  
  return;
}
