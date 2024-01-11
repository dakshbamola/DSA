// This program is used to check if a given number is armstrong number or not in C
// An armstrong number is a number that is equal to the sum of its digits, each raised to a power of the number of digits.

#include<stdio.h>
#include<math.h>

int main(){                             //main function
    int num,digit=0,temp,sum=0;         //define variables
    printf("enter the number: ");       
    scanf("%d",&num);                   //taking inputs
    temp=num;
    while(temp>0){
        digit++;                        //counting number of digits in the input number
        temp=temp/10;
    }
    printf("%d\n",digit);
    temp=num;
    while(temp>0){
        sum=sum+ (int)(pow(temp%10, digit)+0.5);    // checking the armstrong property of the number
        temp/=10;                                   // we extract a digit from number using (temp%10) then 
    }                                               // raise that digit to number of digits in the number using pow function
                                                    // (pow()+0.5) is used to increase precision
    printf("%d\n",sum);
    if(num==sum){                                   //checking if the new number is equal to the input number
        printf("Armstrong");  
    }
    else{
        printf("Not Armstrong");
    }
}

//         Input        ||       Output
//          153         ||      Armstrong
//          371         ||      Armstrong
//          1634        ||      Armstrong
//          123         ||      Not Armstrong
