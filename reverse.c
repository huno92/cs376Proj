#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

void reverse(char** a) {
  int j=0,k=0;
  while (a[k] != NULL) {
    j++;
    k++;
  }
  for (j=0,k--;j<k;j++,k--) {
    char*temp = a[k];
    a[k]=a[j];
    a[j]=temp;
  } 
}
