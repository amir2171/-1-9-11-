

#include <iostream> 
#include <string> 
#include <sstream> 
using namespace std;

int main()
{
    size_t max = 0, size;
    string s, word;
    cout << "String:\n";
    getline(cin, s);
    stringstream str(s);
    while (str >> word)
    {
        size = word.size();
        if (size > max) { max = size;s = word; }
    }
    cout << s << "\n" << "length=" << max << "\n";
    system("pause");
    return 0;
}
