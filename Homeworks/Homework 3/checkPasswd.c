//Mahi Berhanu
//check if password length and output score and whether it is safe or not
#include <stdio.h>
#include <string.h>
int main() {
  char password[10]; //declare password 
  printf("Please Enter a Password: \n");//ask for user input 
  scanf("%s", password);
  int length; // declare all variables needed 
  int score; 
  int extra_length;
  length = strlen(password);

  if(length != 10 ){ //if statement to check if the length is not equal to 10 
    extra_length = 10 - length; 
    score = 5 * extra_length;
   if(score == 0){
      printf("Score is: %d; the password is safe", score); 
    } else if(score >= 30 ){// print statement 
      printf("Score is: %d; the password is unsafe! Please reset. \n", score);
    } else 
      printf("Score is: %d; the password is safe", score);
  return 0;
}
}