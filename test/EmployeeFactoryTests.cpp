#include "gtest/gtest.h"
#include "Cleaner.h"
#include "Driver.h"
#include "EmployeeFactory.h"
#include "TeamLeader.h"
#include "SeniorManager.h"

TEST(CreateCleaner, EmployeeFactory)
{
    EmployeeFactoryEntity entity(0, "Cleaner Name", 100, EmployeePosition::Cleaner, parameter_list_t());
    Cleaner *cleaner = (Cleaner *)EmployeeFactory::CreateEmployee(entity);

    EXPECT_EQ(0, cleaner->GetId());
    EXPECT_EQ("Cleaner Name", cleaner->GetName());
    EXPECT_EQ(100, cleaner->GetWorktime());
    EXPECT_EQ(CleanerBase, cleaner->GetBase());

    delete cleaner;
}

TEST(CreateDriver, EmployeeFactory)
{
    EmployeeFactoryEntity entity(0, "Driver Name", 100, EmployeePosition::Driver, parameter_list_t());
    Driver *driver = (Driver *)EmployeeFactory::CreateEmployee(entity);

    EXPECT_EQ(0, driver->GetId());
    EXPECT_EQ("Driver Name", driver->GetName());
    EXPECT_EQ(100, driver->GetWorktime());
    EXPECT_EQ(DriverBase, driver->GetBase());

    delete driver;
}

TEST(CreateTeamLeader, EmployeeFactory)
{
    EmployeeFactoryEntity entity(0, "TeamLeader Name", 100, EmployeePosition::TeamLeader, parameter_list_t { "10000", "0.05", "10", "20" });
    TeamLeader *teamLeader = (TeamLeader *)EmployeeFactory::CreateEmployee(entity);

    EXPECT_EQ(0, teamLeader->GetId());
    EXPECT_EQ("TeamLeader Name", teamLeader->GetName());
    EXPECT_EQ(100, teamLeader->GetWorktime());
    EXPECT_EQ(ProgrammerBase, teamLeader->GetBase());
    EXPECT_EQ(10000, teamLeader->GetBudget());
    EXPECT_FLOAT_EQ(0.05, teamLeader->GetShare());
    EXPECT_EQ(10, teamLeader->GetSubordinates());
    EXPECT_EQ(20, teamLeader->GetSubordinateBase());

    delete teamLeader;
}

TEST(CreateSeniorManager, EmployeeFactory)
{
    EmployeeFactoryEntity entity(0, "SeniorManager Name", 100, EmployeePosition::SeniorManager, parameter_list_t{ "10000", "0.05", "10", "20" });
    SeniorManager *seniorManager = (SeniorManager *)EmployeeFactory::CreateEmployee(entity);

    EXPECT_EQ(0, seniorManager->GetId());
    EXPECT_EQ("SeniorManager Name", seniorManager->GetName());
    EXPECT_EQ(100, seniorManager->GetWorktime());
    EXPECT_EQ(10000, seniorManager->GetBudget());
    EXPECT_FLOAT_EQ(0.05, seniorManager->GetShare());
    EXPECT_EQ(10, seniorManager->GetSubordinates());
    EXPECT_EQ(20, seniorManager->GetSubordinateBase());

    delete seniorManager;
}
