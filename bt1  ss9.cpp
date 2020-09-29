#include <stdio.h>
#include <string.h>

int main(){
	char s[30];
	printf("Nhap chuoi s: ");
	scanf("%s",s);
	int count =0;
	for(int i=0;i<strlen(s);i++){
		if((s[i]==97)||(s[i]==105)||(s[i]==117)||(s[i]==101)||(s[i]==111)||(s[i]==65)||(s[i]==73)||(s[i]==85)||(s[i]==69)||(s[i]==79)){
			count++;
		}
	}
	printf("So nguyen am la: %d",count);
	printf("\nSo phu am la: %d",strlen(s)-count);
}
