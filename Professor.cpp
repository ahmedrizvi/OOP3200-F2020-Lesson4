/**
 * Project OOP3200-F2020-Lesson4
 * @author Ahmed Rizvi
 * @version 1
 */


#include "Professor.h"


#include <iostream>
#include <ostream>

/**
 * Professor implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
Professor::Professor(std::string first_name, std::string last_name, const float age, std::string employee_id):
Person(first_name, last_name, age), m_employeeID(std::move(employee_id))
{
}

/**
 * @return string
 */
std::string Professor::getEmployeeID() const
{
    return m_employeeID;
}

/**
 * @param value
 */
void Professor::setEmployeeID(const std::string& value)
{
    m_employeeID = value;
}

/**
 * @return void
 */
void Professor::Teaches() const
{
    std::cout << getFirstName() << " is teaching." << std::endl;
}

/**
 * @return string
 */
std::string Professor::ToString()
{
    std::string output_string;

    output_string += Person::ToString();
    output_string += "------------------------------------------------\n";
    output_string += "Employee ID: " + getEmployeeID() + "\n";
    output_string += "------------------------------------------------\n";

    return output_string;
}