#include <stdio.h>

int main() {
  int x; 
  int y; 
  int z;
  printf("Enter a phone number [(999)999-999]: ");
  scanf("(%d)%d-%d", &x,&y,&z);
  printf("You entered: %d-%d-%d", x,y,z);
  
}