#pragma once
#include "Abstracts.h"
#include "Interfaces.h"

#ifndef POSITIONS_H
#define POSITIONS_H


class Cleaner : public Personal
{
private:
	
public:
	Cleaner(string name, unsigned int id, float base, string position);
	float getPayment() override;
};


class Driver : public Personal
{
private:
	float koef;
public:
	Driver(string name, unsigned int id, float base, string position, float koef);
	float getPayment() override;
};


class Tester : public Engineer
{
public:
	Tester(string name, unsigned int id, float base, string position, string project, float contribution);
	float getPayment() override;
};


class Programmer : public Engineer
{
public:
	Programmer(string name, unsigned int id, float base, string position, string project, float contribution);
	float getPayment() override;
};


class TeamLeader : public Programmer, public Heading
{
protected:
	unsigned int subordinates;
public:
	TeamLeader(string name, unsigned int id, float base, string position, string project, float contribution, unsigned int subordinates);
	float getPaymentbyHeading() override;
	float getPayment() override;
};


class Manager : public Employee, public Project
{
protected:
	float contribution;
	string position;
	string project;
public:
	Manager(string name, unsigned int id, string position, string project, float contribution);
	float getPaymentbyProject() override;
	float getPayment() override;
};


class ProjectManager : public Manager, public Heading
{
private:
	unsigned int subordinates;

public:
	ProjectManager(string name, unsigned int id, string position, string project, float contribution, unsigned int subordinates);
	float getPaymentbyHeading() override;
	float getPayment() override;
};

class SeniorManager : public ProjectManager
{
public:
	SeniorManager(string name, unsigned int id, string position, string project, float contribution, unsigned int subordinates); //, float budget);
	//float getPaymentbyHeading() override;
	//float getPayment() override;
};

#endif