#include <stdio.h>

#include <string.h>

int main() {

	char str_a[20]; //A 20-element character array
	char *pointer; //A pointer, meant for a character array
	char *pointer2; //Another pointer
	
	strcpy(str_a, "Hello, world\n");
	pointer = str_a; //Set the first pointer to the start of the array
	printf("%s", pointer);

	pointer2 = pointer + 2; //Set the second one 2 bytes further in
	printf("%s", pointer2);
	strcpy(pointer2, "y you guys!\n"); //Copy into that spot
	printf("%s", pointer);
	
	return 0;
}
