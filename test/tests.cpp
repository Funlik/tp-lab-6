#include "gtest/gtest.h"
#include "Cleaner.h"
#include "Driver.h"
#include "TeamLeader.h"
#include "Tester.h"
#include "SeniorManager.h"
#include "Factory.h"
#include "Stuff.h"


TEST(classTest, TestCleaner) {
    Cleaner unit(0, "new", 30, 20);
    EXPECT_EQ(unit.getPayment(), 600);
}

TEST(classTest, TestDriver) {
    Driver unit(0, "new", 30, 20, 1.5);
    EXPECT_EQ(unit.getPayment(), 900);
}

TEST(classTest, TestProgrammer) {
    Programmer unit(1, "new", 30, 20, "hse", 300, 0.3);
    EXPECT_EQ(unit.getPayment(), 690);
}

TEST(classTest, TestTester) {
    Programmer unit(1, "new", 20, 20, "hse", 300, 0.4);
    EXPECT_EQ(unit.getPayment(), 520);
}

TEST(classTest, TestTeamLeader) {
    Programmer unit1(1, "new", 30, 20, "hse", 300, 0.3);
    TeamLeander unit(2, "TeamLeader", 30, 30, "hse", 300, 0.4, 20);
    unit.addSubProgrammer(&unit1);
    EXPECT_EQ(unit.getPayment(), 1040);
}

TEST(classTest, TestManager) {
    Manager unit(2, "Manager", "nstu", 400, 0.1);
    EXPECT_EQ(unit.getPayment(), 40);
}

TEST(classTest, TestProjectManager) {
    Manager unit1(2, "Manager", "nstu", 400, 0.1);
    Manager unit2(3, "Manager", "nstu", 400, 0.1);
    ProjectManager unit(4, "PM", "nstu", 400, 0.5, 31);
    unit.addSubManager(&unit1);
    unit.addSubManager(&unit2);
    EXPECT_EQ(unit.getPayment(), 262);
}

TEST(classTest, TestSenioManager) {
    Programmer unit1(1, "new", 30, 20, "hse", 300, 0.1);
    TeamLeander unit2(2, "TeamLeader", 30, 30, "hse", 300, 0.4, 20);
    unit2.addSubProgrammer(&unit1);
    ProjectManager unit3(2, "PM", "hse", 300, 0.3, 20);
    unit3.addSubProgrammer(&unit1);
    SeniorManager unit(5, "SM", "hse", 300, 0.2, 100);
    unit.addSubProjectManagers(&unit3);
    unit.addSubProgrammer(&unit1);
    unit.addSubTeamLeaders(&unit2);
    EXPECT_EQ(unit.getPayment(), 360);
}

TEST(factoryTest, TestCleaner) {
    Stuff token("Cleaner", 0, "Cleaner", 40, 40, "", 0, 0, 0, 0);
    Factory factory;
    Cleaner* unit = (Cleaner*)factory.createEmployee(token);
    EXPECT_EQ(unit->getId(), 0);
    EXPECT_EQ(unit->getName(), "Cleaner");
    EXPECT_EQ(unit->getWorktime(), 40);
    EXPECT_EQ(unit->getBase(), 40);
}

TEST(factoryTest, TestDriver) {
    Stuff token("Driver", 0, "Driver", 40, 40, "", 0, 0, 0, 1.5);
    Factory factory;
    Driver* unit = (Driver*)factory.createEmployee(token);
    EXPECT_EQ(unit->getId(), 0);
    EXPECT_EQ(unit->getName(), "Driver");
    EXPECT_EQ(unit->getWorktime(), 40);
    EXPECT_EQ(unit->getBase(), 40);
    EXPECT_DOUBLE_EQ(unit->getOvertimeCorfficient(), 1.5);
}

TEST(factoryTest, TestProgrammer) {
    Stuff token("Programmer", 0, "Programmer", 40, 40, "hse", 300, 0.3, 0, 0);
    Factory factory;
    Programmer* unit = (Programmer*)factory.createEmployee(token);
    EXPECT_EQ(unit->getId(), 0);
    EXPECT_EQ(unit->getName(), "Programmer");
    EXPECT_EQ(unit->getWorktime(), 40);
    EXPECT_EQ(unit->getBase(), 40);
    EXPECT_EQ(unit->getProjectName(), "hse");
    EXPECT_EQ(unit->getProjectBudget(), 300);
    EXPECT_DOUBLE_EQ(unit->getPercent(), 0.3);
}

TEST(factoryTest, TestTester) {
    Stuff token("Tester", 0, "Tester", 40, 40, "hse", 300, 0.3, 0, 0);
    Factory factory;
    Tester* unit = (Tester*)factory.createEmployee(token);
    EXPECT_EQ(unit->getId(), 0);
    EXPECT_EQ(unit->getName(), "Tester");
    EXPECT_EQ(unit->getWorktime(), 40);
    EXPECT_EQ(unit->getBase(), 40);
    EXPECT_EQ(unit->getProjectName(), "hse");
    EXPECT_EQ(unit->getProjectBudget(), 300);
    EXPECT_DOUBLE_EQ(unit->getPercent(), 0.3);
}

TEST(factoryTest, TestTeamLeader) {
    Stuff token("TeamLeader", 0, "TL", 40, 40, "hse", 300, 0.3, 2, 0);
    Factory factory;
    TeamLeander* unit = (TeamLeander*)factory.createEmployee(token);
    EXPECT_EQ(unit->getId(), 0);
    EXPECT_EQ(unit->getName(), "TL");
    EXPECT_EQ(unit->getWorktime(), 40);
    EXPECT_EQ(unit->getBase(), 40);
    EXPECT_EQ(unit->getProjectName(), "hse");
    EXPECT_EQ(unit->getProjectBudget(), 300);
    EXPECT_DOUBLE_EQ(unit->getPercent(), 0.3);
    EXPECT_EQ(unit->getHeadingBase(), 2);
}

TEST(factoryTest, TestManager) {
    Stuff token("Manager", 0, "Manager", 0, 0, "hse", 300, 0.3, 0, 0);
    Factory factory;
    Manager* unit = (Manager*)factory.createEmployee(token);
    EXPECT_EQ(unit->getId(), 0);
    EXPECT_EQ(unit->getName(), "Manager");
    EXPECT_EQ(unit->getProjectName(), "hse");
    EXPECT_EQ(unit->getProjectBudget(), 300);
    EXPECT_DOUBLE_EQ(unit->getPercent(), 0.3);
}

TEST(factoryTest, TestProjectManager) {
    Stuff token("ProjectManager", 0, "PM", 0, 0, "hse", 300, 0.3, 2, 0);
    Factory factory;
    ProjectManager* unit = (ProjectManager*)factory.createEmployee(token);
    EXPECT_EQ(unit->getId(), 0);
    EXPECT_EQ(unit->getName(), "PM");
    EXPECT_EQ(unit->getProjectName(), "hse");
    EXPECT_EQ(unit->getProjectBudget(), 300);
    EXPECT_DOUBLE_EQ(unit->getPercent(), 0.3);
    EXPECT_EQ(unit->getHeadingBase(), 2);
}

TEST(factoryTest, TestSeniorManager) {
    Stuff token("SeniorManager", 0, "SM", 0, 0, "hse", 300, 0.3, 2, 0);
    Factory factory;
    SeniorManager* unit = (SeniorManager*)factory.createEmployee(token);
    EXPECT_EQ(unit->getId(), 0);
    EXPECT_EQ(unit->getName(), "SM");
    EXPECT_EQ(unit->getProjectName(), "hse");
    EXPECT_EQ(unit->getProjectBudget(), 300);
    EXPECT_DOUBLE_EQ(unit->getPercent(), 0.3);
    EXPECT_EQ(unit->getHeadingBase(), 2);
}