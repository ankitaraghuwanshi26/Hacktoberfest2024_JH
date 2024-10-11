#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Define a string
    string str = "Hello, World!";

    // Reverse the string using the reverse function from
    // the algorithm library
    reverse(str.begin(), str.end());

    // Output the reversed string
    cout << "Reversed string: " << str << endl;

    return 0;
}
