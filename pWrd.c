#include <string.h>
#include <stdio.h>
 
int isPalindrome(char str[]) {
   int len = strlen(str); //initializing variables 
   int left = 0;
   int right = len - 1;
   char ch;
   while(left < right) { // to scan entered word from left to right 
       ch = str[left];
       if(!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
           left++;
           continue; //scanning entered word for characters a to z, regardless if capitalized or not from the left-end
       }
       ch = str[right];
       if(!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) {
           right--;
           continue; //scanning entered word for characters a to z, regardless if capitalized or not from the right-end
       }
       if(str[left] != str[right]) {
           return 0;
       }
       left++; //increment 
       right--; //decrement
   }
   return 1;
}
 
int main() { //main argument
   char str[1000]; //string can be up to 1000 char
   printf("Enter a string: "); //prompt user for input
fgets(str, sizeof(str), stdin); 
 if(isPalindrome(str)) { // if conditions are met, then the entered word is a palindrome or not
       printf("%s is a palindrome\n", str);
   } else {
       printf("%s is not a palindrome\n", str);
   }
   return 0;
}
