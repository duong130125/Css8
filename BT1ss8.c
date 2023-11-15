#include <stdio.h>
int main() {
  int n,a,i;
  printf("so luong phan tu:");
  scanf("%d", &n);
  int numbers[n];
  for(i=0;i<n;i++){
  	printf("nhap phan tu:\n");
  	scanf("%d",&numbers[i]);
  }
  int max=numbers[0];
  for(i=1;i<n;i++){
  max=(max>numbers[i])?max:numbers[i];
  }
  int min=numbers[0];
  for(i=1;i<n;i++){
  min=(min<numbers[i])?min:numbers[i];
  }
  printf("so max va min la:%d va %d",max,min);
}
