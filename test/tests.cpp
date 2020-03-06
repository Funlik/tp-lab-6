#include "gtest/gtest.h"
#include "../include/Engineer.h"
#include "../include/Manager.h"
#include "../include/Personal.h"
#include "../include/Factory.h"
#include "../include/Interfaces.h"


TEST(Cleaner, payment)
{
	Cleaner* cln = new Cleaner(1, "Cleaner", 10);
	cln->setWorktime(10);
	float payment = cln->getPayment();
	EXPECT_EQ(payment, 100);
	delete cln;
}

TEST(Driver, payment)
{
	Driver* drv = new Driver(1, "Driver", 20);
	drv->setWorktime(10);
	float payment = drv->getPayment();
	EXPECT_EQ(payment, 200);
	delete drv;
}

TEST(Programmer, payment)
{
	vector<string> projects{ "prj1" };
	vector<int> budget{ 1000 };
	vector<float> ratio{ 0.5 };
	Programmer* prg = new Programmer(1, "Programmer", 20,projects,ratio,budget);
	prg->setWorktime(10);
	float payment = prg->getPayment();
	EXPECT_EQ(payment, 700);
	delete prg;
}


TEST(Tester, payment)
{
	vector<string> projects{ "prj1" };
	vector<int> budget{ 2000 };
	vector<float> ratio{ 0.5 };
	Tester* tst = new Tester(1, "Tester", 20, projects, ratio, budget);
	tst->setWorktime(10);
	float payment = tst->getPayment();
	EXPECT_EQ(payment, 1200);
	delete tst;
}

TEST(TeamLeader, payment)
{
	vector<string> projects{ "prj1" };
	vector<int> budget{ 3000 };
	vector<float> ratio{ 0.5 };
	TeamLeader* tld = new TeamLeader(1, "TeamLeader", 20, projects, ratio, budget, 2);
	tld->setWorktime(10);
	float payment = tld->getPayment();
	EXPECT_EQ(payment, 2100);
	delete tld;
}

TEST(Manager, payment)
{
	vector<string> projects{ "prj1" };
	vector<int> budget{ 1000 };
	vector<float> ratio{ 0.5 };
	Manager* mng = new Manager(1, "Manager", projects, ratio, budget);
	float payment = mng->getPayment();
	EXPECT_EQ(payment, 500);
	delete mng;
}

TEST(ProjectManager, payment)
{
	vector<string> projects{ "prj1" };
	vector<int> budget{ 1000 };
	vector<float> ratio{ 0.5 };
	ProjectManager* pmng = new ProjectManager(1, "Manager", projects, ratio, budget, 1);
	float payment = pmng->getPayment();
	EXPECT_EQ(payment, 700);
	delete pmng;
}

TEST(SeniorManager, payment)
{
	vector<string> projects{ "prj1","prj2" };
	vector<int> budget{ 1000,2000 };
	vector<float> ratio{ 0.5, 0.5 };
	SeniorManager* smng = new SeniorManager(1, "Manager", projects, ratio, budget, 2);
	float payment = smng->getPayment();
	EXPECT_EQ(payment, 2100);
	delete smng;
}