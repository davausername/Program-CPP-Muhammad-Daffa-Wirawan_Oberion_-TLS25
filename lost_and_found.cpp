#include <iostream>
using namespace std;

int main() {

    while(true){
        int choice;
        cout << "Select your choice based on its number\n1. Create a passowrd from a word\n2. Retrieve the password into the original world without vowels\n0. Exit" << endl;
        cin >> choice;
        if(choice == 1){
            cout << "Insert a word: ";
            string theWord;
            cin >> theWord;

            char vowels[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};

            string noVowels = "";
            for (int i = 0; i < theWord.length(); i++) {
                bool isVowelthere = false;
                for (int j = 0; j < 10; j++) {
                    if (theWord[i] == vowels[j]) {
                        isVowelthere = true;
                        break;
                    }
                }
                if (!isVowelthere) {
                    noVowels += theWord[i];
                }
            }

            cout << "Password without vowels: " << noVowels << endl;

            string password;
            for (int i = noVowels.length() - 1; i >= 0; i--) {
                password += noVowels[i];
            }

            cout << "password: " << password << endl; 
            cout << "Done!" << endl;
        } else if (choice == 2){
            string password;
            cout << "Hi there" << endl;
            cout << "Enter the password: (with no vowels)" << endl;
            cin >> password;
            cout << endl;

            string retrievedWord;
            for (int i = password.length() - 1; i >= 0; i--) {
                retrievedWord += password[i];
            }
            cout << "Result: " << retrievedWord << endl << endl;

        } else if (choice == 0){
            cout << "Thanks!" << endl;
            break;
        } else {
            cout << "invalid choice" << endl;
        }
    }


    return 0;

}