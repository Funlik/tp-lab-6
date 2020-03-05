//
// Created by araxal on 03.03.2020.
//

#ifndef LAB6_PROJECTMANAGER_H
#define LAB6_PROJECTMANAGER_H

#include "Manager.h"
#include "Heading.h"

class ProjectManager : public Manager, public Heading {
    vector<Manager *> assigned_managers;;
protected:
    double get_payment_according_belongs_staff() final {
        return (double) (assigned_managers.size());
    }

public:
    using Manager::Manager;

    void add_manager(Manager *m);

    void get_salary() final;

    void change_project(Specific_project *p);
};

#endif //LAB6_PROJECTMANAGER_H
