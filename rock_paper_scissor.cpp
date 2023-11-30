#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

char getComputerOption() {
    srand(time(0));
    int random = rand() % 3;
    return (random == 0) ? 'r' : (random == 1) ? 'p' : 's';
}


char getUserOption(){
    char x;
    cout << "Lets play Rock!, Paper!, Scissors!" << endl;
    cout << "Choose you option: " << endl;
    cout << "----------------------------------" << endl;
    cout << "(r) for rock " << endl << "(p) for paper " << endl << "(s) for scissors" << endl;
    cin  >> x;

    while (x!='r' && x!='p' && x!='s' ){
cout << "Please enter one of the following options only. " << endl;
cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl;
cin >> x;
}
return x;
}

void showSelectedoption(char option){
    if (option == 'r') cout << "rock" << endl;
    if (option == 'p') cout << "paper" << endl;
    if (option == 's') cout << "scissors" << endl;


} 

void chooseWinner(char uChoice, char cChoice) {
    if ((uChoice == 'r' && cChoice == 'p') ||
        (uChoice == 'p' && cChoice == 's') ||
        (uChoice == 's' && cChoice == 'r')) {
        cout << "Computer wins!" << endl;
    } else if ((uChoice == 'r' && cChoice == 's') ||
               (uChoice == 'p' && cChoice == 'r') ||
               (uChoice == 's' && cChoice == 'p')) {
        cout << "You win!" << endl;
    } else {
        cout << "It's a Tie!" << endl;
    }
}
int main() {
    
    char uChoice; 
    
    char cChoice;
    
    uChoice = getUserOption();
    cout << "Your choice is: "<< endl;
    showSelectedoption(uChoice);
    
    cout << "Computer's choice is: "<< endl;
    cChoice = getComputerOption();
    showSelectedoption(cChoice);
    
    chooseWinner(uChoice, cChoice);
 
    return 0;
}
