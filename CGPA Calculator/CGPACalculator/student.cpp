#include "student.h"

student::student() : cgpa(0.0f)
{

}

student::student(const QString &name, const QString &className)
    : name(name), className(className), cgpa(0.0f) {}

// Using an initializer list:
// - Members are constructed directly with the given values.
// - No extra work — just one step.
//
// Assigning inside the constructor body:
// - Members are first default-constructed (e.g., empty QString, 0.0 float).
// - Then they are overwritten with your values (second step, extra work).
//
// Summary:
// initializer list = construct once
// assignment in body = construct + overwrite

void student::computeCGPA(){
    float totalPoins =0.0f;
    float totalCredits= 0.0f;

    for (const Course &course: courses){
        totalPoins+= course.grade* course.creditHours;
        totalCredits += course.creditHours;
    }

    cgpa = (totalCredits >0)? totalPoins/ totalCredits : 0.0f;

    }

// Formula used to calculate CGPA:
//
// CGPA = ( Sum of (grade × credit hours) ) / ( Sum of credit hours )
//




    bool student::isValid() const {
    return !name.isEmpty() && !className.isEmpty() &&!courses.isEmpty();
    }

