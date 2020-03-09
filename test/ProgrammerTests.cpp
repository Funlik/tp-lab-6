#include "gtest/gtest.h"
#include "Programmer.h"

TEST(CreateProgrammer, ProgrammerTests)
{
    Programmer programmer(0, "Programmer Name", 100, 10000, 0.05);

    EXPECT_EQ(0, programmer.GetId());
    EXPECT_EQ("Programmer Name", programmer.GetName());
    EXPECT_EQ(100, programmer.GetWorktime());
    EXPECT_EQ(Programmer::base, programmer.GetBase());
    EXPECT_EQ(10000, programmer.GetBudget());
    EXPECT_EQ(0.05, programmer.GetShare());
}

TEST(CalculateSalary, ProgrammerTests)
{
    Programmer programmer(0, "Programmer Name", 100, 10000, 0.05);

    EXPECT_EQ(Programmer::base * 100, programmer.CalculateWorkTimeSalary());
    EXPECT_EQ((int32_t)(10000 * 0.05), programmer.CalculateProjectSalary());
    EXPECT_EQ(Programmer::base * 100 + (int32_t)(10000 * 0.05), programmer.CalculateSalary());
}
