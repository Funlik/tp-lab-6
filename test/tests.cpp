#include "gtest/gtest.h"
#include "Projects.h"
#include "TeamLeader.h"

TEST(task1, case_1) {
	Projects* project = new Projects("Test", 1000000);
	TeamLeader* team_lead = new TeamLeader(1, "Mikhail Zhelezin", "teamLeader", 40, 250, 0.1, project, 100);
    EXPECT_EQ(team_lead->GetPosition(), 110000);
}

TEST(task1, case_2) {
	Projects* project = new Projects("Test", 1000000);
	EXPECT_EQ(project->GetTitle(), "Test");
}

TEST(task1, case_3) {
	Projects* project = new Projects("Test", 2000000);
	EXPECT_EQ(project->GetBudget(), 2000000);
}