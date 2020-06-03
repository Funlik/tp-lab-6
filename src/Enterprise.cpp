#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-err34-c"

#include <string>
#include <fstream>
#include <iostream>
#include <cstring>
#include <vector>
#include "Enterprise.h"
#include "Project.h"
#include "Driver.h"
#include "Cleaner.h"
#include "Programmer.h"
#include "Tester.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "ProjectManager.h"
#include "SeniorManager.h"

enum Position {
    DRIVER, CLEANER, PROGRAMMER, TESTER, PROJECT_MANAGER, TEAM_LEADER, MANAGER, SENIOR_MANAGER, UNDEFINED
};

Position getPositionByWord(const std::string &positionWord) {

    Position position = SENIOR_MANAGER;

    if (positionWord == "DRIVER") {
        position = DRIVER;
    } else if (positionWord == "CLEANER") {
        position = CLEANER;
    } else if (positionWord == "PROGRAMMER") {
        position = PROGRAMMER;
    } else if (positionWord == "TESTER") {
        position = TESTER;
    } else if (positionWord == "TEAM_LEADER") {
        position = TEAM_LEADER;
    } else if (positionWord == "PROJECT_MANAGER") {
        position = PROJECT_MANAGER;
    } else if (positionWord == "MANAGER") {
        position = MANAGER;
    } else if (positionWord == "SENIOR_MANAGER") {
        position = SENIOR_MANAGER;
    }
    return position;
}

Position recognizePosition(std::string line) {
    std::string positionWord;
    int charIndex = 0;
    while (line[charIndex] != ' ') {
        positionWord += line[charIndex++];
    }
    return getPositionByWord(positionWord);
}

Project parseProjectData(std::string line) {
    int type = 0;
    std::string title = "";
    std::string budget = "";

    for (int i = 2; i < line.size() - 1; i++) {
        if (line[i] != ' ') {
            if (type == 0) {
                title += line[i];
            } else if (type == 1) {
                budget += line[i];
            }
        } else {
            type++;
        }
    }

    Project project = Project(title, atoi(budget.c_str()));
    return project;
}

Driver parseDriverData(std::string line) {
    int type = -1;

    std::string id;
    std::string name;
    std::string hours;
    std::string payment;
    std::string fuelPrice;

    for (int i = 0; i < line.size() - 1; i++) {
        if (line[i] != ' ') {
            if (type == 0) {
                id += line[i];
            } else if (type == 1) {
                name += line[i];
            } else if (type == 2) {
                hours += line[i];
            } else if (type == 3) {
                payment += line[i];
            } else if (type == 4) {
                fuelPrice += line[i];
            }
        } else {
            type++;
        }
    }

    return Driver(atoi(id.c_str()), name, atoi(hours.c_str()), atoi(payment.c_str()), atoi(fuelPrice.c_str()));
}

Cleaner parseCleanerData(std::string line) {
    int type = -1;

    std::string id;
    std::string name;
    std::string hours;
    std::string payment;
    std::string tools;

    for (int i = 0; i < line.size() - 1; i++) {
        if (line[i] != ' ') {
            if (type == 0) {
                id += line[i];
            } else if (type == 1) {
                name += line[i];
            } else if (type == 2) {
                hours += line[i];
            } else if (type == 3) {
                payment += line[i];
            } else if (type == 4) {
                tools += line[i];
            }
        } else {
            type++;
        }
    }

    return Cleaner(atoi(id.c_str()), name, atoi(hours.c_str()), atoi(payment.c_str()), atoi(tools.c_str()));
}

Programmer parseProgrammerData(std::string line) {
    int type = -1;

    std::string id;
    std::string name;
    std::string hours;
    std::string payment;
    std::string partOfProject;

    for (int i = 0; i < line.size() - 1; i++) {
        if (line[i] != ' ') {
            if (type == 0) {
                id += line[i];
            } else if (type == 1) {
                name += line[i];
            } else if (type == 2) {
                hours += line[i];
            } else if (type == 3) {
                payment += line[i];
            } else if (type == 4) {
                partOfProject += line[i];
            }
        } else {
            type++;
        }
    }

    return Programmer(atoi(id.c_str()), name, atoi(hours.c_str()), atoi(payment.c_str()), atof(partOfProject.c_str()));
}

Tester parseTesterData(std::string line) {
    int type = -1;

    std::string id;
    std::string name;
    std::string hours;
    std::string payment;
    std::string partOfProject;
    std::string numberTests;

    for (int i = 0; i < line.size() - 1; i++) {
        if (line[i] != ' ') {
            if (type == 0) {
                id += line[i];
            } else if (type == 1) {
                name += line[i];
            } else if (type == 2) {
                hours += line[i];
            } else if (type == 3) {
                payment += line[i];
            } else if (type == 4) {
                partOfProject += line[i];
            } else if (type == 5) {
                numberTests += line[i];
            }
        } else {
            type++;
        }
    }

    return Tester(atoi(id.c_str()), name, atoi(hours.c_str()), atoi(payment.c_str()), atof(partOfProject.c_str()),
                  atoi(numberTests.c_str()));
}

TeamLeader parseTeamLeaderData(std::string line) {
    int type = -1;

    std::string id;
    std::string name;
    std::string hours;
    std::string payment;
    std::string partOfProject;
    std::string costOfCoder;

    for (int i = 0; i < line.size() - 1; i++) {
        if (line[i] != ' ') {
            if (type == 0) {
                id += line[i];
            } else if (type == 1) {
                name += line[i];
            } else if (type == 2) {
                hours += line[i];
            } else if (type == 3) {
                payment += line[i];
            } else if (type == 4) {
                partOfProject += line[i];
            } else if (type == 5) {
                costOfCoder += line[i];
            }
        } else {
            type++;
        }
    }

    return TeamLeader(atoi(id.c_str()), name, atoi(hours.c_str()), atoi(payment.c_str()), atof(partOfProject.c_str()),
                      atoi(costOfCoder.c_str()));
}

Manager parseManagerData(std::string line) {
    int type = -1;

    std::string id;
    std::string name;
    std::string hours;
    std::string payment;
    std::string partOfProject;

    for (int i = 0; i < line.size() - 1; i++) {
        if (line[i] != ' ') {
            if (type == 0) {
                id += line[i];
            } else if (type == 1) {
                name += line[i];
            } else if (type == 2) {
                hours += line[i];
            } else if (type == 3) {
                payment += line[i];
            } else if (type == 4) {
                partOfProject += line[i];
            }
        } else {
            type++;
        }
    }

    return Manager(atoi(id.c_str()), name, atoi(hours.c_str()), atoi(payment.c_str()), atof(partOfProject.c_str()));
}

ProjectManager parseProjectManagerData(std::string line) {
    int type = -1;

    std::string id;
    std::string name;
    std::string hours;
    std::string payment;
    std::string partOfProject;
    std::string costOfCoders;

    for (int i = 0; i < line.size() - 1; i++) {
        if (line[i] != ' ') {
            if (type == 0) {
                id += line[i];
            } else if (type == 1) {
                name += line[i];
            } else if (type == 2) {
                hours += line[i];
            } else if (type == 3) {
                payment += line[i];
            } else if (type == 4) {
                partOfProject += line[i];
            } else if (type == 5) {
                costOfCoders += line[i];
            }
        } else {
            type++;
        }
    }
    return ProjectManager(atoi(id.c_str()), name, atoi(hours.c_str()), atoi(payment.c_str()),
                          atof(partOfProject.c_str()), atoi(costOfCoders.c_str()));

}

SeniorManager parseSeniorManagerData(std::string line) {
    int type = -1;

    std::string id;
    std::string name;
    std::string hours;
    std::string payment;
    std::string partOfProject;
    std::string costOfCoders;

    for (int i = 0; i < line.size() - 1; i++) {
        if (line[i] != ' ') {
            if (type == 0) {
                id += line[i];
            } else if (type == 1) {
                name += line[i];
            } else if (type == 2) {
                hours += line[i];
            } else if (type == 3) {
                payment += line[i];
            } else if (type == 4) {
                partOfProject += line[i];
            } else if (type == 5) {
                costOfCoders += line[i];
            }
        } else {
            type++;
        }
    }
    return SeniorManager(atoi(id.c_str()), name, atoi(hours.c_str()), atoi(payment.c_str()),
                         atof(partOfProject.c_str()), atoi(costOfCoders.c_str()));

}

void outputEmployee(Employee *employee) {
    std::cout << "id=" << employee->getId() << " name=" << employee->getName() << " salary=" << employee->getSalary()
              << "р\n";
}

void startPreview() {
    std::cout.setf(std::ios_base::fixed);
    std::string line;
    std::ifstream in("preview.txt");

    std::vector<class Project> projects;
    int actualProject = -1;

    if (in.is_open()) {
        while (getline(in, line)) {
            if (line[0] == '<') {
                actualProject++;
                projects.push_back(parseProjectData(line));
                std::cout << "\nПроект: " << projects[actualProject].getTitle() << " Прибыль: "
                          << projects[actualProject].getBudget() << "р\n";
            } else {
                Position position = recognizePosition(line);
                if (position == UNDEFINED) {
                    return;
                } else {
                    if (position == DRIVER) {
                        Driver driver = parseDriverData(line);
                        std::cout << "Driver: ";
                        outputEmployee(&driver);
                    } else if (position == CLEANER) {
                        Cleaner cleaner = parseCleanerData(line);
                        std::cout << "Cleaner: ";
                        outputEmployee(&cleaner);
                    } else if (position == PROGRAMMER) {
                        Programmer programmer = parseProgrammerData(line);
                        programmer.setProject(&projects[actualProject]);
                        std::cout << "Programmer: ";
                        projects[actualProject].addEmployee(&programmer);
                        outputEmployee(&programmer);
                    } else if (position == TESTER) {
                        Tester tester = parseTesterData(line);
                        tester.setProject(&projects[actualProject]);
                        std::cout << "Tester: ";
                        projects[actualProject].addEmployee(&tester);
                        outputEmployee(&tester);
                    } else if (position == TEAM_LEADER) {
                        TeamLeader teamLeader = parseTeamLeaderData(line);
                        teamLeader.setProject(&projects[actualProject]);
                        std::cout << "Team Leader: ";
                        outputEmployee(&teamLeader);
                    } else if (position == MANAGER) {
                        Manager manager = parseManagerData(line);
                        manager.setProject(&projects[actualProject]);
                        std::cout << "Manager: ";
                        outputEmployee(&manager);
                    } else if (position == PROJECT_MANAGER) {
                        ProjectManager projectManager = parseProjectManagerData(line);
                        projectManager.setProject(&projects[actualProject]);
                        std::cout << "Project_Manager: ";
                        outputEmployee(&projectManager);
                    } else if (position == SENIOR_MANAGER) {
                        SeniorManager seniorManager = parseSeniorManagerData(line);
                        seniorManager.setProject(&projects[actualProject]);
                        std::cout << "Senior_Manager: ";
                        outputEmployee(&seniorManager);
                    }
                }
            }
        }
    }
}


#pragma clang diagnostic pop