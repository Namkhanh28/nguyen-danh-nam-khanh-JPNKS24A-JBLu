#include<stdio.h>
int main(){
    int n;
    printf("Nhap so phan tu co trong mang\n");
    scanf("%d",&n);
    
int array[n];
int i;
for( i = 0 ; i <= n ;i++){
    printf("Nhap phan tu thu %d" ,i+1);
    scanf("%d",&array[i]);
}
printf("Cac phan tu trong mang la: ");
for(i = 0 ; i <n ;i++){
printf("%d",array[i]);
}
printf("\n");
    return 0;
}
