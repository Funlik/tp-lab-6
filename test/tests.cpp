//#include "pch.h"
#include "Cleaner.h"
#include "Driver.h"
#include "Employee.h"
#include "Engineer.h"
#include "Factory.h"
#include "Heading.h"
#include "Manager.h"
#include "Personal.h"
#include "Programmer.h"
#include "Project.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
#include "TeamLeader.h"
#include "Tester.h"
#include "WorkTime.h"

//1 Bot1 1 1000 0 20 20000
TEST(CalculationsTests, TestCleaner) {
    Factory* f = new Factory();
	FactoryKey fk;
	fk.employee_id = 1;
	fk.name = "Bot1";
	fk.position_id = 1;
	fk.base = 1000;
	fk.percent = 0;
	fk.worktime = 20;
	Cleaner* p = (Cleaner*)f->makeEmployee(fk);
	p->Calc();
    EXPECT_EQ(p->getPayment(), 20000);
}

//2 Bot2 2 2000 0 20 40400
TEST(CalculationsTests, TestDriver) {
	Factory* f = new Factory();
	FactoryKey fk;
	fk.employee_id = 2;
	fk.name = "Bot2";
	fk.position_id = 2;
	fk.base = 2000;
	fk.percent = 0;
	fk.worktime = 20;
	Driver* p = (Driver*)f->makeEmployee(fk);
	p->Calc();
	EXPECT_EQ(p->getPayment(), 40400);
}

//3 Bot3 3 3000 0 20 61500
TEST(CalculationsTests, TestProgrammer) {
	Factory* f = new Factory();
	FactoryKey fk;
	fk.employee_id = 3;
	fk.name = "Bot3";
	fk.position_id = 3;
	fk.base = 3000;
	fk.percent = 0;
	fk.worktime = 20;
	Programmer* p = (Programmer*)f->makeEmployee(fk);
	p->Calc(15, 10000);
	EXPECT_EQ(p->getPayment(), 61500);
}

//4 Bot4 4 4000 0 20 81500
TEST(CalculationsTests, TestTester) {
	Factory* f = new Factory();
	FactoryKey fk;
	fk.employee_id = 4;
	fk.name = "Bot4";
	fk.position_id = 4;
	fk.base = 4000;
	fk.percent = 0;
	fk.worktime = 20;
	Tester* p = (Tester*)f->makeEmployee(fk);
	p->Calc(15, 10000);
	EXPECT_EQ(p->getPayment(), 81500);
}

//5 Bot5 5 5000 0 20 101500
TEST(CalculationsTests, TestTeamLeader) {
	Factory* f = new Factory();
	FactoryKey fk;
	fk.employee_id = 5;
	fk.name = "Bot5";
	fk.position_id = 5;
	fk.base = 5000;
	fk.percent = 0;
	fk.worktime = 20;
	TeamLeader* p = (TeamLeader*)f->makeEmployee(fk);
	p->Calc(15, 10000, 500);
	EXPECT_EQ(p->getPayment(), 101500);
}

//6 Bot6 6 0 5 20 1500
TEST(CalculationsTests, TestManager) {
	Factory* f = new Factory();
	FactoryKey fk;
	fk.employee_id = 6;
	fk.name = "Bot6";
	fk.position_id = 6;
	fk.base = 0;
	fk.percent = 5;
	fk.worktime = 20;
	Manager* p = (Manager*)f->makeEmployee(fk);
	p->Calc(15, 10000);
	EXPECT_EQ(p->getPayment(), 1500);
}

//7 Bot7 7 0 10 20 1500
TEST(CalculationsTests, TestProjectManager) {
	Factory* f = new Factory();
	FactoryKey fk;
	fk.employee_id = 7;
	fk.name = "Bot3";
	fk.position_id = 7;
	fk.base = 0;
	fk.percent = 10;
	fk.worktime = 20;
	ProjectManager* p = (ProjectManager*)f->makeEmployee(fk);
	p->Calc(15, 10000, 300);
	EXPECT_EQ(p->getPayment(), 1500);
}

//8 Bot8 8 0 15 20 1500
TEST(CalculationsTests, TestSeniorManager) {
	Factory* f = new Factory();
	FactoryKey fk;
	fk.employee_id = 8;
	fk.name = "Bot8";
	fk.position_id = 8;
	fk.base = 0;
	fk.percent = 15;
	fk.worktime = 20;
	SeniorManager* p = (SeniorManager*)f->makeEmployee(fk);
	p->Calc(15, 10000, 400);
	EXPECT_EQ(p->getPayment(), 1500);
}