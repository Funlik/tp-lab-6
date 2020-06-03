#include "gtest/gtest.h"
#include <iostream>
#include "Company.h"

TEST(lab6, task1) {
    Cleaner cleaner(2, "Mne Len Dumat", 31, 250);
    cleaner.Calc();
	EXPECT_EQ(cleaner.PAYMENT(), 7750);
}

TEST(lab6, task2) {
    ProjectManager projectmanager(27, "Ian_Dumb_Romanov", 31, "DumbName", 0.1, 1000000, 2, 1000);
    projectmanager.Calc();
	EXPECT_EQ(projectmanager.PAYMENT(), 102000);
}
