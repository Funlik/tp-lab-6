#include "../headers/Company.h"

#include <utility>

Company::Company(string _name) : name{move(_name)}{

}

std::string Company::getName() {
    return name;
}

void Company::importData(std::string fileName) {
    string line;
    vector<string> info;
    ifstream in("../src/data.txt"); // окрываем файл для чтения
    if (in.is_open())
    {
        while (getline(in, line))
        {
            for(int j=0,i=0;i<line.length();i++) {
                if (line[i+1] == ' ' || line[i+1] == '\0') {
                    info.push_back(line.substr(j,i-j+1));
                    cout<<line.substr(j,i-j+1)<<endl;
                    j=i+2;
                }
            }
            addEmployee(info);
            info.clear();
            cout << line << endl;
        }
    } else {
        cout<<"error";
    }
    in.close();     // закрываем файл
}

void Company::addEmployee(vector<string> employee) {
    if (employee[4] == "Cleaner"){
        cout<<"Cleaner!"<<endl;
        cleaners.emplace_back(atoi(employee[0].c_str()),
                                employee[1]+" "+employee[2]+" "+employee[3],
                                   atoi(employee[5].c_str()),
                                   atoi(employee[6].c_str()));
    }
    else if (employee[4] == "Driver"){
        cout<<"Driver!";
        drivers.emplace_back(atoi(employee[0].c_str()),
                                   employee[1]+" "+employee[2]+" "+employee[3],
                                   atoi(employee[5].c_str()),
                                   atoi(employee[6].c_str()));
    }
    else if (employee[4] == "Engineer"){
        cout<<"Engineer!";
        engineers.emplace_back(atoi(employee[0].c_str()),
                                   employee[1]+" "+employee[2]+" "+employee[3],
                                   atoi(employee[5].c_str()),
                                   atoi(employee[6].c_str()));
    }
    else if (employee[4] == "Programmer"){
        cout<<"Programmer!";
        programmers.emplace_back(atoi(employee[0].c_str()),
                                   employee[1]+" "+employee[2]+" "+employee[3],
                                   atoi(employee[5].c_str()),
                                   atoi(employee[6].c_str()));
    }
    else if (employee[4] == "Tester"){
        cout<<"Tester!";
        testers.emplace_back(atoi(employee[0].c_str()),
                                   employee[1]+" "+employee[2]+" "+employee[3],
                                   atoi(employee[5].c_str()),
                                   atoi(employee[6].c_str()));
    }
    else if (employee[4] == "TeamLeader"){
        cout<<"TeamLeader!";
        teamLeaders.emplace_back(atoi(employee[0].c_str()),
                                   employee[1]+" "+employee[2]+" "+employee[3],
                                   atoi(employee[5].c_str()),
                                   atoi(employee[6].c_str()));
    }
    else if (employee[4] == "Manager"){
        cout<<"Manager!";
        managers.emplace_back(atoi(employee[0].c_str()),
                                   employee[1]+" "+employee[2]+" "+employee[3],
                                   atoi(employee[5].c_str()));
    }
    else if (employee[4] == "ProjectManager"){
        cout<<"ProjectManager!";
        projectManagers.emplace_back(atoi(employee[0].c_str()),
                                                employee[1]+" "+employee[2]+" "+employee[3],
                                                atoi(employee[5].c_str()));
    }
    else if (employee[4] == "SeniorManager"){
        cout<<"SeniorManager!";
        seniorManagers.emplace_back(atoi(employee[0].c_str()),
                                               employee[1]+" "+employee[2]+" "+employee[3],
                                               atoi(employee[5].c_str()));
    }
}

void Company::print() {
    for(auto i:cleaners)
        cout<<i.getId()<<"\t"<<i.getName()<<"\t\t"<<i.getWorkTime()<<"\t"<<i.getPosition()<<"\t\t\t"<<i.payroll()<<endl;
    for(auto i:drivers)
        cout<<i.getId()<<"\t"<<i.getName()<<"\t\t"<<i.getWorkTime()<<"\t"<<i.getPosition()<<"\t\t\t"<<i.payroll()<<endl;
    for(auto i:engineers)
        cout<<i.getId()<<"\t"<<i.getName()<<"\t\t"<<i.getWorkTime()<<"\t"<<i.getPosition()<<"\t\t\t"<<i.payroll()<<endl;
    for(auto i:programmers)
        cout<<i.getId()<<"\t"<<i.getName()<<"\t\t"<<i.getWorkTime()<<"\t"<<i.getPosition()<<"\t\t"<<i.payroll()<<endl;
    for(auto i:testers)
        cout<<i.getId()<<"\t"<<i.getName()<<"\t\t"<<i.getWorkTime()<<"\t"<<i.getPosition()<<"\t\t\t"<<i.payroll()<<endl;
    for(auto i:teamLeaders)
        cout<<i.getId()<<"\t"<<i.getName()<<"\t\t"<<i.getWorkTime()<<"\t"<<i.getPosition()<<"\t\t"<<i.payroll(projectBudget,
                                engineers.size()+programmers.size()+testers.size())<<endl;
    for(auto i:managers)
        cout<<i.getId()<<"\t"<<i.getName()<<"\t\t"<<i.getWorkTime()<<"\t"<<i.getPosition()<<"\t\t\t"<<i.payroll2(projectBudget)<<endl;
    for(auto i:projectManagers)
        cout<<i.getId()<<"\t"<<i.getName()<<"\t\t"<<i.getWorkTime()<<"\t"<<i.getPosition()<<"\t\t"<<i.payroll(projectBudget,
                                engineers.size()+programmers.size()+testers.size())<<endl;
    for(auto i:seniorManagers)
        cout<<i.getId()<<"\t"<<i.getName()<<"\t\t"<<i.getWorkTime()<<"\t"<<i.getPosition()<<"\t\t"<<i.payroll(projectBudget,
                                engineers.size()+programmers.size()+testers.size())<<endl;
}