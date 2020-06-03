#include "gtest/gtest.h"
#include <Factory.h>

TEST(Tests, test1) {
    vector<string> data = {"1", "Artem", "Keks", "Valrto", "Cleaner", "200"};
    auto e = Factory::createEmployee(data);
    EXPECT_EQ(e->getId(), 1);
}

TEST(Tests, test2) {
    vector<string> data = {"1", "Artem", "Keks", "Valrto", "Cleaner", "200"};
    auto e = Factory::createEmployee(data);
    e->calcPayment();
    ASSERT_NE(e->getPayment(), 0);
}

TEST(Tests, test3) {
    vector<string> data = {"1", "Artem", "Keks", "Valrto", "Cleaner", "200"};
    auto e = Factory::createEmployee(data);
    ASSERT_NE(e, nullptr);
}
