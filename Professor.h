/**
 * Project OOP3200-F2020-Lesson4
 * @author Ahmed Rizvi
 * @version 1
 */

#pragma once
#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Person.h"
#include <string>


class Professor: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
Professor(std::string first_name, std::string last_name, float age, std::string employee_id);

std::string getEmployeeID() const;
    
/**
 * @param value
 */
void setEmployeeID(const std::string& value);
    
void Teaches() const;

std::string ToString() override;
private:
std::string m_employeeID;
};

#endif //_PROFESSOR_H