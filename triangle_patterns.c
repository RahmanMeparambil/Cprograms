// all the traingle patterns are solved here

#include<stdio.h>

// defntion section
#define triangle_height 5

// declaration section
void patterns_with_digits_1();
void patterns_with_digits_2();
void patterns_with_digits_3();
//void patterns_with_digits_4();
void patterns_with_characters_1();
void patterns_with_characters_2();
void patterns_with_characters_3();

void main(){
	int opt;
	printf("1.pattern 1\n2.pattern 2\n3.pattern 3\n4.pattern 4\n5.pattern 5\n6.pattern 6\nEnter your choice : ");
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
		case 4:
			patterns_with_characters_1();
			break;
		case 5:
			patterns_with_characters_2();
			break;
		case 6:
			patterns_with_characters_3();
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

void patterns_with_characters_1(){
	for(int i=0;i<triangle_height;i++){
		for(int j=0;j<i;j++){
			printf("*");
		}
		for(int k=triangle_height-i;k>1;k--){
			printf("-");
		}
		for(int l=triangle_height-i;l>1;l--){
			printf("-");
		}
		for(int j=0;j<i;j++){
			printf("*");
		}

		printf("\n");
	}
}

void patterns_with_characters_2(){
	for(int i=0;i<triangle_height;i++){
		for(int j=triangle_height;j>i;j--){
			printf(" ");
		}
		for(int k=0;k<i;k++){
			printf("%c",65+k);
		}
		for(int l=i;l>=0;l--){
			printf("%c",65+l);
		}
		printf("\n");
	}
}

void patterns_with_characters_3(){
	for(int i=0;i<triangle_height;i++){
		for(int j=0;j<triangle_height-i;j++){
			printf(" ");
		}
		printf("*");
		for(int k=0;k<i;k++){
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	for(int k=1;k<triangle_height;k++){
		printf("* ");
	}
}

