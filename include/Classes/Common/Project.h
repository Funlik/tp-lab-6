//
// Created by fiskirton on 04.03.2020.
//

#ifndef STUFF_PROJECT_H
#define STUFF_PROJECT_H

#include <string>
#include <utility>

using namespace std;

class Project{
public:
    Project(string name, int budget);

    ~Project() = default;

private:
    double budget;
    string name;
    double balance;

public:

    void subtract(double sum);

    double getBudget() const;

    const string &getName() const;

    void setBalance(double budget);

    double getBalance() const;
};

#endif //STUFF_PROJECT_H

