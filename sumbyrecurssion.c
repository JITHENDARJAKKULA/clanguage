#include<stdio.h>
//type function_name(args)
    int isum(int n)
    { 
        //base condition
        if(n==0){
            return 0;
        }
       //recursive case
       int res=n+isum(n-1);
       return res;
}
    int main()
    {
        int n=7;
        //function call
        int sum=isum(n);
        printf("sum of first %d natural numbers:%d",n,sum);
    return 0;
    }
