#include <stdio.h>
#include <math.h>
int isPrime(int num);
int isPalindrome(int num);
int main()
{
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    //call factorial() functions
     
    // Call isPrime() functions
    if(isPrime(num))
    {
        printf("%d is Prime number.\n", num);
    }
    else
    {
        printf("%d is not Prime number.\n", num);
    }
    //call isPalindrome() functions
    if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";
         
    
    return 0;
}
/**
 * Check whether a number is prime or not. 
 * Returns 1 if the number is prime otherwise 0.
 */
int isPrime(int num) 
{
    int i;
    
    for(i=2; i<=num/2; i++)  
    {  
        /*  
         * If the number is divisible by any number  
         * other than 1 and self then it is not prime 
         */  
        if(num%i == 0)  
        {
            return 0;
        }  
    } 
    
    return 1; 
}
int ispalindrome(int num)
{
     int n, digit, rev = 0;
     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

}

}


