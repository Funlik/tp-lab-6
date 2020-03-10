//
// Created by fiskirton on 10.03.2020.
//

#include "gtest/gtest.h"
#include "Classes/Common/Cleaner.h"
#include "Factory/CleanerFactory.h"


class PersonalTestSuit : public::testing::Test{

protected:
    void TearDown() override {
        delete cleanerFactory;
        delete cleaner;
    }

    void SetUp() override {
        cleanerFactory = new CleanerFactory();
        cleaner = cleanerFactory->create_employee(1, "Test", "Cleaner", 100, nullptr);
    }

    Cleaner * cleaner{};
    CleanerFactory * cleanerFactory{};

};

TEST_F(PersonalTestSuit, StuffTestSuit_CleanerCheckFields_Test) {
    ASSERT_EQ(cleaner->getId(), 1);
    ASSERT_EQ(cleaner->getName(), "Test");
    ASSERT_EQ(cleaner->getPosition(), "Cleaner");
}


TEST_F(PersonalTestSuit, StuffTestSuit_CheckCalcSalary_Test) {
    cleaner->setPayment(cleaner->calcSalary());
    ASSERT_GT(cleaner->getPayment(), 0);
}