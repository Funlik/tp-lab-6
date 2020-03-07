#include "gtest/gtest.h"
#include "IT_project.h"
#include "TeamLeader.h"

TEST(task1, case_1) {
    IT_project* project = new IT_project('Project', 200000);
    TeamLeader* lid = new TeamLeader(11, 'Alexey Grishin', 40, 0.25, 500, project, 5, 300, 'TeamLeader');
    lid->calc();
    EXPECT_EQ(lid->getPayment(), 71500);
}