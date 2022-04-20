

#include <iostream> 
#include <string> 
using namespace std;

int main()
{
    string s, first;
    cout << "String:\n";
    getline(cin, s);
    first = s.substr(0, s.find(' '));
    cout << "first: " << first << "\n";
    system("pause");
    return 0;
}
