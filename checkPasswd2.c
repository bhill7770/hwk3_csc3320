#include <stdio.h>
int main(){ //main argument
int x=0,y=0,p=0; //initialize variables 
int ans=100,z=0; //for scoring passwords entered by user
int i;
char c[20];
 printf("Enter a password: "); //prompt user for a password
 
scanf("%s", c);  //scanning the entered word
// //printf("%s",pass); 
 
for(i=0;c[i]!='\0';i++){
if(c[i]>=65 && c[i]<=90) {. //set condition 1
 y=1;  
 }if(c[i]>=97 && c[i]<=122) { //set condition 2
x=1;
} if(c[i]>=48 && c[i]<=57) { //set condition 3
z=1;
}
if(i>1){
int a=c[i-1];int b=c[i];int d=c[i-2];
if((a+1)==b && (d+1)==a) {
p=1;
}
}
}
if(x==0) { //scoring for if condition 1 is met 
 ans-=20;}
if(y==0) {//scoring for if condition 2 is met
 ans-=20;
 }
if(z==0) {//scoring for if condition 3 is met
 ans-=20;
 }
if(p==1){
 ans-=20;
 }
 printf("Final score: %d \n",ans); //to print out final score
 if(ans<=30) printf("Unsafe");
 else printf("Safe");
 }
