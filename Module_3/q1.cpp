#include<stdio.h>
#include<stdlib.h>
#include<string>
int generateNumber(); 
int main()
{
      bool play=true, playagain=false;
      int player, seedRandomNum;
      char playgameagain;
      seedRandomNum = generateNumber();
      do
      {     
            if(playagain)
            {
                  seedRandomNum = generateNumber();
                  playagain=false;
            }
            printf("Enter a integer 1-100, (0 quit): ");
            scanf("%d",&player);
            if(player == 0)
            {
                  play=false;
            } 
            else
            {
                  if (player == seedRandomNum)
                  {
                        printf("######YOU WON######\n");
                        printf("Do you want to play again?(y/n): \n");
                        scanf("%s",&playgameagain);
                        if(playgameagain=='y')
                        {
                            playagain=true; 
                            play=true; 
                        }
                        else
                        {
                              playagain=false;
                              play=false;
                        }
                  }
                  else if(player<seedRandomNum)
                  {
                        if(seedRandomNum-player>=12)
                        {
                              printf("-----\n");
                        }
                        else if(seedRandomNum-player<=12)
                        {
                              printf("---\n");
                        }
                  }
                  else
                  {
                        if(player - seedRandomNum>=12)
                        {
                              printf("+++++\n");
                        }
                        else if(player-seedRandomNum<=12)
                        {
                              printf("+++\n");
                        }
                  }
            }

      }while(play);
}

int generateNumber()
{
      return rand() % 100+1;
}