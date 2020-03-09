#include "gtest/gtest.h"
#include "Cleaner.h"
#include "Driver.h"
#include "TeamLeader.h"
#include "Tester.h"
#include "SeniorManager.h"
#include "Factory.h"
#include "Stuff.h"


TEST(labTest, TestCleaner) {
    Cleaner unit(0, "new", 30, 20);
    EXPECT_EQ(unit.getPayment(), 600);
}

TEST(labTest, TestDriver) {
    Driver unit(0, "new", 30, 20, 1.5);
    EXPECT_EQ(unit.getPayment(), 900);
}

TEST(labTest, TestProgrammer) {
    Programmer unit(1, "new", 30, 20, "hse", 300, 0.3);
    EXPECT_EQ(unit.getPayment(), 690);
}

TEST(labTest, TestTester) {
    Programmer unit(1, "new", 20, 20, "hse", 300, 0.4);
    EXPECT_EQ(unit.getPayment(), 520);
}

TEST(labTest, TestTeamLeader) {
    Programmer unit1(1, "new", 30, 20, "hse", 300, 0.3);
    TeamLeander unit(2, "TeamLeader", 30, 30, "hse", 300, 0.4, 20);
    unit.addSubProgrammer(&unit1);
    EXPECT_EQ(unit.getPayment(), 1040);
}

TEST(labTest, TestManager) {
    Manager unit(2, "Manager", "nstu", 400, 0.1);
    EXPECT_EQ(unit.getPayment(), 40);
}

TEST(labTest, TestProjectManager) {
    Manager unit1(2, "Manager", "nstu", 400, 0.1);
    Manager unit2(3, "Manager", "nstu", 400, 0.1);
    ProjectManager unit(4, "PM", "nstu", 400, 0.5, 31);
    unit.addSubManager(&unit1);
    unit.addSubManager(&unit2);
    EXPECT_EQ(unit.getPayment(), 262);
}

TEST(labTest, TestSenioManager) {
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