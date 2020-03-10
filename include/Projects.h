#ifndef LAB6_PROJECTS_H
#define LAB6_PROJECTS_H

#include <string>

class Projects
{
private:
    std::string name;
    unsigned int budget;
public:
    Projects(std::string new_name, unsigned int new_budget);

    std::string getName();
    void setName(std::string new_name);
    unsigned int getBudget();
    void setBudget(unsigned int new_budget);
};

#endif //LAB6_PROJECTS_H
