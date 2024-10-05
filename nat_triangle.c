#include<stdio.h>

int main(){
	float a,b,c ;
	
	printf("entrer la longueur des diffenrents cotes du triangle\n");
	printf("AB\n");
	scanf("%f",&a);
	printf("AC\n");
	scanf("%f",&b);
	printf("BC\n");
	scanf("%f",&c);
	if(a==b && a==c){
		printf("votre triangle est equilaterale\n");
	} else if(a==b || a==c || c==b){
		printf("votre triangle est isocele\n");
	} else {
		printf("c'est un triangle quelconque\n");
	}
	return 0;
}
