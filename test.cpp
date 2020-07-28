#include "gtest/gtest.h"
#include "Employee.h"
#include "Factory.h"
#include "Personal.h"
#include "Manager.h"
#include "Engineer.h"

TEST(Lab6Test1, CleanerTest) {
Factory* office = new Factory();
Employee* cleaner = office->NewEmployee("Cleaner", 1, "John", 20, 100, 0);
cleaner->CalculatePayment();
EXPECT_EQ(cleaner->GetPayment(), 2000);
}

TEST(Lab6Test2, DriverTest) {
Factory* office = new Factory();
Employee* driver = office->NewEmployee("Driver", 2, "Kim", 20, 200, 0);
driver->CalculatePayment();
EXPECT_EQ(driver->GetPayment(), 4000);
}

TEST(Lab6Test3, ProgrammerTest) {
Factory* office = new Factory();
Employee* programmer = office->NewEmployee("Programmer", 3, "Sara", 30, 500, 0);
programmer->CalculatePayment(5, 30000);
EXPECT_EQ(programmer->GetPayment(), 16500);
}

TEST(Lab6Test4, TesterTest) {
Factory* office = new Factory();
Employee* tester = office->NewEmployee("Tester", 4, "Mike", 25, 400, 0);
tester->CalculatePayment(4, 30000);
EXPECT_EQ(tester->GetPayment(), 11200);
}

TEST(Lab6Test5, TeamLeaderTest) {
Factory* office = new Factory();
Employee* teamleader = office->NewEmployee("TeamLeader", 5, "Joanna", 30, 600, 0);
Employee* programmer1 = office->NewEmployee("Programmer", 1, "Karl", 30, 500, 0);
Employee* programmer2 = office->NewEmployee("Programmer", 2, "Kat", 30, 500, 0);
teamleader.AddProgrammer(programmer1);
teamleader.AddProgrammer(programmer2);
teamleader->CalculatePayment(5, 30000, 300);
EXPECT_EQ(teamleader->GetPayment(), 20100);
}

TEST(Lab6Test6, ManagerTest) {
Factory* office = new Factory();
Employee* manager = office->NewEmployee("Manager", 6, "Jackson", 25, 700, 20);
manager->CalculatePayment(20, 30000);
EXPECT_EQ(manager->GetPayment(), 6000);
}

TEST(Lab6Test7, ProjectManagerTest) {
Factory* office = new Factory();
Employee* projectmanager = office->NewEmployee("ProjectManager", 7, "Loan", 30, 800, 20);
Employee* manager1 = office->NewEmployee("Manager", 1, "Ollson", 25, 700, 10);
Employee* manager2 = office->NewEmployee("Manager", 2, "Jacob", 25, 700, 10);
projectmanager.AddManager(manager1);
projectmanager.AddManager(manager2);
projectmanager->CalculatePayment(20, 30000, 350);
EXPECT_EQ(projectmanager->GetPayment(), 6700);
}

TEST(Lab6Test8, SeniorManagerTest) {
Factory* office = new Factory();
Employee* seniormanager = office->NewEmployee("SeniorManager", 8, "Jake", 30, 800, 20);
Employee* prmanager1 = office->NewEmployee("ProjectManager", 1, "Kate", 30, 800, 15);
Employee* prmanager2 = office->NewEmployee("ProjectManager", 2, "Katrin", 30, 800, 15);
seniormanager.AddProjMan(prmanager1);
seniormanager.AddProjMan(prmanager2);
seniormanager->CalculatePayment(23, 30000, 400);
EXPECT_EQ(seniormanager->GetPayment(), 7700);
} 