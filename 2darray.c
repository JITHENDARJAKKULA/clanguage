#include<stdio.h>
int main(){
int matrix[2][3]={ {1,2,3} , {5,6,8}};
int i,j;

for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%d\n",matrix[i][j]); 
}
}
return 0;
}

