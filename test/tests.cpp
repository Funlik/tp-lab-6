#include "gtest/gtest.h"
#include "Employee.h"
#include "Cleaner.h"
#include "Programmer.h"
#include "TeamLeader.h"
#include "Manager.h"
#include "Driver.h"
#include "Tester.h"
#include "ProjectManager.h"
#include "SeniorManager.h"

TEST(task1, case_1) {
	Cleaner* cleaner = new Cleaner(1, "Ivan", 40, 50);
	EXPECT_EQ(cleaner->get_id(), 1);
}

TEST(task1, case_2) {
	Cleaner* cleaner = new Cleaner(1, "Ivan", 40, 50);
	EXPECT_EQ(cleaner->get_payment(), 2000);
}