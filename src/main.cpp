#include "Factory.h"

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

vector<string> split(const string& s, char delimiter)
{
    vector<string> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter))
        tokens.push_back(token);
    return tokens;
}

 void handleFile(const string& fileName, Factory& factory, vector<Employee*>& staff)
{
    ifstream in(fileName);
    if (in.is_open())
    {
        string buf;
        while (!in.eof())
        {
            getline(in, buf, '\n');
            vector<string> data = split(buf, ',');
            staff.push_back(factory.create(data));
        }
    }
    else
    {
        cout << "File undefined";
    }
    in.close();
}

int main()
{
    auto *project1 = new Project("project1_title", 1048576);
    auto *project2 = new Project("project2_title", 2097152);

    vector<Project*> projects = {project1, project2};
    Factory factory = Factory(projects);

    vector<Employee*> staff;
    handleFile("test.csv", factory, staff);

    for (auto employee : staff)
    {
        employee->set_worktime(9*25);
        employee->calc_payment();
        cout << employee->get_name() << " - " << employee->get_occupation() << " - " << employee->get_payment() << endl;
    }

    return 0;
}