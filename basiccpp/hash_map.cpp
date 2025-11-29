#include <iostream>
#include <unordered_map>
#include <vector>
#include <map>

struct Cityrec {

    std::string city_name;
    uint64_t population;
    double latitude, longitude;
};

int main(){

    std::vector<Cityrec> cities;

    cities.push_back(Cityrec{"Delhi", 300000000, 1,1});
    cities.push_back(Cityrec{"kaithal", 200000, 2,1});
    // first method:
    // iterate through all cities vector

    for (const auto& city : cities){
        if(city.city_name=="kaithal"){
            std::cout << "\033[1;31m vector -> \033[0m" << city.population << std::endl;
            break;
        }
    }

    std::unordered_map<std::string,Cityrec> city_map;
    city_map["delhi"]=Cityrec{"delhi", 300000000, 1,1};
    city_map["kaithal"]=Cityrec{"kaithal", 200000, 2,1};
    city_map["pune"]=Cityrec{"pune", 300000000, 1,1};
    city_map["agraha"]=Cityrec{"agraha",4398690,234.3,432.32};
    city_map["karnal"]=Cityrec{"karnal",54547746746,56.56,566.66};
    city_map["city"]=Cityrec{"city",346483,8394.4,3443.34};
    city_map["gujrat"]=Cityrec{"gujrat",344334,3443.34,343.34};

    city_map.erase("pune");

    Cityrec& c=city_map["kaithal"];
    std::cout << "\033[1;32m hash map -> \033[0m" <<c.population << std::endl;

    const auto& city = city_map;
    if (city.find("karnal") != city.end()) {
        const Cityrec& data = city.at("karnal");
    }

    for (auto& [city_name,city] : city_map) {
        std::cout << city_name << " population : " << city.population << std::endl;

    }


    return 0;
}