#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  int length;
  //initalize char array and size
  char word[20];
  char smallest_word[20]; 
  char largest_word[20]; 
  while (strlen(word) != 4) { //loop whenever the length of word is not equal to 4
    printf("Enter a word: \n");
    scanf("%s", word);
    if(strcmp(largest_word, word)<0)//compare largest_word to the current word
    strcpy(largest_word,word);//if larger, copy to word 
     if(strcmp(smallest_word, word)>0)//compare smallest word to current word
    strcpy(smallest_word,word);//if smaller copy
  }
  //print values
  printf("The Smallest word is: %s \n", smallest_word);
  printf("The Largest word is: %s \n", largest_word);
  return 0;
 

  



  

}