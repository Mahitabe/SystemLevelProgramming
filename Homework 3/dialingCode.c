//Mahi Berhanu
//Match user input with a country area code 
#include <stdio.h>

int main() { //decare struct to store country and dialing code 
  struct dialing_code{
  char *country; 
  int code;
};
//declare country codes 
const struct dialing_code country_codes[] = {
  {"Argentina",  54}, {"Brazil", 55}, {"China", 86}, 
  {"Ethiopia", 251}, {"United States", 1},{"France", 33},
  {"India",  91}, {"Egypt", 20}, {"Japan",  81}, {"Iran", 98},
  {"Mexico", 52}, {"Italy", 39}, {"Sudan",  249}, {"Turkey", 90},
  {"South Africa", 27}, {"Poland", 48}, {"Pakistan", 92},
  {"Thailand", 66}, {"Spain", 34}, {"Nigeria", 234}};
  //initaliazie variables 
  int code;
  int found = 0; 
  //Ask for user input 
  printf("Please Enter an International Dialing Code: \n");
  scanf("%d", &code);
  // loop as i < the length of array and check if there is any match b/n user and country codes we have 
  for(int i=0; i<21; i++){
    if(country_codes[i].code == code){
      printf("The Country that matches the area code you entered is: %s\n", country_codes[i].country);// if there is a match print out the country 
      found =1;// set found = 1
    }
  } if(!found){ //if no match is found print statement
    printf("No Match!");
  }
  return 0;
}