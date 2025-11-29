#include <iostream>
#include <ctime>

char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void showwinner(char player,char computer);

int main(){
    char player;
    char computer;

  player=getuserchoice();
  std::cout << "Your choice: " ;
  showchoice(player) ;
  computer=getcomputerchoice();
  std::cout << "\ncomputer choice: " ;
  showchoice(computer);
  std::cout << '\n';
  showwinner(player,computer);



    return 0;
}
char getuserchoice(){
    char player;


    std::cout << "Rock,paper,scissors Game\n";
    do
    {
    std::cout << "########################\n";
    std::cout << "'r' for rock\n";
    std::cout << "'p' for paper\n";
    std::cout << "'s' for scissors\n";
    std::cin >> player;
    } while (player!='r'&&player!='p'&&player!='s');
    
   
    


    return player;


    


    


    


}
char getcomputerchoice(){
    
  srand(time(0));
  int num=rand() % 3 + 1;
  switch (num)
  {
  case 1:return 'r';
  case 2: return 'p';
  case 3: return 's';
  
  
  }

 

    return 0;

}
void showchoice(char choice){

    switch (choice)
    {
    case 'r':
     std::cout << "rock";
        break;
    case 'p':
        std::cout << "paper";
           break;
    case 's':
     std::cout << "scissors";
        break;
    
   
    }

}
void showwinner(char player,char computer){
    switch(player){
    case 'r': if(computer=='r'){
        std::cout << "It's a tie!\n";

        }
        else if(computer =='p'){
            std::cout << "You lose!\n";

        }
        else{
            std::cout << "You win!\n";

        }
        break;
    case 'p': if(computer=='r'){
            std::cout << "You win!\n";
    
            }
            else if(computer =='p'){
                std::cout << "It's a tie!\n";
    
            }
            else{
                std::cout << "You lose!\n";
    
            }
            break;
    case 's': if(computer=='r'){
                std::cout << "You lose!\n";
        
                }
                else if(computer =='p'){
                    std::cout << "You win!\n";
        
                }
                else{
                    std::cout << "It's a tie!\n";
        
                }
                break;
    }

}
