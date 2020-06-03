#include "gtest/gtest.h"
#include "Classes/Common/TeamLeader.h"
#include "Classes/Common/Programmer.h"
#include "Classes/Common/SeniorManager.h"
#include "Factory/ProgrammerFactory.h"
#include "Factory/TeamLeaderFactory.h"
#include "Factory/SeniorManagerFactory.h"
#include "Classes/Common/Project.h"

class ProjectStuffTestSuit : public::testing::Test{

protected:
    void TearDown() override {
        delete programmer;
        delete teamLeader;
        delete programmerFactory;
        delete teamLeaderFactory;
        delete seniorManagerFactory;
    }

    void SetUp() override {
        project = new Project("project", 100000);
        another_project = new Project("another_project", 2000000);
        programmerFactory = new ProgrammerFactory();
        teamLeaderFactory = new TeamLeaderFactory();
        seniorManagerFactory = new SeniorManagerFactory();

        programmer = programmerFactory->create_employee(1, "Test", "Programmer", 100, project);
        teamLeader = teamLeaderFactory->create_employee(2, "TeamLeadTest", "TeamLeader", 5000, project);
        seniorManager = seniorManagerFactory->create_employee(3, "SeniorTest", "SeniorManager", 10000, project);

    }

    Programmer * programmer{};
    ProgrammerFactory * programmerFactory{};
    TeamLeader * teamLeader{};
    TeamLeaderFactory * teamLeaderFactory{};
    SeniorManager * seniorManager{};
    SeniorManagerFactory * seniorManagerFactory{};
    Project * project{};
    Project * another_project{};

};


TEST_F(ProjectStuffTestSuit, ProjectStuffTestSuit_CalcSalary_Test) {
    ASSERT_GT(programmer->calcSalary(), 0);
    ASSERT_GT(teamLeader->calcSalary(), 0);
    ASSERT_GT(seniorManager->calcSalary(), 0);
}


TEST_F(ProjectStuffTestSuit, ProjectStuffTestSuit_AddEmployee_Test) {
    teamLeader->add_employee(programmer);
    seniorManager->add_employee(programmer);
    seniorManager->add_employee(teamLeader);

    ASSERT_NE(teamLeader->getEmployees().size(), 0);
    ASSERT_NE(seniorManager->getEmployees().size(), 0);
}


TEST_F(ProjectStuffTestSuit, ProjectStuffTestSuit_InSameProject_Test) {

    ASSERT_EQ(programmer->getProject().getName(), teamLeader->getProject().getName());
    ASSERT_EQ(teamLeader->getProject().getName(), seniorManager->getProject().getName());

}


TEST_F(ProjectStuffTestSuit, ProjectStuffTestSuit_BudgetOverflow_Test) {
    seniorManager->setContrib(1.1);
    seniorManager->setPayment(seniorManager->calcSalary());

    ASSERT_EQ(project->getBalance(), 0);
}
