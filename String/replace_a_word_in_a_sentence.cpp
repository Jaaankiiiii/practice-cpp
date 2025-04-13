#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string rep, by;
    cout << "Enter what you want to replace: ";
    getline(cin, rep);

    cout << "Enter what you want to replace by: ";
    getline(cin, by);

    size_t pos = 0; 
    // size_t is unsigned int type basically used for defing size in bytes in array or loops.(unsigned int means can only represent positive value, not negative)
    while ((pos = str.find(rep, pos)) != string::npos) {
        // string :: npos signifies "not found" condition when searchig for substring or characters.
        str.replace(pos, rep.length(), by);
        pos += by.length(); 
    }

    cout << "Updated string: " << str << endl;

    return 0;
}