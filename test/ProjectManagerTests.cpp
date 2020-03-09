#include "gtest/gtest.h"
#include "ProjectManager.h"

TEST(CreateProjectManager, ProjectManagerTests)
{
    ProjectManager projectManager(0, "ProjectManager Name", 100, 10000, 0.05, 10, 20);

    EXPECT_EQ(0, projectManager.GetId());
    EXPECT_EQ("ProjectManager Name", projectManager.GetName());
    EXPECT_EQ(100, projectManager.GetWorktime());
    EXPECT_EQ(10000, projectManager.GetBudget());
    EXPECT_FLOAT_EQ(0.05, projectManager.GetShare());
    EXPECT_EQ(10, projectManager.GetSubordinates());
    EXPECT_EQ(20, projectManager.GetSubordinateBase());
}

TEST(CalculateSalary, ProjectManagerTests)
{
    ProjectManager projectManager(0, "ProjectManager Name", 100, 10000, 0.05, 10, 20);

    EXPECT_EQ((int32_t)(10000 * 0.5), projectManager.CalculateProjectSalary());
    EXPECT_EQ(20 * 10, projectManager.CalculateHeadSalary());
    EXPECT_EQ((int32_t)(10000 * 0.5) + 20 * 10, projectManager.CalculateSalary());
}
