#include "gtest/gtest.h"

#include "Company"
TEST(lab6, test1){
    ProjectTeam team(100, std::string("OPENCV"));
	std::string result = "OPENCV";
	EXPECT_EQ(team.getName(), result);
}

TEST(lab6, test2){
    ProjectTeam team(100, std::string("OPENCV"));
	int result = 100;
	EXPECT_EQ(team.getValue(), result);
}

TEST(lab6, test3){
    Programmer programmer(42, "Bill Gates", 200000, 50);
    programmer.calculatePaymentByProjectPart(1000000);
    programmer.setTime(40);
    programmer.calculatePaymentByTime();
	
	int result = 42;
	EXPECT_EQ(programmer.getId(), result);
}

TEST(lab6, test4){
    Programmer programmer(42, "Bill Gates", 200000, 50);
    programmer.calculatePaymentByProjectPart(1000000);
    programmer.setTime(40);
    programmer.calculatePaymentByTime();
	
	int result = 200000 * 40 + 0.5 * 1000000;
	EXPECT_EQ(programmer.getPayment(), result);
}	

TEST(lab6, test5){
    Programmer programmer(42, "Bill Gates", 200000, 50);
    programmer.calculatePaymentByProjectPart(1000000);
    programmer.setTime(40);
    programmer.calculatePaymentByTime();
	
	std::string result = "Bill Gates";
	EXPECT_EQ(programmer.getName(), result);
}

TEST(lab6, test6){
    Programmer programmer(42, "Bill Gates", 200000, 50);
    programmer.calculatePaymentByProjectPart(1000000);
    programmer.setTime(40);
    programmer.calculatePaymentByTime();
	
	int result = 40;
	EXPECT_EQ(programmer.getWorkTime(), result);
}

TEST(lab6, test7){
    Programmer programmer(42, "Bill Gates", 200000, 50);
    programmer.calculatePaymentByProjectPart(1000000);
    programmer.setTime(40);
    programmer.calculatePaymentByTime();
	
	int result = 200000;
	EXPECT_EQ(programmer.getSalaryForHour(), result);
}

TEST(lab6, test8){
    Driver driver(12, "Michael Schumacher", 10000);
    driver.setTime(12);
    driver.calculatePaymentByTime();
   
	int result = 120000;
	EXPECT_EQ(driver.getPayment(), result);
}

TEST(lab6, test9){	
    ProjectManager projectManager(2, "Alexey Pchelkin", 3, 1000, 6);
    projectManager.setTime(100);
    projectManager.calculatePaymentByProjectPart(1000);
    projectManager.calculatePaymentByHeading();
    		
	int result = 6030;
	EXPECT_EQ(projectManager.getPayment(), result);
}

TEST(lab6, test10){	
    SeniorManager seniorManager(1, "Doroshenko Nikita", 100, 50000, 28);
    seniorManager.calculatePayment({50000, 100000});
    std::cout << seniorManager.getPayment();        		
	
	int result = 1550000;
	EXPECT_EQ(seniorManager.getPayment(), result);
}
