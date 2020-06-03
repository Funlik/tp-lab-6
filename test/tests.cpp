#include "gtest/gtest.h"
#include "Personal.h"
#include "Manager.h"

TEST(task1, case_1) {
    Cleaner* cleaner = new Cleaner("1", "Ivanov Ivan");
    cleaner->setWorktime(40);
    cleaner->calc();
    EXPECT_EQ(cleaner->getPayment(), 8000);
}

TEST(task1, case_2) {
    SeniorManager* manager = new SeniorManager("2", "Gavrilov Kirill", Projects::fourth, 15);
    manager->setWorktime(40);
    manager->calc();
    EXPECT_EQ(manager->getPayment(), 37500);
}
