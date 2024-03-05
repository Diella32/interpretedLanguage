
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to reverse a word


int main() {

    fstream fileUsed("Cat.txt", ios::in); // Open file for reading and writing, truncating its content

    if (fileUsed.is_open()) {
        string a;
        string line;
        int size;
        string input;
        string command, c;
        while (fileUsed >> line) {
            if (line == "lire") {
                string b;

                fileUsed.ignore();
                getline(fileUsed, b);

                cout << b << endl;
            }
            else if (line == "ecrire") {
                //cout << line;
                getline(cin, a);
                cout << a;
            }
            else if (line == "contraire") {  
                // if (line == "phrase") {
                getline(cin, a);

                    reverse(a.begin(), a.end());
                    cout << "Reversed: " << a << endl;
              
            }

        }
    }
    fileUsed.close();

    return 0;
}


