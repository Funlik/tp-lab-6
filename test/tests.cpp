//#include "pch.h"
#include "gtest/gtest.h"
#include "Cleaner.h"
#include "Employee.h"
#include "Engineer.h"
#include "Heading.h"
#include "Job.h"
#include "Manager.h"
#include "Personal.h"
#include "Project.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
#include "Programmer.h"
#include "Tester.h"
#include "WorkTime.h"
#include "TeamLeader.h"


 TEST(CalculationTest, Test1) {
	std::cout << "sdfxcv " << std::endl;
	Job* j = new Job();
	jobContainer container;
	container.id = 1;
	container.name = "1";
	container.workerID = 1;
	container.salary = 1000;
	container.percent = 0;
	container.worktime = 10;
	Cleaner* cleaner = (Cleaner*)j->makeEmployee(container);
	cleaner->calcPayment();
	EXPECT_EQ(cleaner->getPayment(), 1000);  
}
  
TEST(CalculationTest, Test2) {	
	Job* j = new Job();
	jobContainer container;
	container.id = 1;
	container.name = "1";
	container.workerID = 1;
	container.salary = 10000;
	container.percent = 0;
	container.worktime = 10;
	Driver* driver = (Driver*)j->makeEmployee(container);
	driver->calcPayment();
	EXPECT_EQ(driver->getPayment(), 1000);
}
TEST(CalculationTest, Test3) {
	
	Job* j = new Job();
	jobContainer container;
	container.id = 1;
	container.name = "1";
	container.workerID = 1;
	container.salary = 10000;
	container.percent = 0;
	container.worktime = 10;
	Programmer* cleaner = (Programmer*)j->makeEmployee(container);
	cleaner->calcPayment(10,20000);
	EXPECT_EQ(cleaner->getPayment(), 0);
}

