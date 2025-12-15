#include<stdio.h>
#include<math.h>
int main(){
	float a1=1,b1=1,c1=5,d1=1;
	float a2=9,b2=2,c2=0,d2=1;
	float a3=0,b3=3,c3=3,d3=3;
	
	float A1 = (3*a1/5)+(1/b1);
	float B1 = (3*a1+5*b1)/(2+c1);
	float C1 = (2.0/7)*(pow(4,3+c1)-5*d1);
	float D1 = sqrt((2+8*b1)/a1);
	float E1 = cbrt(b1*b1-4*d1);
	printf("4.1 { A = %.2f, B = %.2f, C = %.2f, D = %.2f, E = %.2f }\n",A1,B1,C1,D1,E1);
	
	float A2 = (3*a2/5)+(1/b2);
	float B2 = (3*a2+5*b2)/(2+c2);
	float C2 = (2.0/7)*(pow(4,3+c2)-5*d2);
	float D2 = sqrt((2+8*b2)/a2);
	float E2 = cbrt(b2*b2-4*d2);
	printf("4.2 { A = %.2f, B = %.2f, C = %.2f, D = %.2f, E = %.2f }\n",A2,B2,C2,D2,E2);
	
	float A3 = (3*a3/5)+(1/b3);
	float B3 = (3*a3+5*b3)/(2+c3);
	float C3 = (2.0/7)*(pow(4,3+c3)-5*d3);
	float E3 = cbrt(b3*b3-4*d3);
	printf("4.3 { A = %.2f, B = %.2f, C = %.2f, D = undefined, E = %.2f }",A3,B3,C3,E3);
}
