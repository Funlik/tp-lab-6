#include "gtest/gtest.h"
#include "../include/Engineer.h"
#include "../include/Manager.h"
#include "../include/Personal.h"
#include "../include/Factory.h"
#include "../include/Interfaces.h"


TEST(Cleaner, calculate_payment)
{
	Cleaner* cln = new Cleaner(1, "Cleaner", 10);
	cln->setWorktime(10);
	float payment = cln->getPayment();
	EXPECT_EQ(payment, 100.0);
	delete cln;
}