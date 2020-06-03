#pragma once
#include <string>
class Employee{
    protected:
        int id;
        std::string fio;
        int worktime;
        int payment;
    public:
		Employee(int id, std::string fio, int worktime);
		std::string getfio() const;
		int getid() const;
		int getworktime() const;
		int getpayment() const;
		virtual void calcpayment() = 0;
};