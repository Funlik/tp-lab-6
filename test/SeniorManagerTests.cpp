#include "gtest/gtest.h"
#include "SeniorManager.h"

TEST(CreateSeniorManager, SeniorManagerTests)
{
    SeniorManager seniorManager(0, "SeniorManager Name", 100, 10000, 0.05, 10, 20);

    EXPECT_EQ(0, seniorManager.GetId());
    EXPECT_EQ("SeniorManager Name", seniorManager.GetName());
    EXPECT_EQ(100, seniorManager.GetWorktime());
    EXPECT_EQ(10000, seniorManager.GetBudget());
    EXPECT_FLOAT_EQ(0.05, seniorManager.GetShare());
    EXPECT_EQ(10, seniorManager.GetSubordinates());
    EXPECT_EQ(20, seniorManager.GetSubordinateBase());
}

TEST(CalculateSalary, SeniorManagerTests)
{
    SeniorManager seniorManager(0, "SeniorManager Name", 100, 10000, 0.05, 10, 20);

    EXPECT_EQ((int32_t)(10000 * 0.5), seniorManager.CalculateProjectSalary());
    EXPECT_EQ(20 * 10, seniorManager.CalculateHeadSalary());
    EXPECT_EQ((int32_t)(10000 * 0.5) + 20 * 10, seniorManager.CalculateSalary());
}
