#include "gtest/gtest.h"
#include "Cleaner.h"

TEST(CreateCleaner, CleanerTests)
{
    Cleaner cleaner(0, "Cleaner Name", 100);

    EXPECT_EQ(0, cleaner.GetId());
    EXPECT_EQ("Cleaner Name", cleaner.GetName());
    EXPECT_EQ(100, cleaner.GetWorktime());
    EXPECT_EQ(Cleaner::base, cleaner.GetBase());
}

TEST(CalculateSalary, CleanerTests)
{
    Cleaner cleaner(0, "Cleaner Name", 100);

    EXPECT_EQ(Cleaner::base * 100, cleaner.CalculateWorkTimeSalary());
    EXPECT_EQ(Cleaner::base * 100, cleaner.CalculateSalary());
}