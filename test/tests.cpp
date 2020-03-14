#include "gtest/gtest.h"

#include "includeHeader.h"
#include "Employee.h"
#include "Engineer.h"
#include "Personal.h"
#include "Manager.h"

TEST(lab6, personal_check)
{
    Cleaner* cl = new Cleaner(1, "nam", 2);
    EXPECT_EQ(0, cl->paymentCount());
    cl->setWorkTime(2);
    EXPECT_EQ(4, cl->paymentCount());
}

TEST(lab6, engineer_check)
{
    Tester* ts = new Tester(1, "nam", "team", 2, 2);
    EXPECT_EQ(2, ts->paymentCount());
    ts->setWorkTime(2);
    EXPECT_EQ(6, ts->paymentCount());
}

TEST(lab5, manager_test)
{
    ProjectManager* pm = new ProjectManager(1, "name", "team", 3, 3);
    EXPECT_EQ(6, cl->paymentCount());
    pm->setWorkTime(2);
    EXPECT_EQ(6, cl->paymentCount());
}




