#include"myBank.h"
#include"stdbool.h"
#include<stdio.h>

double arr[50][2];

int O(double sum) {
    bool flag = false;
    
    for(int i =0; i <50 ; i++){
        if(arr[i][0] == 0){
            arr[i][0] = 1;
            arr[i][1] = sum;
            flag = true;
            return 901 + i;
        }
    }
        
        if(flag == false)
        printf("there is an 50 invoices ! \n");
        
        return 0;
    }
    
    double B(int account_number){
        
        if(account_number >= 901 && account_number <= 950){
        
        if(arr[account_number-901][0] == 1){
            return arr[account_number-901][1];
        }
        printf("the invoice is close ! \n");
        }
        else printf("Incorrect account number ! \n");
        return 0;
    }
    
    double D(double amount_deposit,int account_number){
        
        if(account_number >= 901 && account_number <= 950){
            if(amount_deposit > 0){
        
        if(arr[account_number - 901][0] == 1){
            arr[account_number - 901][1] += amount_deposit;
            return arr[account_number - 901][1];
        }
        printf("the invoice is close ! \n");
        }
        else printf("You are trying to deposit a negative amount ! \n");
    }
    else printf("Incorrect account number ! \n");
    return 0;
    }
    
    double W(int account_number,double amount_withrawal){
        
        if(account_number >= 901 && account_number <= 950){
           if(amount_withrawal > 0){
        bool flag = false;
       if(arr[account_number - 901][0] == 1){
           if(arr[account_number - 901][1] >= amount_withrawal){
               arr[account_number - 901][1] -= amount_withrawal;
                 return arr[account_number - 901][1];
           }
           printf("There is not enough money in the account ! \n");
           flag = true;
    }
    if(flag == false){
    printf("the invoice is close ! \n");
     }
       }
       else printf("You are trying to withdraw a negative amount ! \n");
    }
    else printf("Incorrect account number ! \n");
    return 0;
    }
    
       void C(int account_number){
           
           if(account_number >= 901 && account_number <= 950){
           if(arr[account_number - 901][0] == 1){
           arr[account_number - 901][0] = 0;
           arr[account_number - 901][1] = 0;
           }
           else printf("The account is already closed \n");
       }
       else printf("Incorrect account number ! \n");
       }
      
      void I(double interest_rate) {
          
          if(interest_rate >= 0){
              for(int i = 0 ; i < 50 ; i++){
                  if(arr[i][0] == 1){
                  arr[i][1] = (arr[i][1]) + ((arr[i][1])*(interest_rate/100)); 
                  }
              }
          }
          else printf("It is not possible that the interest number is negative ! \n");
      } 
      
      void P(){
          
          for(int i = 0 ; i < 50 ; i++){
              if(arr[i][0] == 1){
                  printf("Bank account : %d \n",i+901);
                  printf("Bank account balance: %.2lf \n",arr[i][1]); 
              }
          }
      }
      
      void E(){
          
          for(int i = 0; i < 50 ; i++){
              arr[i][0] = 0;
              arr[i][1] = 0;
          }
      }
