#include<stdio.h>
int main() {
	int n,sum = 0;
	printf("nhap so phan tu cua mang:");
	scanf("%d", &n);
	int numbers[n];
	for (int i=0;i<n;i++) {
		printf("numbers[%d] = ",i);
	    scanf("%d",&numbers[i]);
	}
	int findNumber; 
	printf("nhap findNumber: ");
	scanf("%d",&findNumber);
	printf("chi so cua cac phan tu bang findNumber la:\n ");
	for (int i=0;i<n;i++) {
	    if (numbers[i] == findNumber) {
		    printf("numbers[%d]=%d\n ",i,numbers[i]);
		    sum += numbers[i];
	    }
	}
	printf("\n");
	printf("tong cua cac phan tu bang findNumber la: %d", sum);
}
