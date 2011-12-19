#include <cstdio>
//from fib find the sum of the even-valued terms <4mil

int main()
{
    unsigned long sum=0;
    unsigned long a;
    unsigned long b;
    unsigned long temp;
    for( a=0,b=1; 
        b<4000000; 
        temp=a+b, a=b, b=temp
    )
    {
        if(b%2==0)
        {
            // even
            sum+=b;
        }
    }
    printf("sum: %d \n",sum);
    //sum: 4613732
    
    return 0;
}
