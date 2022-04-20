
#include <iostream>
#include <string>
#include <sstream>

bool famio(std::string& s) {
    std::istringstream ist(s);
    std::string f, i, o;
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
    std::string s;

    while (std::cout << "FIO: " && std::getline(std::cin, s) && !s.empty()) {
        if (famio(s))
            std::cout << "RET: " << s << std::endl;
        else
            std::cerr << "Wrong string format!" << std::endl;
    }

    return 0;
}
