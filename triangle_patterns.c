// all the traingle patterns are solved here

#include<stdio.h>

// defntion section
#define triangle_height 5

// declaration section
void patterns_with_digits_1();
void patterns_with_digits_2();
void patterns_with_digits_3();
//void patterns_with_digits_4();

void main(){
	int opt;
	printf("1.pattern A\n2.pattern B\n3.pattern C");
	scanf("%d",&opt);
	switch(opt){
		case 1:
			patterns_with_digits_1();
			break;
		case 2:
			patterns_with_digits_2();
			break;
		case 3:
			patterns_with_digits_3();
			break;
		default:
			printf("option not given");
	}
	// patterns_with_digits_4();
}

// sub porgrams
void patterns_with_digits_1(){
	//int triangle_height = 5;
	for(int i=0;i<triangle_height;i++){
		for(int j=triangle_height;j>i;j--){
			printf(" ");
		}
		for(int k=0;k<i;k++){
			printf("%d ",k+1);
		}
		printf("1");
		printf("\n");
	}
}

void patterns_with_digits_2(){
	for(int i=0;i<triangle_height;i++){
		for(int j=1;j-1<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}

void patterns_with_digits_3(){
	int count = 1;
	for(int i=0;i<triangle_height;i++){
		for(int j=1;j-1<=i;j++){
			printf("%d",count);
			count++;
		}
		printf("\n");
	}
}



