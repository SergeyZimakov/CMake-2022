#include <iostream>
#include <string.h>
#include <string>
#include <cctype>
using namespace std;

//func declaration
string capitalizeEverySecondLetter(char *str);

int main(int, char**) {
    string userInput;
    string outputStr;
    string userAnswer = "y";
    while (userAnswer == "y") //loop runs while user wants to enter strings
    {
        //get string from user
        cout << "\nEnter a string: ";
        getline(cin, userInput);
        //modify string
        outputStr = capitalizeEverySecondLetter(&userInput[0]);
        //print the result
        cout << "\nThe Output is: " << outputStr;
        cout << endl;
        //ask user for another string
        cout << "\nDo You want to enter another string?(y/N) ";
        getline(cin, userAnswer);
    }
    cout << "\nThank You\n";
    
    return 0;
}

//The function gets string, turns every second letter to capital letter and returns that new modified string
string capitalizeEverySecondLetter(char *str) {
    int i;
    bool needToTurn = false; //variable that indicates if the letter has to be turned to capital letter
    char ch;
    string retStr = "";
    for (i = 0; i < strlen(str); i++) //run on all chars of string
    {
        if (isalpha(str[i])) { //check if the char is letter
            ch = needToTurn ? toupper(str[i]) : str[i]; //turn to capital letter if previous letter was not modified
            retStr += ch; //add char to new string
            needToTurn = !needToTurn; //switch the indicator for next letter  
        }
        else { //add char to string without any changes if it is not a letter(space, point, etc...)
            retStr += str[i];
        }
    }   
    return retStr;
}