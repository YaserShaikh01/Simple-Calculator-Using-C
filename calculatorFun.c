#include<stdio.h>
#include<stdlib.h>
void add();
void sub();
void mul();
void division();
 
 void add(){
     int a,b,sum1=0;
     printf("Enter two values:\n");
     scanf("%d%d",&a,&b);
     sum1=a+b;
     printf("The Addition= %d\n",sum1);
 }

 void sub(){
     int a,b,sub1=0;
     printf("Enter two values:\n");
     scanf("%d%d",&a,&b);
     sub1=a-b;
     printf("The Subtraction= %d\n",sub1);
 }

 void mul(){
     int a,b,mul1=0;
     printf("Enter two values:\n");
     scanf("%d%d",&a,&b);
     mul1=a*b;
     printf("The Multiplication is:%d",mul1);
 }

 void division(){
     int a,b,div1=0;
     printf("Enter two values:\n");
     scanf("%d%d",&a,&b);
     if(b!=0){
         div1=a/b;
         printf("The Division= %d\n",div1);
     }
     else{
         printf("A number cannot divided by zero\n");
     }

 }

void main(){
    printf("--------------------------------------CALCULATOR------------------------------------------------\n");
    while(1){
    printf("Enter: \n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.EXIT\n\n");
    int ch;
    
    printf("\nEnter Your Choice:\n");
    scanf("%d",&ch);
   
    switch(ch){
        case 1:
        add();
        break;
        
        case 2:
        sub();
        break;
        
        case 3:
        mul();
        break;
        
        case 4:
        division();
        break;

        case 5:
        exit(0);
        break;

        default:
        printf("Invalid choice!!\n");
        
    }
    }
}