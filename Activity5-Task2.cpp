#include <iostream>
#include <string>

using namespace std;

int main() {
    string myName = "John Doe";
   
    hash<string> hasher;

    size_t hashValue = hasher(myName);

    cout << "The hash value for \"" << myName << "\" is: " << hashValue << endl;

    return 0;
}