#include <stdio.h>
#include <stdlib.h>
char name[4];
 void game(int r, int hn)
 {
    
     if(hn==r)
     {
         printf("CONGRATULATION %s\n",name);
         return 0;
      //   exit();
     }
     else
     {
         printf("You lose,try again\n");
         //getch();
        scanf("%d",&hn);
         game(r,hn);
     }
     
 }
 main() {
     printf("Welcome Player,Enter your name\n");
     
    gets(name);
   // fgets(name, sizeof(name), stdin);
     
     printf("Hello %s , In this game you have to choose number which computer thinks,if you are ready press any key\n",name);
    // getch();
	int random_number=rand()%100;
	
	//int random_number=4;
	label1:
    if(random_number==0)
   goto label1; 
   printf("computer random number is %d\n",random_number);
    printf("Choose your number\n");
    int human_number;
    scanf("%d",&human_number);
    game(random_number,human_number);
    return;
    
}

