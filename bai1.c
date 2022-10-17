#include<stdio.h>
// dung con tro de trao doi vi tri cua 2 bien nguyen
void swap(int *dca, int *dcb) {
		int temp = *dca;
	   *dca= *dcb;
	   *dcb = temp;
}
int main() {
	int a, b;
	int *dca ,*dcb;

	printf("Nhap gia tri a: ");
	scanf("%d", &a);
	printf("Nhap gia tri b: ");
	scanf("%d", &b);
	swap(&a, &b);
	printf("\n----------Sau khi trao doi a va b--------- ");
	printf("\nGia tri va dia chi sau bien doi cua a : %d %d ", a, &a);
	printf("\nGia tri va dia chi sau bien doi cua b : %d %d", b, &b);
	return 0;
}

