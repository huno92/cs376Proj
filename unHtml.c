#include <stdio.h>
#include "unHtml.h"

//unHtml, will remove all html tags indicated between "<>"
//removes the angled brackets as well as the html between them
void unHtml(char** s){
  int i;
  for (i = 0; s[i] != NULL; i++){
    int j;
    for (j = 0; s[i][j] != '\0'; j++){
      if(s[i][j] == '<'){
	while(s[i][j] != '>' && s[i][j] != '\0'){
	  s[i][j] = ' ';
	  j++;
		}
	if(s[i][j] == '>')
	  s[i][j] = ' ';
      }
      
    }
    
  }

}
