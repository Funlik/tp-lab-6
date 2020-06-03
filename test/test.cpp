//
// Created by aklen on 11.03.2020.
//
#include "gtest/gtest.h"
#include "Employee.h"
#include "Engineer.h"
#include "Manager.h"
#include "Personal.h"
#include "Factory.h"
#include <vector>
#include <string>

TEST(Tests, firstTest){
    Driver *driver = new Driver(1, "Andrey Klenkov Dmitrievich", 30, 500);
    EXPECT_EQ(driver->getPayment(), 15000);
}

TEST(Tests, secondTest){
    SeniorManager *seniorManager = new SeniorManager(1, "Andrey Klenkov Dmitrievich", 40, 1000, 2, 3000);
    EXPECT_EQ(seniorManager->getPayment(), 52000);
}

TEST(Tests, thirdTest){
    TeamLeader *teamLeader = new TeamLeader(1, "Andrey Klenkov Dmitrievich", 35, 1500, "project", 50000, 0.4, 2, 6000);
    EXPECT_EQ(teamLeader->getPayment(), 84500);
}
