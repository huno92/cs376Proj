#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "sortArray.h"

void sortArray(char** a) {
  int i;
  int change = 0;
  int size = 0;

  do{
    change = 1;
    if(a[i] == NULL){
      change = 0;
    }
    else{
      size++;
    }
    i++;
  }while(change == 1);

  do{
    change = 0;
    for(i = 0; i < size - 1; i++){
      if(strcmp(a[i],a[i+1]) > 0){
	char* temp = a[i+1];
	a[i+1] = a[i];
	a[i] = temp;
	change = 1;
      }
    }
  }while(change != 0);
    return;
}
	
