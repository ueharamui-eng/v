#include <iostream>
#include <ctime>
#include <cstdlib>
void drawboard(char *spaces){
    std::cout<<"     |     |      \n";
    std::cout<<"  "<< spaces[0] << "  |  "<< spaces[1] << "  |  "<< spaces[2] << "  \n";
    std::cout<<"_____|_____|______\n";
    std::cout<<"     |     |      \n";
    std::cout<<"  "<< spaces[3] << "  |  "<< spaces[4] << "  |  "<< spaces[5] << "  \n";
    std::cout<<"_____|_____|______\n";
    std::cout<<"     |     |      \n";
    std::cout<<"  "<< spaces[6] << "  |  "<< spaces[7] << "  |  "<< spaces[8] << "  \n";
    std::cout<<"     |     |      \n";
}
void playermove(char *spaces, char player){
    int number;
    do{
        std::cout<<"enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--;
       if(number >= 0 && number <= 8 && spaces[number]==' '){ 
            spaces[number]=player;
            break; 
        } else {
            std::cout << "Invalid move, try again.\n"; 
        }
    }while(true);
}

void computermove(char *spaces,char computer){
int number;
    while(true){
        number = rand() % 9;
        if(spaces[number]==' '){
            spaces[number] = computer;
            break;
        }
    }
}
bool checkwinner(char *spaces,char player, char computer){
    if(spaces[0] != ' '&&spaces[0]==spaces[1]&&spaces[1]==spaces[2]){
        spaces[0]==player ? std::cout <<"you win\n" : std::cout << "you lose\n";
        return true;
    }
    else if(spaces[3] != ' '&&spaces[3]==spaces[4]&&spaces[4]==spaces[5]){
        spaces[3]==player ? std::cout <<"you win\n" : std::cout << "you lose\n";
        return true;
    }
    else if(spaces[6] != ' '&&spaces[6]==spaces[7]&&spaces[7]==spaces[8]){
        spaces[6]==player ? std::cout <<"you win\n" : std::cout << "you lose\n";
        return true;
    }
    if(spaces[0] != ' '&&spaces[0]==spaces[3]&&spaces[3]==spaces[6]){
        spaces[0]==player ? std::cout <<"you win\n" : std::cout << "you lose\n";
        return true;
    }
    if(spaces[1] != ' '&&spaces[1]==spaces[4]&&spaces[4]==spaces[7]){
        spaces[1]==player ? std::cout <<"you win\n" : std::cout << "you lose\n";
        return true;
    }
    if(spaces[2] != ' '&&spaces[2]==spaces[5]&&spaces[5]==spaces[8]){
        spaces[2]==player ? std::cout <<"you win\n" : std::cout << "you lose\n";
        return true;
    }
    if(spaces[0] != ' '&&spaces[0]==spaces[4]&&spaces[4]==spaces[8]){
        spaces[0]==player ? std::cout <<"you win\n" : std::cout << "you lose\n";
        return true;
    }
    if(spaces[2] != ' '&&spaces[2]==spaces[4]&&spaces[4]==spaces[6]){
        spaces[2]==player ? std::cout <<"you win\n" : std::cout << "you lose\n";
        return true;
    }
    
        return false;
}
bool checktie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i]==' '){
            return false;
        }
    }
    std::cout<<"it is a tie\n";
    return true;
}

int main(){
     srand(time(0));
    char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    drawboard(spaces);
    while(running){
        playermove(spaces, player);
        drawboard(spaces);
        if(checkwinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checktie(spaces)){
                running = false;
                break;
        }
        computermove(spaces, computer);
        drawboard(spaces);
        if(checkwinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checktie(spaces)){
                running = false;
                break;
        }
    }
    system("pause");
    return 0;
}