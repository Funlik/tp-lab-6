#include "gtest/gtest.h"
#include "Factory.h"

TEST(CalculationsTests, TestNum) 
{
  Factory f;
  f.readWorkers("workers.txt");
  EXPECT_EQ(f..getNum(), 20);
}

TEST(CalculationsTests, TestGetID) 
{
  Factory f;
  f.readWorkers("workers.txt");
  EXPECT_EQ((f.getCleaners()[0]).getId(), 1);
}

TEST(CalculationsTests, TestGetName) 
{
  Factory f;
  f.readWorkers("workers.txt");
  EXPECT_EQ((f.getCleaners()[0]).getId(), "Cleaner_1");
}
