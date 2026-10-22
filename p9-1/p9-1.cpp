#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str)
{
    return str.length();
}

int main()
{
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "Length: " << countCharacter(input) << endl;

}