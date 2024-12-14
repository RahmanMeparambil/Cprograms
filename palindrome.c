// program to identify whether a string is a palindrome or not

#include<stdio.h>
#include<string.h>

// defnition section


// declaration section
int palindrome(char word[]);

// main function
void main(){
	char word[100];
	printf("Enter a palindrome : ");
	fgets(word,sizeof(word),stdin);
	printf("%d \n",palindrome(word));
}

// sub functions
int palindrome(char word[]){
	int length = strlen(word)-2;
	if (length < 0){
		return 1;
	}
	int idx=0;
	while (idx<=length/2){
		printf("%c %c \n",word[idx],word[length-idx]);
		if (word[idx] != word[length-idx]){
			return 0;
		}
		idx++;
	}
	return 1;
}

