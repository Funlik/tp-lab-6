//
// Created by Mary on 25.02.2020.
//
#include <employee.h>
#include <Engineer.h>
#include <Manager.h>
#include <Personal.h>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;
vector<string> split(const string& s)
{
    vector<string> result;
    string part;
    stringstream inputStream(s);

    while (std::getline(inputStream, part, '~'))
    {
        result.push_back(part);
    }

    return result;
}

int main(){
    string path = "..\\src\\Staff.txt";
    ifstream stream_from(path);
    string input;
    stringstream in(path);
    /* 1 - Cleaner
 * 2 - Driver
 * 3 - Programmer
 * 4 - Tester
 * 5 - TeamLeader
 * 6 - Manager
 * 7 - ProjectManager
 * 8 - SeniorManager
 * */
    vector <Employee*> AllEmploees;
    while (getline(stream_from, input)){
        vector<string> fields = split(input);
        Projects proj = Projects ::zero;
        if (fields[3] == "first") proj = Projects ::first;
        else if (fields[3] == "second") proj = Projects ::second;
        else if (fields[3] == "third") proj = Projects ::third;
        else if (fields[3] == "fourth") proj = Projects ::fourth;
        if (fields[2] == "1"){
            //cout << "I am cleaner" << endl;
            AllEmploees.push_back(new Cleaner(fields[0], fields[1]));
        }
        else if (fields[2] == "2"){
            //cout << "I am driver" << endl;
            AllEmploees.push_back(new Driver(fields[0], fields[1]));
        }
        else if (fields[2] == "3"){
            //cout << "I am programmer" << endl;
            AllEmploees.push_back(new Programmer(fields[0], fields[1], proj));
        }
        else if (fields[2] == "4"){
            //cout << "I am tester" << endl;
            AllEmploees.push_back(new Tester(fields[0], fields[1], proj));
        }
        else if (fields[2] == "5"){
            //cout << "I am teamleader" << endl;
            AllEmploees.push_back(new TeamLeader(fields[0], fields[1], proj, atoi(fields[4].c_str())));
        }
        else if (fields[2] == "6"){
            //cout << "I am manager" << endl;
            AllEmploees.push_back(new Manager(fields[0], fields[1], proj));
        }
        else if (fields[2] == "7"){
            //cout << "I am projectmanager" << endl;
            AllEmploees.push_back(new ProjectManager(fields[0], fields[1], proj, atoi(fields[4].c_str())));
        }
        else if (fields[2] == "8"){
            //cout << "I am senior manager" << endl;
            AllEmploees.push_back(new SeniorManager(fields[0], fields[1], proj, atoi(fields[4].c_str())));
        }
    }
    stream_from.close();

    for (Employee* p : AllEmploees) {
        p->setWorktime(40);
        p->calc();
        p->print();
    }

    return 0;
}

/*string path = "..\\res\\students.txt";
    vector <Student*> students;
    ifstream stream_from(path);
    string input;
    stringstream in(path);
    int id = 0;
    while (getline(stream_from, input)){
        id ++;
        Student* new_student = new Student(id, input);
        students.push_back(new_student);
    }
    stream_from.close();
    for (int i = 0; i < students.size(); i ++){
        groups[i % 4]->addStudent(students[i]);
    }*/