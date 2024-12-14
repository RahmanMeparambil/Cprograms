// functions to operate array in c
#include<stdio.h>
#include<stdlib.h>

// definition section
#define limit 100

// declaration section
int size;
int* array;
int* create_int_array();
void display();
void delete(int position);
void edit(int position);
void insert(int position,int value);

// main function
void main(){
	printf("Enter the size of array you want to create : \n");
	scanf("%d",&size);
	array= create_int_array(size);
	int opt,idx;
	while (1){
		printf("Choose the option to operate on the array : \n");
		printf("1.edit\n2.delete\n3.display\n4.Insert\n");
		printf(": ");
		scanf("%d",&opt);
		printf("\n");
		switch(opt){
			case 1:
				// edit operation
				printf("Enter the index : ");
				scanf("%d",&idx);
				edit(idx);
				display();
				break;
			case 2:
				printf("Enter the index : ");
				scanf("%d",&idx);
				delete(idx);
				display();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Enter the index : ");
				scanf("%d",&idx);
				printf("\n");
				printf("Enter the value to be added : ");
				int value;
				scanf("%d",&value);
				insert(idx,value);
				display();
				break;
			default:
				printf("`option not given");
		}
	}		
}

// sub functions
int* create_int_array(int size){
	/* function to create an array */
	int* array = (int*)malloc(limit * sizeof(int));	
	printf("Enter the element at");
	for(int i=0;i<size;i++){
		printf("\narray[%d] : ",i);
		scanf("%d",&array[i]);
		printf("\n");
		//display(array,size);
	}
	return array;
}

void insert(int position,int value){
	size++;
	if (position >= size || size >= limit){
		printf("list full");
		return;
	}
	int temp;
	for(int i=size;i>position;i--){
		array[i] = array[i-1];
	}
	array[position] = value;


}

void display(){
	for(int i=0;i<size;i++){
		printf(" %d\t ",array[i]);
	}
	printf("\n");
}

void delete(int position){
	if (position > size){
		printf("index out of range");
	}
	else{
		printf("delete operation");
	}
	for(int i=position;i<size;i++){
		array[i]=array[i+1];
	}
	size--;
}

void edit(int position){
	int new_value;
	printf("Enter new value to insert : ");
	scanf("%d",&new_value);
	array[position]=new_value;
}
