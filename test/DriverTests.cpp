#include "gtest/gtest.h"
#include "Driver.h"

TEST(CreateDriver, DriverTests)
{
    Driver driver(0, "Driver Name", 100);

    EXPECT_EQ(0, driver.GetId());
    EXPECT_EQ("Driver Name", driver.GetName());
    EXPECT_EQ(100, driver.GetWorktime());
    EXPECT_EQ(Driver::base, driver.GetBase());
}

TEST(CalculateSalary, DriverTests)
{
    Driver driver(0, "Driver Name", 100);

    EXPECT_EQ(Driver::base * 100, driver.CalculateWorkTimeSalary());
    EXPECT_EQ(Driver::base * 100, driver.CalculateSalary());
}
