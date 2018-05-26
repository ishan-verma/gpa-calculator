//
//  Gpa.cpp
//  Project_4
//
//  Created by Ishan Verma on 03/03/17.
//  Copyright © 2017 Ishan Verma. All rights reserved.
//


#include "Gpa.hpp"
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;


string Student::get_name() const{
    return name;
}
void Student::set_name(string n) {
    name=n;
    
}
void Course::set_credit(int c){
    credit=c;
}
void Course::set_gpa_pt(float gp){
    gpa_point=gp*credit;
}
int Course::get_credit(){
    return credit;
}
float Course::get_gpa_pt(){
    return gpa_point;

}
//gpa calculated using vector of courses
float Result::cal_gpa(){
    
    for (int i=0;i<result.size();i++){
        total_credits+=result[i].get_credit();
        total_gpa_pts+=(result[i].get_gpa_pt());
    }
    gpa=total_gpa_pts/total_credits;
    return gpa;

}
void Result::display_gpa(){
    cout<< "Name: "<<Student::get_name()<<endl;
    cout<< "Total Credits: "<<this->total_credits<<endl;
    cout<< "Cumulative GPA: "<< this->gpa<<endl;
        if (gpa<2){
     cout<< "You are Acedemic Probation!"<<endl;
    }else {
        cout<<"Keep up the good work!"<<endl;
    }
}



