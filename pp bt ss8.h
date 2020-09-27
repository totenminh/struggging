#include <stdio.h>
#include <cmath>
void sntkt(int n){
	int a=n+1;
	bool f=false;	
	while(!f){		
		int count=0;
		if(a>=2){
			for(int i=2;i<=a;i++){
				if(a%i==0){
					count++;
				}
			}
			if(count==1){
				f=true;
				printf("So nguyen to ke tiep la: %d",a);
			}		
		}
		a++;
	}
	return ;
}
void tcs(int n){
	int b=0;
	while(n!=0){
		b+=n%10;
		n/=10;
	}
	printf("tong cac chu so cua %d la: %d",n,b);
	return ;
}
void chuvi(int a, int b, int c){
	if(a+b>c&&a+c>b&&c+b>a){
		printf("Chu vi tam giac la: %d",a+b+c);
	}else{
		printf("Day khong phai so do 3 canh cua tam giac.");
	}
	return;
}
void dientich(float a,float b, float c){
	if(a+b>c&&a+c>b&&c+b>a){
		float p,s;
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("dien tich tam giac la: %0.2f",s);
	}
	else{
		printf("Day khong phai so do 3 canh cua tam giac.");
	}
	return ;
}
void ucln(int a, int b){
	if(a>=b){
		int u;
		for(int i=1;i<=b;i++){				
			if(b%i==0){
				if(a%i==0){
					u=i;
				}
			}
		}
		printf("Uoc chung lon nhat la: %d",u);
		return;
	}else{
		int u;
		for(int i=1;i<=a;i++){				
			if(a%i==0){
				if(b%i==0){
					u=i;
				}
			}
		}
		printf("Uoc chung lon nhat la: %d",u);
		return;
	}
}
void bcnn(int a,int b){
	if(a>=b){
		int u,z;
		for(int i=1;i<=b;i++){				
			if(b%i==0){
				if(a%i==0){
					u=i;
				}
			}
		}
		z=a*b/u;
		printf("Boi chung nho nhat la: %d",z);
		return;
	}else{
		int u,z;
		for(int i=1;i<=a;i++){				
			if(a%i==0){
				if(b%i==0){
					u=i;
				}
			}
		}
		z=a*b/u;
		printf("Boi chung nho nhat la: %d",z);
		return;
	}
}
