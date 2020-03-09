#include "gtest/gtest.h"
#include "Manager.h"

TEST(CreateManager, ManagerTests)
{
    Manager manager(0, "Manager Name", 100, 10000, 0.05);

    EXPECT_EQ(0, manager.GetId());
    EXPECT_EQ("Manager Name", manager.GetName());
    EXPECT_EQ(100, manager.GetWorktime());
    EXPECT_EQ(10000, manager.GetBudget());
    EXPECT_FLOAT_EQ(0.05, manager.GetShare());
}

TEST(CalculateSalary, ManagerTests)
{
    Manager manager(0, "Manager Name", 100, 10000, 0.05);

    EXPECT_EQ((int32_t)(10000 * 0.5), manager.CalculateProjectSalary());
    EXPECT_EQ((int32_t)(10000 * 0.5), manager.CalculateSalary());
}
