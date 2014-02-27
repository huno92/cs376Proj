#include <stdio.h>
#include "encript.h"
void encript(char ** a)
{
  int i=0;
  int j=0;
  for(i = 0; a[i] != NULL;i++){
    for(j = 0;a[i][j] != '\0'; j++) {
      if (a[i][j] == 126)
	{
	  a[i][j] = 33;
	}
      else
	{
	  a[i][j]++;
	}
      }
  }
  return;
}

