//Mahi Berhanu
//Swap two variables without any additional variable
#include <stdio.h>

//function that will swap the two characters 
void swap(char *x, char *y)
{
*x=*x+*y;
*y=*x-*y;
*x=*x-*y;
}

int main()
{
//declare the characters 
char s1[200];
char s2[200];
int i=0;
  
//ask for user input and scans 
printf("Enter two sentences:\n");
scanf("%[^\n]%*c", s1);
scanf("%[^\n]%*c", s2);
  

// check the characters while s1 isn't empty and swaps the digits from s1 to s2 and the characters as well 

while(s1[i]!='\0')
{
if(isalpha(s2[i]))
{
swap(&s1[i], &s2[i]);
}
else if(isalpha(s2[i]))
{
swap(&s1[i], &s1[i]);
}else if(isdigit(s2[i]))
{
swap(&s1[i], &s2[i]);
}
else if(isdigit(s2[i]))
{
swap(&s1[i], &s1[i]);
}
i++;
}

//print out statement. 
printf("The sentences after being swapped: \n");
printf("Sentence 1: ");
puts(s1);
printf("Sentence 2: ");
puts(s2);
return 0;
}

