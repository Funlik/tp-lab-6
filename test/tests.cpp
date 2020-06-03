#include "gtest/gtest.h"
#include "senior_manager.h"

TEST(lab6, test1)
{
    SeniorManager* seniorManager = new SeniorManager("1", "John Smith", "Senior manager", "Zennolab", 0.7, 30, 4000);
    seniorManager->Calculate();
    EXPECT_EQ(seniorManager->GetSalary(), 609999);
}
