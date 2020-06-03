#include "Manager.h"


Manager::~Manager()
{
}

int Manager::paymentCount()
{
	return ProjPayment();
}


int Manager::ProjPayment()
{
	return PaymentProj;
}

int ProjectManager::paymentForLeaders()
{
	return PaymentLeaders;
}
int ProjectManager::paymentCount()
{
	return ProjPayment() + paymentForLeaders();
}


ProjectManager::~ProjectManager()
{
}

SeniorManager::~SeniorManager()
{
}