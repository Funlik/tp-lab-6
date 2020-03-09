#include "gtest/gtest.h"
#include "Manager.h"
#include "Engineer.h"
#include "Personal.h"
//#include "Employee.h"
#include<iostream>
#include<string> 
#include<vector>
#include <algorithm>

TEST(lab6, task1)
{
	Cleaner clean(1, "Hart_Matthew", 40, 50);
	
	
	EXPECT_EQ(clean.getPayment(), 2000);
}
TEST(lab6, task2)
{
	Driver drive(1, "Boyd_John", 40, 70);


	EXPECT_EQ(drive.getPayment(), 2800);
}

TEST(lab6, task3)
{
	Programmer prog(20, "Rich_Preston", 40, 100, 0.1, "Project1", 1000000);

		
	EXPECT_EQ(prog.getPayment(), 104000);
}

TEST(lab6, task4)
{
	Tester prog(24, "Harmon_Oliver", 40, 100, 0.1, "Project1", 1000000);
	

	EXPECT_EQ(prog.getPayment(), 104000);
}

TEST(lab6, task5)
{
	TeamLeader prog(27, "Williamson_Duane", 40, 100, 0.1, "Project1", 1000000, 4);

	
	EXPECT_EQ(prog.getPayment(), 104200);
}

TEST(lab6, task6)
{
	Manager mag(14,"Goodman_Ferdinand", 40, 0.1,"Project1", 1000000);


	EXPECT_EQ(mag.getPayment(), 100000);
}

TEST(lab6, task7)
{
	ProjectManager mag(11, "Hutchinson_Mark", 40, 0.1, "Project1", 1000000, 7);


	EXPECT_EQ(mag.getPayment(), 100350);
}

TEST(lab6, task8)
{
	SeniorManager mag(10, "Franklin_Brian", 40, 0.1, "Project1", 1000000, 26);

	
	EXPECT_EQ(mag.getPayment(), 351300);
}








