#include "gtest/gtest.h"
#include "Tester.h"

TEST(CreateTester, TesterTests)
{
    Tester tester(0, "Tester Name", 100, 10000, 0.05);

    EXPECT_EQ(0, tester.GetId());
    EXPECT_EQ("Tester Name", tester.GetName());
    EXPECT_EQ(100, tester.GetWorktime());
    EXPECT_EQ(Tester::base, tester.GetBase());
    EXPECT_EQ(10000, tester.GetBudget());
    EXPECT_EQ(0.05, tester.GetShare());
}

TEST(CalculateSalary, TesterTests)
{
    Tester tester(0, "Tester Name", 100, 10000, 0.05);

    EXPECT_EQ(Tester::base * 100, tester.CalculateWorkTimeSalary());
    EXPECT_EQ((int32_t)(10000 * 0.05), tester.CalculateProjectSalary());
    EXPECT_EQ(Tester::base * 100 + (int32_t)(10000 * 0.05), tester.CalculateSalary());
}
