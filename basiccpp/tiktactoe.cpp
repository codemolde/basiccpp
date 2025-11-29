#include <iostream>
#include <ctime>

void drawboard(char *space);
void playerm(char *space,char player);
void computer(char *space,char com);
bool winner(char *space,char player,char com);
bool tie(char *space);


int main(){
    char space[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player='X';
    char com='O';
    bool running=true ;

    drawboard(space);

    while(running){
        playerm(space,player);
        drawboard(space);
        if(winner(space,player,com)|| tie(space)){
            running=false;
            break;
        }

        computer(space,com);
        drawboard(space);
        if(winner(space,player,com )|| tie(space)){
            running=false;
            break;
        }
    }



    return 0;
}
void drawboard(char *space){
std::cout << '\n';
      std::cout << "     |    |     " << '\n';
      std::cout << "  "<<space[0]<<"  |  "<<space[1]<<" |  "<<space[2]<<"   " << '\n';
      std::cout << "_____|____|_____" << '\n';
      std::cout << "     |    |     " << '\n';
      std::cout << "  "<<space[3]<<"  |  "<<space[4]<<" |  "<<space[5]<<"   " << '\n';
      std::cout << "_____|____|_____" << '\n';
      std::cout << "     |    |     " << '\n';
      std::cout << "  "<<space[6]<<"  |  "<<space[7]<<" |  "<<space[8]<<"   " << '\n';
      std::cout << "     |    |     " << '\n';
std::cout << '\n';    

}

void playerm(char *space,char player){

    int num;
    while (true)
    {
        std::cout << "Enter your spot of mark(1-9): ";
        std::cin >> num;
       if(num <1||num>9) {
        std::cout << "Invalid input\n";
        continue;
       }
        num--;
        if(space[num] == ' '){
            space[num]=player;
            break;
        }
        else{
            std::cout << "That spot is already taken!\n"; 
        }
    } 
    

}
void computer(char *space,char com){
    int num;
    srand(time(0));
    while(true){
    num=rand() % 9;
    if(space[num] == ' '){
    space[num]=com;
    break;
}

}

}
bool winner(char *space,char player,char com){

    if(space[0]!=' '&& space[0]==space[1]&& space[1]==space[2]){
        space[0]==player?std::cout << "YOU WIN":std::cout << "YOU LOSE";
        return true;
    }
   else if(space[3]!=' '&& space[3]==space[4]&& space[4]==space[5]){
        space[3]==player?std::cout << "YOU WIN":std::cout << "YOU LOSE";
        return true;
    }
    else if(space[6]!=' '&& space[6]==space[7]&& space[7]==space[8]){
        space[6]==player?std::cout << "YOU WIN":std::cout << "YOU LOSE";
        return true;
    }
    else if(space[0]!=' '&& space[0]==space[3]&& space[3]==space[6]){
        space[0]==player?std::cout << "YOU WIN":std::cout << "YOU LOSE";
        return true;
    }
    else if(space[1]!=' '&& space[1]==space[4]&& space[4]==space[7]){
        space[1]==player?std::cout << "YOU WIN":std::cout << "YOU LOSE";
        return true;
    }
    else  if(space[0]!=' '&& space[0]==space[4]&& space[4]==space[8]){
        space[0]==player?std::cout << "YOU WIN":std::cout << "YOU LOSE";
        return true;
    }
    else  if(space[2]!=' '&& space[2]==space[4]&& space[4]==space[6]){
        space[2]==player?std::cout << "YOU WIN":std::cout << "YOU LOSE";
        return true;
    }
return false;



return 0;
}
bool tie(char *space){
    for(int i=0;i<9;i++){
        if(space[i] ==' ')return false;
            
        
    }
    std::cout << "************\n";
    std::cout << "its a tie\n";
    std::cout << "************\n";

return true;
}
