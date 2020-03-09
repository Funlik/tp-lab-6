#include "gtest/gtest.h"
#include "Project.h"
#include "WorkTime.h"
#include "Heading.h"
#include "Engineer.h"
#include "Employee.h"
#include "Manager.h"
#include "Personal.h"
#include "CompanyCreation.h"

TEST(test1, CleanerPaymentTest) 
{
	CompanyCreation* company = new CompanyCreation();
	Employee* cleaner = company->addEmployee(1, "Cleaner", "Taylor", 40, 50, 0);

	cleaner->calcPayment();
	EXPECT_EQ(cleaner->getPayment(), 2000);
}

TEST(test2, DriverPaymentTest) 
{
	CompanyCreation* company = new CompanyCreation();
	Employee* driver = company->addEmployee(2, "Driver", "Karl", 50, 50, 0);

	driver->calcPayment();
	EXPECT_EQ(driver->getPayment(), 2500);
}

TEST(test3, CleanerIDTest)
{
	CompanyCreation* company = new CompanyCreation();
	Employee* cleaner = company->addEmployee(3, "Cleaner", "Oliver", 40, 50, 0);

	EXPECT_EQ(cleaner->getID(), 3);
}

TEST(test4, DriverIDTest)
{
	CompanyCreation* company = new CompanyCreation();
	Employee* driver = company->addEmployee(4, "Driver", "Mark", 50, 50, 0);

	EXPECT_EQ(driver->getID(), 4);
}