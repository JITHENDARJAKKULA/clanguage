// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here to find smallest value
    int A,B,C;
    printf("Enter any three nums A,B,C");
    scanf("%d %d %d",&A,&B,&C);
    if(A<=B&& A<=C)
    {
        printf("%d the value is lesser",A);
        
    }
     if(B<=A&& B<=C)
    {
        printf("%d the value is lesser",B);
        
    }
else{
    printf("%d the value is lesser",C);
}
return 0;
}