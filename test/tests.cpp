#include "gtest/gtest.h"
#include "Project.h"
#include "WorkTime.h"
#include "Heading.h"
#include "Engineer.h"
#include "Employee.h"
#include "Manager.h"
#include "Personal.h"
#include "CompanyCreation.h"

TEST(test1, CleanerIDTest)
{
	CompanyCreation* company = new CompanyCreation();
	Employee* cleaner = company->addEmployee(1, "Cleaner", "Oliver", 40, 50, 0);

	EXPECT_EQ(cleaner->getID(), 1);
}

TEST(test2, DriverIDTest)
{
	CompanyCreation* company = new CompanyCreation();
	Employee* driver = company->addEmployee(2, "Driver", "Mark", 50, 50, 0);

	EXPECT_EQ(driver->getID(), 2);
}
