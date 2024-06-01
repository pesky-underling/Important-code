#include <iostream>

using namespace std;

int main()
{

    int userChoice, computerChoice;

    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Enter your choice:" << endl;
    cout << "1. Rock\n2. Paper\n3. Scissors\n";
    cin >> userChoice;

    do {
        cout << "Invalid choice. Please enter a number between 1 and 3:" << endl;
        cin >> userChoice;
    } while(userChoice < 1 || userChoice > 3);

    return 0;
}
