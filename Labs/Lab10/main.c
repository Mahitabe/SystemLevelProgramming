#include <stdio.h>
//declaration of function split_time
void split_time(long, int*, int*,int*);
int main(){
  int n,hr,min,sec;
  printf("Enter Seconds: ");
  scanf("%d",&n);
// statement to call split_time
  split_time(n,&hr,&min,&sec);
  printf("Converted format: %d hour %d mins %d secs", hr, min, sec);
  return 0;

}
//function that will calculate hr, min, and sec
void split_time(long total_sec, int *hr, int *min, int  *sec){
        *hr = (int)(total_sec / (60 * 60));
        *min = (int)(total_sec / 60) % 60;
        *sec = (int)(total_sec % 60);
}