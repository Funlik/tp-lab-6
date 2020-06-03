#include "gtest/gtest.h"
#include "../include/Company.h"

TEST(testCleaner, task1)
{
	Cleaner *c = new Cleaner(1, "Test", 120, 500);
	EXPECT_EQ(c->payroll(), 60000);
}

TEST(testEngineer, task2)
{
	Engineer *e = new Engineer(2, "Test2", 130, 500);
	EXPECT_EQ(e->payroll(), 65000);
}

TEST(testProgrammer, task3)
{
	Programmer *p = new Programmer(3, "Test3", 150, 500);
	EXPECT_EQ(p->payroll(), 75000);
} 