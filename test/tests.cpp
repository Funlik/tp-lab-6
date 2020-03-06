#include "gtest/gtest.h"
#include "Factory.h"

TEST(Test, TestNum) 
{
  Factory f;
  f.readWorkers("workers.txt");
  EXPECT_EQ(f.getNum(), 20);
}

TEST(Test, TestGetID) 
{
  Factory f;
  f.readWorkers("workers.txt");
  EXPECT_EQ((f.getCleaners()[0]).getId(), 1);
}

TEST(Test, TestGetName) 
{
  Factory f;
  f.readWorkers("workers.txt");
  EXPECT_EQ((f.getCleaners()[0]).getName(), "Cleaner_1");
}
