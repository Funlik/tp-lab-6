#include "gtest/gtest.h"
#include "../include/Engineer.h"
#include "../include/Manager.h"
#include "../include/Personal.h"
#include "../include/Factory.h"
#include "../include/Interfaces.h"


TEST(Cleaner, payment_1)
{
	Cleaner* cln = new Cleaner(1, "Cleaner", 10);
	cln->setWorktime(10);
	cln->calc();
	float payment = cln->getPayment();
	EXPECT_EQ(payment, 100);
	delete cln;
}

TEST(Driver, payment_2)
{
	Driver* drv = new Driver(1, "Driver", 20);
	drv->setWorktime(10);
	drv->calc();
	float payment = drv->getPayment();
	EXPECT_EQ(payment, 200);
	delete drv;
}

TEST(Programmer, payment_3)
{
	vector<string> projects{ "prj1" };
	vector<int> budget{ 1000 };
	vector<float> ratio{ 0.5 };
	Programmer* prg = new Programmer(1, "Programmer", 20,projects,ratio,budget);
	prg->setWorktime(10);
	prg->calc();
	float payment = prg->getPayment();
	EXPECT_EQ(payment, 700);
	delete prg;
}


TEST(Tester, payment_4)
{
	vector<string> projects{ "prj1" };
	vector<int> budget{ 2000 };
	vector<float> ratio{ 0.5 };
	Tester* tst = new Tester(1, "Tester", 20, projects, ratio, budget);
	tst->setWorktime(10);
	tst->calc();
	float payment = tst->getPayment();
	EXPECT_EQ(payment, 1200);
	delete tst;
}

TEST(TeamLeader, payment_5)
{
	vector<string> projects{ "prj1" };
	vector<int> budget{ 3000 };
	vector<float> ratio{ 0.5 };
	TeamLeader* tld = new TeamLeader(1, "TeamLeader", 20, projects, ratio, budget, 2);
	tld->setWorktime(10);
	tld->calc();
	float payment = tld->getPayment();
	EXPECT_EQ(payment, 2100);
	delete tld;
}

TEST(Manager, payment_6)
{
	vector<string> projects{ "prj1" };
	vector<int> budget{ 1000 };
	vector<float> ratio{ 0.5 };
	Manager* mng = new Manager(1, "Manager", projects, ratio, budget);
	mng->calc();
	float payment = mng->getPayment();
	EXPECT_EQ(payment, 500);
	delete mng;
}

TEST(ProjectManager, payment_7)
{
	vector<string> projects{ "prj1" };
	vector<int> budget{ 1000 };
	vector<float> ratio{ 0.5 };
	ProjectManager* pmng = new ProjectManager(1, "ProjectManager", projects, ratio, budget, 1);
	pmng->calc();
	float payment = pmng->getPayment();
	EXPECT_EQ(payment, 700);
	delete pmng;
}

TEST(SeniorManager, payment_8)
{
	vector<string> projects{ "prj1","prj2" };
	vector<int> budget{ 1000,2000 };
	vector<float> ratio{ 0.5, 0.5 };
	SeniorManager* smng = new SeniorManager(1, "SeniorManager", projects, ratio, budget, 2);
	smng->calc();
	float payment = smng->getPayment();
	EXPECT_EQ(payment, 2100);
	delete smng;
}

TEST(Factory, factory_1)
{
	vector<string> data{ "7","1","SeniorManager","2","prj1","prj2","0.5","0.5","1000","2000","2" };
	Employee * emp;
	emp = Factory::createEmployee(data);
	emp->calc();
	float payment = emp->getPayment();
	EXPECT_EQ(payment, 2100);
	delete emp;
}