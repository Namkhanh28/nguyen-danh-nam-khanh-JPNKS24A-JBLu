#include<stdio.h>
#include<string.h>
int main(int argc , const char*argv[]){
	char sentences[50];
	printf("Moi nhap chuoi\n");
	fgets(sentences,sizeof(sentences),stdin);
	int lenght = (int)strlen(sentences);
	printf(" Do dai cua chuoi la %d",strlen(sentences));
	
}
