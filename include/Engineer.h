#pragma once

#include "Employee.h"
#include "WorkTimePayment.h"
#include "Project.h"
#include "ProjectPayment.h"

class Engineer : public Employee, public WorkTimePayment, public ProjectPayment {
protected:
    double partOfProject;
    Project *project;

    Engineer(int id, std::string name, int worktime, int payment, double partOfProject) : Employee(id,
                                                                                                   std::move(name),
                                                                                                   worktime,
                                                                                                   payment) {
        Engineer::partOfProject = partOfProject;
        Engineer::project = nullptr;
    }

public:
    ~Engineer()= default;;

    void setPartOfProject(double partOfProject) {
        Engineer::partOfProject = partOfProject;
    }

    double getPartOfProject() {
        return Engineer::partOfProject;
    }

    void setProject(Project *project) {
        Engineer::project = project;
    }

    Project *getProject() {
        return project;
    };

    int getSalary() override {
        return getSalaryByWorkTime() + getSalaryByProject();
    }

    int getSalaryByWorkTime() override {
        return payment * worktime;
    }

    double getSalaryByProject() override {
        return (project->getBudget() * partOfProject);
    }
};

