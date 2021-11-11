#include <stdio.h>

int main(){
  float number, price, total;
  int month, date, year, quantity;
  printf("Enter item number: ");
  scanf("%f",&number);
  printf("Enter unit price: ");
  scanf("%f",&price);
  printf("Enter quantity: ");
  scanf("%d",&quantity);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d",&month,&date,&year); 
  total=price*quantity;
  printf("Item \t");
  printf("QTY \t");
  printf("Purchase Date \t");
  printf("Unit Price \t");
  printf("Total Amount \t \n");
  printf("%f \t",number);
  printf("%d \t",quantity);
  printf("%d/%d/%d \t",month,date,year);
  printf("$ %f \t",price);
  printf("%f \t",total);
  return 0;
}