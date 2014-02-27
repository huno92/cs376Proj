#include <stdio.h>
#include "encript.h"
void encript(char ** a)
{
  int i=0;
  int j=0;
  for(i; a[i]!=NULL;i++){
    for(j;a[i][j]!='\0';j++) {
	  if(a[i][j]>=33&&a[i][j]<=126){
	    if(a[i][j]==126){
		  a[i][j]=33;
		} else {
	      a[i][j]++;
	    }
	  }
	}
      }
  return;
}

