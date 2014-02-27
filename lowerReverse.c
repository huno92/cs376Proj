#include "lowerReverse.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
void lowerToUpper(char** a) {
  int i;
  int j;
  for (i = 0; a[i] != NULL; i++){
    for (j = 0; a[i][j] != '\0'; j++){
      if(a[i][j] >= 'a' && a[i][j] <= 'z'){ //if it is a lowercase char
	a[i][j] = ('A' + a[i][j] - 'a');
      }
    }
  }
}

void reverseChar(char**a){
  int i;
  int start;
  for (i = 0; a[i] != NULL; i++){ //lines
    int end = strlen(a[i])-1 ; //last index
    for (start = 0; start < end; start++) { //characters on a line
      char temp = a[i][end];
      a[i][end] = a[i][start];
      a[i][start] = temp;
      end--;
    }
  }

}
