#include "gtest/gtest.h"
#include "Driver.h"
#include "ProjectBudget.h"
#include "Programmer.h"
#include "TeamLeader.h"

TEST(task1, case_1) {
    Driver* driver = new Driver(0, "Ryan Gosling", 240);
    EXPECT_EQ(driver->getPayment(), 54720);
}

TEST(task1, case_2) {
    ProjectBudget* project = new ProjectBudget("Some project", 600000);
    Programmer* prog1 = new Programmer(0, "Petya", 25, project);
    Programmer* prog2 = new Programmer(1, "Vasya", 20, project);
    Programmer* prog3 = new Programmer(2, "Sasha", 13, project);
    Programmer* prog4 = new Programmer(3, "Sereja", 17, project);
    EXPECT_EQ(prog2->getPayment(), 166440);
}

TEST(task1, case_3) {
    ProjectBudget* project = new ProjectBudget("Another project", 160000);
    Programmer* prog1 = new Programmer(0, "DATA EXPUNGED", 25, project);
    Programmer* prog2 = new Programmer(1, "DATA EXPUNGED", 25, project);
    TeamLeader* teamlead = new TeamLeader(2, "DATA EXPUNGED", 30, project);
    EXPECT_EQ(teamlead->getPayment(), 75274);
}