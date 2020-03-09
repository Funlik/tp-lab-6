#include "gtest/gtest.h"
#include <iostream>
#include "Company.h"

TEST(lab6, task1) {
	Cleaner* cleaner = new Cleaner(2,"Mne Len Dumat", 250);
	EXPECT_EQ(cleaner->getSalary(), 10000);
}

TEST(lab6, task2) {
	TeamLeader* team_leader = new TeamLeader(17, "Stepan Stepanov Stepanovich", 600, 0.05 , &findProject("ExpertName"), 3);
	EXPECT_EQ(cleaner->getSalary(), 77000);
}
