#include "Factory.h"

enum Employee_ID {
    Cleaner_ID = 0, Driver_ID, Programmer_ID,
    Tester_ID, TeamLeader_ID, ProjectManager_ID, SeniorManager_ID
};
/*
    Cleaner        - 0
    Driver         - 1
    Programmer     - 2
    Tester         - 3
    TeamLeader     - 4
    ProjectManager - 5
    SeniorManager  - 6
*/

/*
    Data:
    0 - id - идентификационный номер
    1 - name - ФИО сотрудника
    2 - position - должность
    3 - base - базовая ставка руб. / час
    4 - bonus - надбавка
    5 - project - название проекта
    6 - budget - проектный бюджет
    7 - share - доля работника, %
    8 - staffCount - количество сотрудников
*/
Employee* Factory::createEmployee(vector<string> data) {
    Employee* p = nullptr;
    switch (atoi(data[2].c_str())) {
        case Cleaner_ID: {
            Cleaner* p = 
                new Cleaner(atoi(data[0].c_str()), data[1], atoi(data[3].c_str()));
            return p;
        }
        case Driver_ID: {
            Driver* p = 
                new Driver(atoi(data[0].c_str()), data[1], atoi(data[3].c_str()), 
                    atoi(data[4].c_str()));
            return p;
        }
        case Programmer_ID: {
            Programmer* p = 
                new Programmer(atoi(data[0].c_str()), data[1], atoi(data[3].c_str()), 
                    data[5], atoi(data[6].c_str()), atoi(data[7].c_str()));
            return p;
        }
        case Tester_ID: {
            Tester* p = 
                new Tester(atoi(data[0].c_str()), data[1], atoi(data[3].c_str()), 
                    data[5], atoi(data[6].c_str()), atoi(data[7].c_str()));
            return p;
        }
        case TeamLeader_ID: {
            TeamLeader* p = 
                new TeamLeader(atoi(data[0].c_str()), data[1], atoi(data[3].c_str()), 
                    data[5], atoi(data[6].c_str()), atoi(data[7].c_str()), atoi(data[8].c_str()));
            return p;
        }
        case ProjectManager_ID: {
            ProjectManager* p = 
                new ProjectManager(atoi(data[0].c_str()), data[1], data[5],
                    atoi(data[6].c_str()), atoi(data[7].c_str()), atoi(data[8].c_str()));
            return p;
        }
        case SeniorManager_ID: {
            SeniorManager* p = 
                new SeniorManager(atoi(data[0].c_str()), data[1], data[5],
                    atoi(data[6].c_str()), atoi(data[7].c_str()), atoi(data[8].c_str()));
            return p;
        }
        default:
            return nullptr;
    }
}
