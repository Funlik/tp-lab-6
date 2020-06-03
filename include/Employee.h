#ifndef LAB_6_EMPLOYEE_H
#define LAB_6_EMPLOYEE_H
#include <string>
using namespace std;

class Employee{
protected:
    int id;
    string name;
    int worktime;
    int payment;
    string spec;

public:
    Employee(int id, string name, int worktime, string spec);
    virtual void calc()=0;
    int getId();
    string getName();
    int getWorktime();
    int getPayment();
    string getSpec();
};




#endif //LAB_6_EMPLOYEE_H
