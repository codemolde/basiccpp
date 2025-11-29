#include <iostream>
#include <string>
#include <map>
#include <vector>

int main() {

    // both string and integer values can add more or can have multiple
    // datatype at the same time.
    // string or int or float or char any one used as key.
    // time complextity O(1) for most of the time but O(n) when collision happen.
    std::map<std::string,int> map1={
        {"daksh",12},
        {"tejender",13},
        {"sumit",11},
        {"ravan",67},
    };
    // both string and integer.
    // string or int or float or char can be stored but indexing is done from 0 to n.
    // time complextity O(n) most of the time only O(1)/O(log n) when adding or deleting.
    std::vector<std::pair <std::string,int>> v1=
        {
            {"daksh",12},
            {"tejender",13},
            {"sumit",11},
            {"satan",69},
        };
    // only string at a time.
    // string or int or float or char values can be made but indexing is done from 0 to n.
    // time complextity O(n) most of the time .
    std::string s[4][4]={
        {"daksh","tejender","sumit","jejus"},
        {"ravan","satan","67","69"},
        {"steve","thor","iron man","spider-man"},
        {"ddh","hehj","ejje","jek4"}
    };

    for (const auto& p:map1) {
        std::cout << p.first << " : " << p.second << std::endl;
    }

    std::cout << "±±±±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
    for (const auto& p:v1) {
        std::cout << p.first << " : " << p.second << std::endl;
    }

    std::cout << "±±±±±±±±±±±±±±±±±±±±±±±±±" << std::endl;
    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            std::cout << s[i][j] << std::endl;
            std::cout << "±±±±±" << std::endl;
        }
    }

    return 0;
}
