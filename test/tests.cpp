#include "gtest/gtest.h"
#include "interfaces.h"
#include "abstracts.h"
#include "basic.h"
#include "factory.h"
#include <map>
#include <vector>
#include <string>


extern map <string, int> projects;

//1 Petrov Alexander Izmailovich Cleaner 200
TEST(CalculationsTests, TestCleaner) {
    vector<string> worker = {"1", "Petrov", "Alexander", "Izmailovich", "Cleaner", "200", "40"};
    Employee* p = Factory::createEmployee(worker);
    int worktime = 40;
    p->setTime(worktime);
    p->calcPayment();
    EXPECT_EQ(p->getPayment(), 8000);
}

//3 Maybonov Anton Vladlenovich Driver 300 500
TEST(CalculationsTests, TestDriver) {
    vector<string> worker = {"1", "Maybonov", "Anton", "Vladlenovich", "Driver", "300", "500"};
    Employee* p = Factory::createEmployee(worker);
    int worktime = 40;
    p->setTime(worktime);
    p->calcPayment();
    EXPECT_EQ(p->getPayment(), 12500);

}

//15 Kolosov Fedor Sergeevich Programmer 400 0.1 PJCTName
TEST(CalculationsTests, TestProgrammer) {
    projects["PJCTName"] = 100000;
    vector<string> worker = {"1", "Kolosov", "Fedor", "Sergeevich", "Programmer", "400", "0.1", "PJCTName"};
    Employee* p = Factory::createEmployee(worker);
    int worktime = 40;
    p->setTime(worktime);
    p->calcPayment();
    EXPECT_EQ(p->getPayment(), 26000);
}

//15 Kolosov Fedor Sergeevich Tester 400 0.1 PJCTName
TEST(CalculationsTests, TestTester) {
    projects["PJCTName"] = 100000;
    vector<string> worker = {"1", "Kolosov", "Fedor", "Sergeevich", "Tester", "400", "0.1", "PJCTName"};
    Employee* p = Factory::createEmployee(worker);
    int worktime = 40;
    p->setTime(worktime);
    p->calcPayment();
    EXPECT_EQ(p->getPayment(), 26000);
}

//12 Pavlov Andrey Matveyevich TeamLeader 400 0.2 PJCTName 4 400
TEST(CalculationsTests, TestTeamLeader) {
    projects["PJCTName"] = 100000;
    vector<string> worker = {"1", "Pavlov", "Fedor", "Matveyevich", "TeamLeader", "400", "0.2", "PJCTName", "4", "400"};
    Employee* p = Factory::createEmployee(worker);
    int worktime = 40;
    p->setTime(worktime);
    p->calcPayment();
    EXPECT_EQ(p->getPayment(), 37600);
}

//1 Artemov Artem Atemovich Manager 0.1 PJCTName
TEST(CalculationsTests, TestManager) {
    projects["PJCTName"] = 100000;
    vector<string> worker = {"1", "Artemov", "Fedor", "Atemovich", "Manager", "0.1", "PJCTName"};
    Employee* p = Factory::createEmployee(worker);
    int worktime = 40;
    p->setTime(worktime);
    p->calcPayment();
    EXPECT_EQ(p->getPayment(), 10000);
}

//5 Gujin Petr Adrianovich ProjectManager 0.1 PJCTName 6 500
TEST(CalculationsTests, TestProjectManager) {
    projects["PJCTName"] = 100000;
    vector<string> worker = {"1", "Gujin", "Fedor", "Adrianovich", "ProjectManager", "0.2", "PJCTName", "6", "500"};
    Employee* p = Factory::createEmployee(worker);
    int worktime = 40;
    p->setTime(worktime);
    p->calcPayment();
    EXPECT_EQ(p->getPayment(), 23000);
}

//13 Sorokin Vlad Mironovich SeniorManager 0.2 16 700
TEST(CalculationsTests, TestSeniorManager) {
    projects["PJCTName"] = 100000;
    vector<string> worker = {"1", "Sorokin", "Vlad", "Adrianovich", "SeniorManager", "0.2", "16", "700"};
    Employee* p = Factory::createEmployee(worker);
    int worktime = 40;
    p->setTime(worktime);
    p->calcPayment();
    EXPECT_EQ(p->getPayment(), 31200);
}