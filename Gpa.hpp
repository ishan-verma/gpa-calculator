//
//  Gpa.cpp
//  Project_4
//
//  Created by Ishan Verma on 03/03/17.
//  Copyright © 2017 Ishan Verma. All rights reserved.
//
#ifndef Gpa_hpp
#define Gpa_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
//parent class student
class Student {
public:
    /**
     * Requires: nothing
     * Modifies: name
     * Effects: gets or sets values for name
     */
    string get_name() const;
    void set_name(string name);
    
private:

    // fields
    string name;
   
};
//parent class course
class Course{
public:
    /**
     * Requires: nothing
     * Modifies: credit and gpa pts
     * Effects: gets or sets values for credit and gpa pts
     */
    void set_credit(int c);
    void set_gpa_pt(float gp);
    int get_credit();
    float get_gpa_pt();

private:
    
    //fields
    int credit;
    float gpa_point;
 
};
//child of course and student (multiple inheritence)
class Result:public Course,public Student{
    
public:
    //vector of all the course
    vector<Course> result;
    /**
     * Requires: nothing(because this class can access methods of course)
     * Modifies: gpa
     * Effects: calculates gpa
     */
    float cal_gpa();
    /**
     * Requires: nothing
     * Modifies: nothing
     * Effects: displays information of student
     */
    void display_gpa();
    
private:
    
    //fields
    float total_gpa_pts;
    int total_credits;
    
    float gpa;
    
};





#endif /* Gpa_hpp */
