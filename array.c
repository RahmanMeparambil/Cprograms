// functions to operate array in c
#include<stdio.h>
#include<stdlib.h>

// definition section

// declaration section
int len(int array[]);
int* create_int_array(int size);
void display();

// main function
void main(){
	int size;
	printf("Enter the size of array you want to create : ");
	scanf("%d",&size);
	int* arr = create_int_array(size);	
}

// sub functions
int* create_int_array(int size){
	/* function to create an array */
	int* array = (int*)malloc(size * sizeof(int));	
	printf("Enter the element at");
	for(int i=0;i<size;i++){
		printf("\nindex %d : ",i);
		scanf("%d",&array[i]);
		printf("\n");
		display(array,size);
	}
}

void display(int array[],int size){
	for(int i=0;i<size;i++){
		printf(" %d\t ",array[i]);
	}
	printf("\n");
}
