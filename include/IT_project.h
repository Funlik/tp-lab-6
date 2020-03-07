//
// Created by Илья on 004 04.03.20.
//

#ifndef TASK1_IT_PROJECT_H
#define TASK1_IT_PROJECT_H
using std::string;

class IT_project {
private:
    int budget;
    string name;
public:
    IT_project(string name, int budget){
        this->name = name;
        this->budget = budget;
    }

    int getBudget(){
        return budget;
    }
};


#endif //TASK1_IT_PROJECT_H
