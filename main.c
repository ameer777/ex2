#include<stdio.h>
#include"myBank.h"

int main()
{
   
   int in;
   double z;
   char y ;
   
   while(1){
       
       printf("please enter an action : \n" );
       scanf(" %c",&y);
       
       if(y == 'O' || y == 'B' || y == 'D' || y == 'W' || y == 'C'  || y == 'I' || y == 'P' || y == 'E' ) { 
       
       if(y == 'O'){
           printf("please enter a sum : \n");
	       if(scanf("%lf" , &z) == 1){ 
	       printf("%d \n" , O(z));
	       }
	       else
	       printf("Error! \n ");
       }
       
       if(y == 'B'){
           printf("please enter Bank account number : \n");
           if(scanf("%d" , &in) == 1){
           printf("%.2lf \n",B(in));
       }
       else
	       printf("Error! \n ");
       }
       
       if(y == 'D'){
          printf("please enter an account number : \n");
	      scanf("%d",&in);
	      printf("please enter sum to deeping : \n");
	      scanf("%lf",&z);
	      printf("%.2lf \n" , D(z , in));
       }
       
       if(y == 'W'){
          printf("please enter an account number : \n");
	      scanf("%d" , &in);
	      printf("please enter sum to attracing : \n");
	      scanf("%lf",&z);
	      printf("%.2lf \n" , W(in , z));
       }
       
       if(y == 'C'){
          printf("please enter a number of account you wish to close : \n");
	      scanf("%d" , &in);
	      C(in);
       }
       
       if(y == 'I'){
          printf("please enter an interest rate : \n");
	      scanf("%lf" , &z);
	      I(z);
       }
       
       if(y == 'P'){
           P();
       }
       
       if(y == 'E'){
           E();
           break;
       }
       
   }
   else printf("error ! \n");
}

return 0;
}
