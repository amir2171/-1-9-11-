

#include <iostream> 
#include <string> 
using namespace std;

int main()
{
    string s, last;
    cout << "String:\n";
    getline(cin, s);
    last = s.substr(s.find_last_of(' ') + 1);
    cout << " last: " << last << "\n";
    system("pause");
    return 0;
}
