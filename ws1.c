#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int max = (a>b && a>c && a>d)?a:(b>a && b>c && b>d)?b:(c>a && c>b && c>d)?c:d;
	int max2 = (max == a && b>c && b>d)?b:(max == b && c>a && a>d)?c:(max == c && d>a && d>b)?d:a;
	printf("%d",max2);
}
