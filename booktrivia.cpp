#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
    
    string authors[] = {"William Shakespeare", "Jane Austen", "J.K. Rowling", "Charlotte Bronte"};
    string works[] = {"Romeo and Juliet", "Pride and Prejudice", "Harry Potter","Jane Eyre"};
    string questions[] = {"Who wrote 'Romeo and Juliet'?", "Who wrote 'Pride and Prejudice'?", "Who wrote the 'Harry Potter' series?","Who wrote 'Jane Eyre?'"};
    
    while (true) {
        // Randomly select a question index
        int index = rand() % 3;

        // Ask the question and get user's answer
        cout << questions[index] << endl;
        string userAnswer;
        cout << "Your answer: ";
        cin >> userAnswer;

        // Check if the answer is correct
        if (userAnswer == authors[index]) {
            cout << "Correct!\n";
        } else {
            cout << "Incorrect. The correct answer is: " << authors[index] << endl;
        }

        // Ask if the player wants to play again
        char playAgain;
        cout << "Play again? (y/n): ";
        cin >> playAgain;
        if (playAgain != 'y' && playAgain != 'Y') {
            cout << "Thanks for playing!\n";
            break;
        }
    }

    return 0;
}