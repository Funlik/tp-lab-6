#include "gtest/gtest.h"
#include "Engineer.h"
#include "Manager.h"
#include "Personal.h"
#include "Cleaner.h"
#include "Driver.h"
#include "Programmer.h"
#include "Tester.h"
#include "TeamLeader.h"
#include "ProjectManager.h"
#include "SeniorManager.h"
#include "Employee.h"
#include "Factory.h"
#include "WorkTime.h"
#include "Project.h"
#include "Heading.h"

TEST(Test1, TestOfClean) {
	Cleaner* Tcleaner = new Cleaner(2, "Eva", 160, 150);
	Tcleaner->SetPayment();
	EXPECT_EQ(Tcleaner->GetPayment(), 24000);
}
TEST(Test2, TestofTester1) {
	Tester* TTester1 = new Tester(3, "Adam", 160, 300, 30000, 2);
	TTester1->SetPayment();
	EXPECT_EQ(TTester1->GetPayment(), 50000);
}
TEST(Test3, TestOfTester2) {
	Tester* TTester2 = new Tester(3, "Gogol", 150, 250, 35000, 3);
	TTester2->AddLanguege();
	EXPECT_EQ(TTester2->LanguegeNumber(), 1);
}
TEST(Test4, TestOfTeamLeader) {
	TeamLeader* TTeamLeader = new TeamLeader(4, "Viktor", 160,450,50000,6,2);
	TTeamLeader->SetPayment();
	EXPECT_EQ(TTeamLeader->GetPayment(), 95000);
}
TEST(Test5, TestOfManager) {
	Manager* TManager = new Manager(4, "Viktor", 160, 2);
	TManager->SetPayment();
	EXPECT_EQ(TManager->GetPayment(), 20000);
}
