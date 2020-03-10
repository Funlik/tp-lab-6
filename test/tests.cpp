#include "gtest/gtest.h"
#include "CompanyCreator.h"

TEST(CompanyTests, CompanyTest1)
{
    auto* compCreator = new CompanyCreator();
    std::string test_worker = "101;Alex;Team Leader;40;10;10;20";
    compCreator->createWorker(test_worker);
    compCreator->calculatePaymentForWorkers();
    Employee* worker = compCreator->getWorkerByID("101");
    EXPECT_EQ(25460, worker->getPayment());
}

TEST(CompanyTests, CompanyTest2)
{
    auto* compCreator = new CompanyCreator();
    std::string test_worker = "201;Mike;Programmer;40;20;10;0";
    compCreator->createWorker(test_worker);
    compCreator->calculatePaymentForWorkers();
    Employee* worker = compCreator->getWorkerByID("201");
    EXPECT_EQ(40, worker->getWorkTime());
}

TEST(CompanyTests, CompanyTest3)
{
    auto* compCreator = new CompanyCreator();
    std::string test_worker = "303;Kortney;Tester;20;20;10;0";
    compCreator->createWorker(test_worker);
    Employee* worker = compCreator->getWorkerByID("303");
    EXPECT_EQ("Kortney", worker->getName());
}