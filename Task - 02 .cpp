#include <iostream>
#include <string>

using namespace std;

int main() {
    string tasks[10] = {""};
    int number = 4;
    string latter[10] = {"tarang"};
    char one = 'A';
    int option = -1;

    while (option != 0) {
        cout << "----Guessing game----" << endl;
        cout << "1 - Wanna play with integer?" << endl;
        cout << "2 - Wanna play with String?" << endl;
        cout << "3 - Wanna play with character?" << endl;
        cout << "0 - Terminate the program" << endl;
        cin >> option;

        switch (option) {
            case 1: {
                int num1;
                cout << "Enter number for guess: ";
                cin >> num1;
                if (num1 == number) {
                    cout << "You're right!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                }
                break;
            }
            case 2: {
                string guesser;
                cout << "Enter string for guess: ";
                cin >> guesser;
                if (guesser == latter[0]) {
                    cout << "Right!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                }
                break;
            }
            case 3: {
                char character;
                cout << "Enter character for guess: ";
                cin >> character;
                if (character == one) {
                    cout << "Right!" << endl;
                } else {
                    cout << "Wrong!" << endl;
                }
                break;
            }
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid option, please try again." << endl;
                break;
        }
    }

    return 0;
}
