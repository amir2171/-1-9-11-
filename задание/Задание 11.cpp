#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool famio(std::string& s) {
    setlocale(LC_ALL, "rus");
    stringstream ist(s);
   string f, i, o;
    if ((ist >> f) && (ist >> i) && (ist >> o)) {
        i[1] = o[1] = '.';
        i.resize(2);
        o.resize(2);
        std::ostringstream ost;
        ost << f << ' ' << i << ' ' << o;
        s = ost.str();
        return true;
    }
    else
        return false;
}

int main() {
   string s;
   setlocale(LC_ALL,"rus");
   cout << "SNP(ФИО): " && getline(cin, s) && !s.empty();
   if (famio(s))
       cout << "RET: " << s << "\n";


    return 0;
}