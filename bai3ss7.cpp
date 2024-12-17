#include<stdio.h>
int main(){
	int array[5] = {1,2,3,4,5};
	printf("Các phan tu là so chan trong mang:\n"); 
	for (int i = 0; i < 5; i++) {
		if(array[i] % 2 == 0){
			printf("%d\t",array[i]);
		}
	}
	return 0;
}
