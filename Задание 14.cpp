
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    cout << "Enter text:";
    getline(cin, s1);
    cout << "Enter the word patten:";
    getline(cin, s2);
    int k = 0;
    for (int i = 0; (i = s1.find(s2, i)) != string::npos; i++) {
        k++;
    }
    cout << k << "\n";
    system("pause");
    return 0;
}