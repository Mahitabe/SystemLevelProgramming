// Mahi Berhanu 
//Checks if a word is a palindrome
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void isPali(char* str){
  //initalizing variables
  char * left = str; // left is equal to user input 
   int length = strlen(str);
  char *right = left + length - 1;
  while (*left != '\0'){ //if left isn't null increment 
    left++;
  }
  int i;
  // ignore special characters and space 
 while (('a' <= str[i] && 'z' >= str[i]) &&
     !('A' <= str[i] && 'Z' >= str[i]) &&
     !('0' <= str[i] && '9' >= str[i])){
  for(left = str; right >= left;){ // loop 
    if(*right == *left){
      right --;
      left ++;
    }
    else 
    break; 
  }
  break;
}
 //print out statement
  if(left >right){
      printf("The word is Palindrome");
  }else 
  printf("The word is not Palindrome");
}
//driver code 
int main() {
 char str[100];//assigns size for word 
 printf("Enter a word: ");
 gets(str);// gets the input of the user 
 //print out statement 
 isPali(str);
  return 0;
}