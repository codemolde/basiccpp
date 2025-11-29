#include <iostream>
#include <map>
#include <string>

int main() {

    std::map<std::string,int> map1;
    map1["daksh"]=123;
    map1["beniwal"]=435;
    map1["hello"]=535;

    std::map <std::string ,int> map2 = {
        {"abc",43},
        {"vgh",657},
        {"yut",757},
    };

    int v1=map1["daksh"];
    std::cout << v1 << std::endl;

    map1.insert({"jhdk",34});
    map1.emplace("vidsdei",6736);
    map1.erase("beniwal");

    for (const auto& element : map1) {
        std::cout << element.first << " ; " << element.second << std::endl;
    }

    auto it = map1.find("daksh");
    if (it == map1.end()) {
        std::cout << "not found \n";
    }
    else {
        std::cout << "found \n";
    }

    return 0;
}