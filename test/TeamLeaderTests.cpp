#include "gtest/gtest.h"
#include "TeamLeader.h"

TEST(CreateTeamLeader, TeamLeaderTests)
{
    TeamLeader teamLeader(0, "TeamLeader Name", 100, 10000, 0.05, 10, 20);

    EXPECT_EQ(0, teamLeader.GetId());
    EXPECT_EQ("TeamLeader Name", teamLeader.GetName());
    EXPECT_EQ(100, teamLeader.GetWorktime());
    EXPECT_EQ(ProgrammerBase, teamLeader.GetBase());
    EXPECT_EQ(10000, teamLeader.GetBudget());
    EXPECT_FLOAT_EQ(0.05, teamLeader.GetShare());
    EXPECT_EQ(10, teamLeader.GetSubordinates());
    EXPECT_EQ(20, teamLeader.GetSubordinateBase());
}

TEST(CalculateSalary, TeamLeaderTests)
{
    TeamLeader teamLeader(0, "TeamLeader Name", 100, 10000, 0.05, 10, 20);

    EXPECT_EQ(ProgrammerBase * 100, teamLeader.CalculateWorkTimeSalary());
    EXPECT_EQ((int32_t)(10000 * 0.05), teamLeader.CalculateProjectSalary());
    EXPECT_EQ(20 * 10, teamLeader.CalculateHeadSalary());
    EXPECT_EQ(ProgrammerBase * 100 + (int32_t)(10000 * 0.05) + 20 * 10, teamLeader.CalculateSalary());
}
