\*
* C program to calculate sum of digits using recursion
*\
#include<studio.h>
\*Function declaration*\
int sumOfdigits(int num);
int main()
{
int num,sum;
printf("input number to find sum of digits:");
scanf("%d"&num);
sum=sumOfDigits(num);
printf("sum of digits of %d=%d",num,sum);
retrun 0;
}
\**
*recursive function to find sum of digits of a number
*\
int sumOfDigits(int num)
{
\\Base condition
if(num==0)
return 0;
return((num%10)+sumOfDigits (num/10));
}
