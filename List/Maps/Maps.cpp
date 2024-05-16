#include <iostream>
#include <map>
#include <unordered_map>

int main()
{
    //CRUD
    //CREATE
    std::unordered_map<int, std::string> map1;
    std::unordered_map<std::string, std::string> map2;
    std::unordered_map<std::string, std::vector<int>> map3;
    
    std::vector<int> v = { 234, 123, 5489,3435,7 };
    std::vector<int> v1 = { 888, 333, 4444 ,22 ,1 };

    map3.emplace("Jordi", v);
    map3.emplace("Ester", v1);


    map1.emplace(916, "Manish");
    map1.emplace(5, "Topo");
    map1.emplace(2, "Rata");
    map1.emplace(777, "Leyenda");
    map1.emplace(3, "Pablito");
    
    //Comprobe if exist a key
    std::unordered_map<int, std::string>::iterator it = map1.find(3);
    if (it != map1.end())
    {
        std::cout << map1[3] << std::endl;
    }
    else
    {
        std::cout << "No existe crack" << std::endl;
    }


    map1.erase(7);
    for (const std::pair<int, std::string>keyValue : map1)
    {
        std::cout << keyValue.first << " " << keyValue.second << " " << std::endl;
    }

    for (const std::pair<std::string, std::vector<int>>keyValue : map3)
    {
        std::cout << keyValue.first << " "  << std::endl;
        for (int i = 0; i < keyValue.second.size() ; i++)
        {
            std::cout << keyValue.second[i] << std::endl;
        }
    }
}


