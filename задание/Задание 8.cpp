
#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    string str, tmp;
    cout << "Введите слово: ";
    cin >> str;
    tmp = str;
    reverse(str.begin(), str.end());
    str == tmp ? cout << "yes" : cout << "no";
}
