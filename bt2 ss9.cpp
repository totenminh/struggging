#include <stdio.h>
#include <string.h>
int main (){
	int n;
	printf("Nhap n: " );
	scanf("%d",&n);
	char ars[n][30];
	for(int i=0;i<n;i++){
		char s[30];
		printf("Nhap chuoi thu %d: ",i);
		scanf("%s",&s);
		strcpy(ars[i],s);
		int j=i-1;
		char tmp[30];
		strcpy(tmp,ars[i]);
		while(j>=0&&strcmp(tmp,ars[j])<0){
			strcpy(ars[j+1],ars[j]);
			j--;
		}
		strcpy(ars[j+1],tmp);
	}
	printf("\nChuoi sau khi sap xep theo alphabe:\n");
	for(int i=0;i<n;i++){
		printf("%s\n",ars[i]);
	}
	}
