// C program to illustrate the use of strcpy() 
#include <stdio.h> 
#include <string.h> 
int main() 
{ 
	
	char source[] = "We Love Sandwiches"; 
	char source2[] = " We love Sandwiches and Pizzaaaaaaaaaaaaaaa and blah blahhhh";
	char dest[20]; 

	// Copying the source string to dest 
	strcpy(dest, source); 

	// printing result 
	printf("Source: %s\n", source); 
	printf("Destination: %s\n", dest); 
	strcpy(dest, source2); 
	printf("Destination: %s\n", dest); 

	return 0; 
}
