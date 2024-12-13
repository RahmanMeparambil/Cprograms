/* Alphabets with star patterns */

// file inclusion
#include <stdio.h>

// definition section
#define height 5

// declaration section
void N();
void D();
void W();

// main function
void main(){
	int opt;
	while (1){
		printf("1.N pattern\n2.D pattern\n3.W pattern");
		printf("\nEnter your choice : ");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				N();
				break;
			case 2:
				D();
				break;
			case 3:
				W();
			        break;
			default:
				printf("option not available");
				break;
		}
	}
}


// sub functions
void N(){
	for(int i=0;i<height;i++){
		printf("*");
		for(int j=0;j<i;j++){
			printf(" ");
		}
		printf("*");
		for(int k=0;k<height-i;k++){
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
}

void D(){
	char c;
	for (int i=0;i<=height;i++){
		if (i==0 || i==height){
			c='*';
		}else{
			c=' ';
			printf("*");
		}
		for (int j=0;j<=height;j++){
			printf("%c",c);
			if (j==height){
				printf("*");
			}
		}
		printf("\n");
	}
}
			
void W(){
	for(int i=0;i<=height;i++){
		for(int j=0;j<i;j++){
			printf(" ");
		}
		printf("*");
		for(int k=0;k<height-i;k++){
			printf(" ");
		}
		for(int l=0;l<height-i;l++){
			printf(" ");
		}
		printf("*");
		for(int m=0;m<i;m++){
			printf(" ");
		}
		for(int n=0;n<i;n++){
			printf(" ");
		}
		printf("*");
		for(int o=0;o<height-i;o++){
			printf(" ");
		}
		for(int p=0;p<height-i;p++){
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
}

