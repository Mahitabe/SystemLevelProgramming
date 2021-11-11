#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(int argch, char** argva) {
char words[1000]; 
char filename[] = "test.txt"; 

int charcount[255] = {0};// convert the char to int and to store number characters appeared in the text.initialize the 0.
  
int i = 0;
int max;
int index;

FILE *file;//file

file = fopen(filename, "r");//read the file
char ch;
while (ch != EOF) { //repeat until the end of the file

ch = (char) fgetc(file);
words[i] = ch;
//if char isn't upper case just count if not convert to lower case and add.
if (ch >= 65 && ch <= 92)
charcount[ch + 32]++;
else
if (ch >= 97 && ch <= 122) {
charcount[ch]++;
}

i++;

}


max = charcount[0];
index = 0;

//loop to find the character count maximum
for (i = 0; i < strlen(words) - 1; i++) {

if (charcount[words[i]] > max) {
max = charcount[words[i]];
index = i;

}

}
//prints the value
printf("The maximum character is : %c. It appears %d times.\n", words[index], charcount[words[index]]);
return (EXIT_SUCCESS);
}