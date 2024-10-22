#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (true)
    {
        int choice;
        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "Choice 1 -> Enter the Game" << endl;
        cout << "Choice 2 -> Exit" << endl;
        cout << "Enter Your Choice -> ";
        cin >> choice;
        if (choice == 1)
        {

            srand(time(0));
            int randomNumber = rand() % 101;
            int attempts = 0;
            int userGuess = 0;
            cout << "Welcome to the Number Guessing Game!" << endl;
            cout << "I have selected a number between 1 and 100. Can you guess it?" << endl;
            do
            {
                cout << "Enter your guess: ";
                cin >> userGuess;
                attempts++;

                if (userGuess > randomNumber)
                {
                    cout << "Too high! Try again." << endl;
                }
                else if (userGuess < randomNumber)
                {
                    cout << "Too low! Try again." << endl;
                }
                else
                {
                    cout << "Congratulations! You've guessed the number " << randomNumber << " in " << attempts << " attempts." << endl;
                    cout<<"Hope you Enjoyed the Game!!!"<<endl;
                }
            } while (userGuess != randomNumber);
        }
        else if (choice == 2)
        {
            cout<<"Please visit us Again"<<endl;
            break;
            
        }
        else{
            cout<<"Invalid Input please enter a valid input, Thankyou"<<endl;
        }
        
    }
    return 0;
}