// all the traingle patterns are solved here

#include<stdio.h>

// declaration section
void patterns_with_digits();

void main(){
	int opt;
	//switch(opt)
	patterns_with_digits();
}

// sub porgrams
void patterns_with_digits(){
	int triangle_height = 5;
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

