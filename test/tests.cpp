#include "gtest/gtest.h"
#include "Factory.h"

TEST(tplab6, TeamLeader_1) {
	Projects* project_1 = new Projects("project_1", 200000);
	vector<Projects*> projects{ project_1 };
	Factory EmpFactory(projects);
	vector <string> info("Deni Lee", "TeamLeader", 0.3, 2000, "project_1", 6); // 0.3 * 200000 + 2000 * 70 + 1500 * 6
	Employee* Emp = EmpFactory.create(info);
	Emp->calcpayment();
	EXPECT_EQ(Emp->getpayment(), 209000);
}

TEST(tplab6, Employee_1_get) {
	Projects* project_1 = new Projects("project_1", 200000);
	vector<Projects*> projects{ project_1 };
	Factory EmpFactory(projects);
	vector <string> info("Deni Lee", "Driver", 250);
	Employee* Emp = EmpFactory.create(info);
	Emp->calcpayment();
	EXPECT_EQ(Emp->getpayment(), 17500);
	EXPECT_EQ(Emp->getfio, "Deni Lee");
}

TEST(tplab6, SeniorManager_1) {
	Projects* project_1 = new Projects("project_1", 200000);
	Projects* project_2 = new Projects("project_2", 330000);
	Projects* project_3 = new Projects("project_3", 120000);
	vector<Projects*> projects{ project_1, project_2, project_3 };
	Factory EmpFactory(projects);
	vector <string> info("Deni Lee", "SeniorManager", 0.15, 15); // 0.15 * (650000) + 15 * 2000
	Employee* Emp = EmpFactory.create(info);
	Emp->calcpayment();
	EXPECT_EQ(Emp->getpayment(), 127500);
}
