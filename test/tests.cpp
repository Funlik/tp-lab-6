#include "gtest/gtest.h"

#include "Fabrika.h"

TEST(Cleaner, calculate_payment)
{
	WorkProject* project1 = new WorkProject("project_1", 150000);
	WorkProject* project2 = new WorkProject("project_2", 200000);
	WorkProject* project3 = new WorkProject("project_3", 270000);
	vector<WorkProject*> projects = { project1, project2, project3 };
	EmployeeFactory EmplFact = EmployeeFactory(projects);
	vector<string> data = { "Surname_1 First_name_1 Second_name_1", "Cleaner", "100" };
	Employee* employee = EmplFact.create(data);
	employee->solary();
	int emp_payment = employee->getpayment();
	EXPECT_EQ(emp_payment, 10000);
}

TEST(Driver, calculate_payment)
{
	WorkProject* project1 = new WorkProject("project_1", 150000);
	WorkProject* project2 = new WorkProject("project_2", 200000);
	WorkProject* project3 = new WorkProject("project_3", 270000);
	vector<WorkProject*> projects = { project1, project2, project3 };
	EmployeeFactory EmplFact = EmployeeFactory(projects);
	vector<string> data = { "Surname_2 First_name_2 Second_name_2", "Driver", "150" };
	Employee* employee = EmplFact.create(data);
	employee->solary();
	int emp_payment = employee->getpayment();
	EXPECT_EQ(emp_payment, 22500);
}

TEST(Programmer, calculate_payment)
{
	WorkProject* project1 = new WorkProject("project_1", 150000);
	WorkProject* project2 = new WorkProject("project_2", 200000);
	WorkProject* project3 = new WorkProject("project_3", 270000);
	vector<WorkProject*> projects = { project1, project2, project3 };
	EmployeeFactory EmplFact = EmployeeFactory(projects);
	vector<string> data = { "Surname_8 First_name_8 Second_name_8", "Programmer", "0.1", "10000", "200", "project_1" };
	Employee* employee = EmplFact.create(data);
	employee->solary();
	int emp_payment = employee->getpayment();
	EXPECT_EQ(emp_payment, 45000);
}

TEST(Tester, calculate_payment)
{
	WorkProject* project1 = new WorkProject("project_1", 150000);
	WorkProject* project2 = new WorkProject("project_2", 200000);
	WorkProject* project3 = new WorkProject("project_3", 270000);
	vector<WorkProject*> projects = { project1, project2, project3 };
	EmployeeFactory EmplFact = EmployeeFactory(projects);
	vector<string> data = { "Surname_14 First_name_14 Second_name_14", "Tester", "0.1", "15000", "150", "project_1" };
	Employee* employee = EmplFact.create(data);
	employee->solary();
	int emp_payment = employee->getpayment();
	EXPECT_EQ(emp_payment, 52500);
}

TEST(TeamLeader, calculate_payment)
{
	WorkProject* project1 = new WorkProject("project_1", 150000);
	WorkProject* project2 = new WorkProject("project_2", 200000);
	WorkProject* project3 = new WorkProject("project_3", 270000);
	vector<WorkProject*> projects = { project1, project2, project3 };
	EmployeeFactory EmplFact = EmployeeFactory(projects);
	vector<string> data = { "Surname_17 First_name_17 Second_name_17", "TeamLeader", "0.2", "15000", "200", "project_1", "3" };
	Employee* employee = EmplFact.create(data);
	employee->solary();
	int emp_payment = employee->getpayment();
	EXPECT_EQ(emp_payment, 66500);
}

TEST(Manager, calculate_payment)
{
	WorkProject* project1 = new WorkProject("project_1", 150000);
	WorkProject* project2 = new WorkProject("project_2", 200000);
	WorkProject* project3 = new WorkProject("project_3", 270000);
	vector<WorkProject*> projects = { project1, project2, project3 };
	EmployeeFactory EmplFact = EmployeeFactory(projects);
	vector<string> data = { "Surname_3 First_name_3 Second_name_3", "Manager", "0.2", "project_1" };
	Employee* employee = EmplFact.create(data);
	employee->solary();
	int emp_payment = employee->getpayment();
	EXPECT_EQ(emp_payment, 30000);
}

TEST(ProjectManager, calculate_payment)
{
	WorkProject* project1 = new WorkProject("project_1", 150000);
	WorkProject* project2 = new WorkProject("project_2", 200000);
	WorkProject* project3 = new WorkProject("project_3", 270000);
	vector<WorkProject*> projects = { project1, project2, project3 };
	EmployeeFactory EmplFact = EmployeeFactory(projects);
	vector<string> data = { "Surname_6 First_name_6 Second_name_6", "ProjectManager", "0.1", "project_1", "5" };
	Employee* employee = EmplFact.create(data);
	employee->solary();
	int emp_payment = employee->getpayment();
	EXPECT_EQ(emp_payment, 20000);
}

TEST(SeniorManager, calculate_payment)
{
	WorkProject* project1 = new WorkProject("project_1", 150000);
	WorkProject* project2 = new WorkProject("project_2", 200000);
	WorkProject* project3 = new WorkProject("project_3", 270000);
	vector<WorkProject*> projects = { project1, project2, project3 };
	EmployeeFactory EmplFact = EmployeeFactory(projects);
	vector<string> data = { "Surname_20 First_name_20 Second_name_20", "SeniorManager", "0.1", "17" };
	Employee* employee = EmplFact.create(data);
	employee->solary();
	int emp_payment = employee->getpayment();
	EXPECT_EQ(emp_payment, 9.3e+008);
}