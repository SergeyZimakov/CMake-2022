#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string capitalizeEverySecondChar(char *str);

int main(int, char**) {
    string userInput;
    string outputStr;
    string userAnswer = "y";
    while (userAnswer == "y")
    {
        cout << "\nEnter a string: ";
        getline(cin, userInput);
        outputStr = capitalizeEverySecondChar(&userInput[0]);
        cout << "\nThe Output is: " << outputStr;
        cout << endl;
        cout << "\nDo You want to enter another string?(y/N) ";
        getline(cin, userAnswer);
    }
    cout << "\nThank You";
    
    return 0;
}

string capitalizeEverySecondChar(char *str) {
    int i;
    bool needToTurn = false;
    char ch;
    string retStr = "";
    for (i = 0; i < strlen(str); i++)
    {
        if (isalpha(str[i])) {
            ch = needToTurn ? toupper(str[i]) : str[i];
            retStr += ch;
            needToTurn = !needToTurn;
        }
        else {
            retStr += str[i];
        }
    }   
    return retStr;
}