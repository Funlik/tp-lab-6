#include "gtest/gtest.h"
#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Engineer.h"
#include "Project1.h"
#include "Personal.h"
#include "Source.h"

TEST(Testpayment, init1)
{
	Project myproject = { "Compute Vision", 20000 };
	Programmer A(1,"people 1",50, 2500);
	A.add_project($myproject, 20);
	EXPECT_EQ(129000, A.CalcPayment());
}
TEST(Testpayment, init2)
{
	Project myproject = { "Compute Vision", 20000 };
	TeamLeader A(1, "people 1", 20, 2500, 5);
	A.add_project(&myproject);
	EXPECT_EQ(55000, A.CalcPayment());
}
TEST(Testname, init3)
{
	Project myproject = { "Compute Vision", 20000 };
	Manager A(1, "Semen Ololoev");
	A.add_project(&myproject, 10);
	EXPECT_EQ("Semen Ololoev", A.get_name());
}
TEST(Testpayment, init4)
{
	Project myproject = { "Compute Vision", 20000 };
	SeniorManager A(1, "Semen Ololoev", 9);
	EXPECT_EQ(9000, A.CalcPayment());
}