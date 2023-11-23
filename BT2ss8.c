#include <stdio.h>
int main() {
  int row, col, sum=0;
  printf("Nhap so dong va so cot cua mang 2 chieu:"); 
  scanf("%d %d", &row, &col);
  int numbers[row][col];
  for (int i = 0; i < row; i++){
	for (int j = 0; j < col; j++){
    printf("numbers[%d][%d]=",i,j);
	    scanf("%d", &numbers[i][j]);
	}
  }
  printf("Gia tri cac phan tu chan mang 2 chieu:\n"); 
  for(int i = 0; i < row ; i++){
		for (int j=0; j < col; j++){
			if(numbers[i][j]%2==0){
			printf("%d\t", numbers[i][j]);
			sum += numbers[i][j];
			}
		}
    }
    printf("\n");
    printf("Tong cac phan tu chan cua mang la:%d", sum);
}
