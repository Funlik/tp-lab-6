#include "Factory.h"
#include <iostream>

int main()
{
    std::string data = "Clr 1 Cleaner_1 10 150";
    size_t index = data.find(' ', 4);
    int id = atof(data.substr(4,index-4).c_str());
    size_t new_index = data.find(' ', index+1);
    std::string name = data.substr(index+1, new_index-index);
    index = new_index;
    new_index = data.find(' ', index+1);
    double worktime = atof(data.substr(index+1, new_index-index).c_str());
    double base = atof(data.substr(new_index+1).c_str());


    std::cout << "id = " << id << std::endl;
    std::cout << "name = " << name << std::endl;
    std::cout << "worktime = " << worktime << std::endl;
    std::cout << "base = " << base << std::endl;


    Factory f;
    f.readWorkers("workers.txt");
    std::cout << " >> " << f.getNum() << std::endl;
    std::cout << "|=" << (f.getCleaners()[0]).getId() << std::endl;

    return 0;
}