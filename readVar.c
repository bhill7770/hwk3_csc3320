#include<stdio.h> 
#include<stdlib.h>
 
int main(){ //main function
 
char *string1 = malloc(sizeof(char) * 10000000); //to declare both strings
char *string2 = malloc(sizeof(char) * 10000000);
 
printf("Please enter the string one: "); //prompt user for first string
scanf("%[^\n]%*c",string1);
 
printf("Please enter the string two: "); //prompt user for second string
scanf("%[^\n]%*c",string2);

printf("\nThe string1 before swapping is : %s ",string1); //to print strings as output before the swap
printf("\nThe string2 before swapping is : %s ",string2);
 
printf("\n"); 
 
string1=string1+(string1-string2); //subtracting string1 & string2. Adding string1
 
string2=string1-(string1-string2)/2; //subtracting string1 & string2. Dividing by 2. Subtracting from string1. 
 
string1=string1-(string1-string2)*2;  //substracting string1 & string2. Multiplying by 2. Subtracting from string1  
 
printf("\nThe string1 after swapping is : %s ",string1); //to print strings after swapping
printf("\nThe string2 after swapping is : %s ",string2);
 
return 0; //return value
 
}
