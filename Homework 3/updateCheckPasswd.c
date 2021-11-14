//Mahi Berhanu 
// Check if password fulfils criterea and print out score
#include <stdio.h>
#include <string.h>
int main() {
  char password[100]; //declare password 
  printf("Please Enter a Password: \n");//ask for user input 
  scanf("%s", password);
  int length = strlen(password);// declare all variables needed 
  int score; 
  int lower_case = 0; int upper_case = 0;int number = 0; int consecutive = 0;
  // check if password has upper case letters if it does increment
  for (int i = 0; i < length; i++){ 
    if(password[i] >= 'A' && password[i] <= 'Z'){
      upper_case ++;
    }
  }
  // if no upper case take points off
   if(upper_case <=0){
     score -= 20;
   }
   // check if password has lower case letters if it does increment
   for (int i = 0; i < length; i++){
    if(password[i] >= 'a' && password[i] <= 'z'){
      lower_case ++;
    }
   }
   // if no lower case take points off
   if(lower_case <=0){
     score -= 20;
   }
   // check if password has consecutive  letters if it does increment
   for (int i = 0; i < length; i++){
     for(int j =i+1; j<length; j++){
       if(password[j] - password[i] == 1){
         consecutive++;
       }
     }
   }
   // if more than 2 letters consecutive take points off
     if(consecutive > 2){
     score -= 20;
    }
    // check if password has numbers if it does increment
    for (int i = 0; i < length; i++){
      if(password[i] >= '0' && password[i] <= '9'){
      number ++;
      }
    }
    // if no numbers take points off
    if(number <=0){
     score -= 20;
    }
    if(score == 0){
      printf("Score is: %d; the password is safe", score); 
    } else if(score <= 30 ){// print statement 
      printf("Score is: %d; the password is unsafe! Please reset. \n", score);
    } else 
      printf("Score is: %d; the password is safe", score);
  return 0;
}
