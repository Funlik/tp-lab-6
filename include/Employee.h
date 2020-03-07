#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee
{
    public:
        Employee();
        Employee(std::string name){this->name = name;};

        void setName(std::string name){this->name = name;};
        void setSal(int payment){this->payment = payment;};
        void setId(int id){this->id = id;};
        void setPosition(std::string position){this->position = position;};
        void setWorktime(int worktime){this->worktime = worktime;};

        std::string getName(){return this->name;};
        int getSal(){return this->payment;};
        int getWorktime(){return this->worktime;};
        int getId(){return this->id;};
        std::string getPosition(){return this->position;};

        std::string toString();
    private:
        std::string name;
        int payment = 0;
        int id;
        int worktime = 0;
        std::string position;
};

#endif // EMPLOYEE_H
