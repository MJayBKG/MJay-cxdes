#include <iostream>
using namespace std;
int main(){
    string x ;//player 1
    string y ;//player 2
    cin >> x >> y ;
        if ((x == "rock") && (y == "paper")){
        cout<< "Player 2 wins"<<endl;
        }
        else if ((x == "rock") && (y == "scissors")){
            cout << "Player 1 wins"<<endl;
        }
        else if ((x == "paper") && (y == "rock")){
            cout << "Player 1 wins" << endl;
        }
        else if ((x == "scissors") && (y == "rock")){
            cout << "Player 2 wins" << endl;
        }
        else if ((x == "paper") && (y == "scissors")){
            cout << "Player 2 wins" << endl ;
        }
        else if ((x == "scissors") && (y == "paper")){
            cout << "Player 1 wins" << endl ;
        }
            else if (x == y){
            cout << "Tie" << endl;
        }
            else {
                cout << "Invalid input"<< endl;
        }
            
    return 0;
}

