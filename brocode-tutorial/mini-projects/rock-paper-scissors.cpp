#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    char player;
    char computer;

    player = getUserChoice();

    return 0;
}

char getUserChoice(){
    char player;
    std::cout << "Rock-Paper-Scissors Game\n";
    std::cout << "'r' for rock\n";
    std::cout << "'p' for paper\n";
    std::cout << "'s' for scissors\n";
    std::cin >> player;

    return 0;
}

char getComputerChoice(){
    
    return 0;
}

void showChoice(char choice){

}

void chooseWinner(char player, char computer){

}