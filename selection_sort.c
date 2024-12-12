// Algorithm for selection sort 

#include<stdio.h>

// declaration part
int* selection_sort(int arr[],int size);
int size,temp;

// initialization
int* selection_sort(int arr[],int size){
	if (size == 0){
		return arr;
	}
	for(int i=0;i<size-1;i++)
	{
		for(int j=i;j<size;j++){
			if (arr[j] < arr[i]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	return arr;
}

void main(){
	int arr[] = {1,3,5,2,6};
	size = 5;
	selection_sort(arr,size);
	for(int i =0;i<size;i++){
		printf("%d ",arr[i]);
	}
}

