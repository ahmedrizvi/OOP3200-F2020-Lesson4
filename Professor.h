/**
 * Project OOP3200-F2020-Lesson4
 * @author Ahmed Rizvi
 * @version 1
 */


#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Person.h"


class Professor: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employeeID
 */
void Professor(string first_name, string last_name, float age, string employeeID);
    
string getEmployeeID();
    
/**
 * @param value
 */
void setEmployeeID(string value);
    
void Teaches();
    
string ToString();
private: 
    string m_employeeID;
};

#endif //_PROFESSOR_H