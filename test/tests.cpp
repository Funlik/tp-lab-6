#include "gtest/gtest.h"

#include "Employee.h"
#include "Engineers.h"
#include "Interfaces.h"
#include "Managers.h"
#include "Personal.h"
#include "Task.h"
#include "Create.h"

TEST(lab6, test1){
	Task task("Project-47", 1000);
	
	int result = 1000;
	EXPECT_EQ(task.getCost(), result);
}

TEST(lab6, test2){
    Task task("Project-47", 1000);
	task.addMember("Ivan Chilimov", 3);
	task.addMember("Michail Pavlov", 2);
	
	int result = 2;
	EXPECT_EQ(task.getSize(), result);
}

TEST(lab6, test3){
    Task task("Project-47", 1000);
	task.addMember("Ivan Chilimov", 3);
	task.addMember("Michail Pavlov", 2);

	int result = 3;
	EXPECT_EQ(task.countContribution("Ivan Chilimov"), result);
}

TEST(lab6, test4){
	Driver driver(5, "Andrey Voronov", "Driver", 2000, 500);
	driver.setTime(40);
	driver.calcSalary();

	int result = 80500;
	EXPECT_EQ(driver.getPayment(), result);
}	

TEST(lab6, test5){
	Cleaner cleaner(7, "Ludmila Soloveva", "Cleaner", 44000);
	cleaner.setTime(5);
	cleaner.calcSalary();

	std::string result = "Ludmila Soloveva";
	EXPECT_EQ(cleaner.getName(), result);
}

TEST(lab6, test6){
	Task task("Project-43", 4000000);
	Programmer programmer(10, "Maxim Yahtin", "Programmer", 300, &task, 5);
	programmer.setTime(20);
	programmer.calcSalary();
	cout << programmer.getPayment();	
	
	int result = 206000;
	EXPECT_EQ(programmer.getPayment(), result);
}

TEST(lab6, test7){
   	Task task("Project-43", 4000000);
	
	TeamLeader teamLeader(50, "Ilya Doroshenko", "TeamLeader", 195000, &task, 25, 10000, 5);
	teamLeader.setTime(40);
	teamLeader.calcSalary();
	cout << teamLeader.getPayment();

	int result = 8850000;
	EXPECT_EQ(teamLeader.getPayment(), result);
}

TEST(lab6, test8){
	Task task("Project-43", 4000);
	
	Manager manager(100, "Tim Cook", "Manager", &task, 1);
	manager.calcSalary();
	
	int result = 40;
	EXPECT_EQ(manager.getPayment(), result);
}

TEST(lab6, test9){	
    Task task("Project-43", 4000);

	ProjectManager project_manager(4, "Igor Sapogkin", "ProjectManager", &task, 100, 400, 2);
	project_manager.calcSalary();
	
	int result = 4800;
	EXPECT_EQ(project_manager.getPayment(), result);
}

TEST(lab6, test10){		
	Task task("Project-43", 4000);

	SeniorManager senior_manager(9, "Alex Mishkin", "Senior Manager", { &task }, 53, 100, 21);
	senior_manager.calcSalary();
	
	int result = 4220;
	EXPECT_EQ(senior_manager.getPayment(), result);
}
