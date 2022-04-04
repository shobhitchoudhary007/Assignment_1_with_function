// WAP to find whether the entered number is prime or not.

#include <stdio.h>
int checkPrime(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (checkPrime(n) == 0)
       {
        printf("%d is a Prime Number.", n);
       }
    else{
         printf("%d is not a Prime Number.", n);
        }
    return 0;
}
int checkPrime(int n)
{
    int count = 0;
    if (n == 1)
       {
         count = 1;
       }
    for (int i = 2; i <= n / 2; i++)
        {
         if (n % i == 0)
            {
             count = 1;
             break;
            }
        }    
    return count;
}


//Output
//Enter a number: 6
//6 is not a Prime Number.