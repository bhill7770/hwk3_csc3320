#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char passX; // this is to store the password characters by the users
int scoreX = 0; // to store the score for the password
int lengthX =0; // for the length of the password
printf("Enter a password: ");
while(passX != '\n') // to terminates if user has hit enter
{
passX = getchar(); // to read the character entered by user
lengthX++; // increment length by 1
}
lengthX = lengthX - 1;
if (lengthX < 10){ // if length is less than 10 characters
scoreX = (10 - lengthX) * (-5); // to deduce the score entered if the condition is met
printf("Score = %d\n", scoreX);
}
if (scoreX < -30){ // if deducted score is more than 30 characters
printf("The password is unsafe! Please reset."); // prompt the user to reset password
}
printf("\n\n");
return 0;
}
