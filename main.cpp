#include <cstdio>
//from fib find the sum of the even-valued terms <4mil

int main()
{
    unsigned long sum=0;
    unsigned long a=0;
    unsigned long b=1;
    for( long num=1; num<4000000; ++num)
    {
        if(num%2==0)
        {
            // even
            sum+=num;
        }
        unsigned long temp=a+b;
        a=b;
        b=temp;
    }
    printf("sum: %d \n",sum);
    //sum: 
    
    return 0;
}
