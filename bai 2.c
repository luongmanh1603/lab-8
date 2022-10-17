//nhap du lieu 5 phan tu cua mang thong qua con tro
#include<stdio.h>

int main() {
	int a[5], i,*ptr=a[0];
	for (i=0; i< 5; i++) {
		printf("Nhap gia tri a[%d]", i);
		scanf ("%d", ( a+ i));
	}
	for (i=0; i < 5; i++) {
		printf("\na[%d]= ",i);
		printf("%d", *(a+i));
	}
	
	return 0;
}
