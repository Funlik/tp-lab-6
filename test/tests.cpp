#include "gtest/gtest.h"
#include "CompanyCreator.h"

TEST(CompanyTests, CompanyTest1)
{
    auto* test_cleaner = new Cleaner(1000, "Natan", 40, 50);
    EXPECT_EQ("Natan", test_cleaner->getName());
}

TEST(CompanyTests, CompanyTest2)
{
    auto* test_driver = new Driver(256, "Antony", 20, 10);
    EXPECT_EQ(20, test_driver->getWorkTime());
}

TEST(CompanyTests, CompanyTest3)
{
    auto* test_tester = new Tester(5000, "Roland", 50, 60, 100);
    EXPECT_EQ(100, test_tester->getBonus());
}