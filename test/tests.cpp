#include "gtest/gtest.h"

#include "general.h"
#include "engineer.h"
#include "manager.h"
#include "personal.h"
#include "workersFabric.h"
#include "interfaces.h"

#include <vector>
#include <string>

TEST(Tests, TestCleaner) {
    Cleaner *cleaner = new Cleaner(1,"Ivanov Ivan Ivanovich", 5, 100)
    EXPECT_EQ(cleaner->getPayment(), 500);
}


TEST(Tests, TestFabric) {
    vector<string> first{"23", "Рябова", "Ирма", "Созоновна", "tester", "30", "50", "proj2", "170000", "0.1"};
    vector<string> second{"4", "Белоусова", "Фия", "Вениаминовна", "driver", "30", "700"};

    vector<Employee*> workers;
    workers.push_back(createWorker(first));
    workers.push_back(createWorker(second));
    ASSERT_NE(workers[0], nullptr);
    ASSERT_NE(workers[1], nullptr);
}