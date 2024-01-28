#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


//funtion to implent th game
int game(char you,char computer){
    //if user and computer gives same thing 
   if(you==computer)
    return -1;
    //if your choice is stone
    //and computer choice is rock
    if(you =='r' && computer=='p')
      return 0;
       else if(you=='p'&&computer=='r')
      return 1;
         if(you=='s'&&computer=='p')
      return 1;

       else if(you=='p'&&computer=='s')
      return 0;

        if(you=='r'&&computer=='s')
      return 0;

       else if(you=='s'&&computer=='r')
      return 1;
}
int main(){
    //store the rand num with int n
      int n;
      char you,computer,result;
      //choose random num everytime
      srand(time(NULL));
      n=rand()% 100;
      //dividin stone  into three parts
       if(n < 33){
           //r is rock
        computer='r';
           
       }
        
        else if(n>33&&n<66)
        //p is paper
        computer='p';
         else 
         computer='s';
         printf("\n\n\n\n\t\t\t Enter r for STONE. p for PAPER and s for SCISSOR\n\t\t\t\t\t\t\t");
            scanf("%c", &you);
         //functional call to play game
         result=game(you,computer);
         if (result==-1){
            printf("\n\n\t\t\t\t game draw\n");}
             else if(result==1){
                printf("\n\n\t\t\t\t wow you won the game\n");

             }
             else{
                printf("\n\n\t\t\t\t oh! you lost the game\n");
             }
             return 0;
}

     

