#include "gtest/gtest.h"
#include "Factory.h"
TEST(lab6, task1)
{
	Cleaner* cleaner = new Cleaner(1,"Gerard Brent Mervin", 250);
	EXPECT_EQ(cleaner->get_salary(), 10000);
}

TEST(lab6, task2)
{
	Driver* driver = new Driver(2, "David Milo David", 500);
	EXPECT_EQ(driver->get_salary(), 20000);
}

TEST(lab6, task3)
{
	Programmer* programmer = new Programmer(3, "Gerard Brent Mervin", 1000, 0.05, &find_project("OpenVino"));
	EXPECT_EQ(programmer->get_salary(), 65000);
}