//
//  main.cpp
//  Project_4
//
//  Created by Ishan Verma on 01/03/17.
//  Copyright © 2017 Ishan Verma. All rights reserved.
//
#include "Gpa.hpp"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int no;//used to for no of courses
    string n;//used to for name
    Result r ;//object created gpa calculation
   
    cout << "C++ program that uses calculates Gpa using 3 classes:"<<endl;
    
    cout << "Enter name of the Student: "<<endl;//input for name
    while(!(cin>>n)){//Testing
        cout<<"please enter correct input"<<endl;
        cin.clear();
        cin.ignore();
    }
    
    r.set_name(n);//using parent class student's method
    
    cout << "Enter the no of courses: "<<endl;
    while(!(cin>>no||no<0)){//Testing
        cout<<"please enter correct input"<<endl;
        cin.clear();
        cin.ignore();
    }
    //using for loop to make vector of courses
    
    for (int i=0; i<no;i++){
        Course c;//object created
        float temp_gp_pts;//temporary variable
        int cr;//temporary variable
        cout<<"Enter gpa pts accquired in course "<<i<<": "<<endl;
        while(!(cin>>temp_gp_pts||temp_gp_pts<0||temp_gp_pts>4)){//Testing
            cout<<"please enter correct input"<<endl;
            cin.clear();
            cin.ignore();
        }
        
        cout<<"Enter credits gained after Course"<<i<<": "<<endl;
        while(!(cin>>cr||cr<0||cr>8)){//Testing
            cout<<"please enter correct input"<<endl;
            cin.clear();
            cin.ignore();
            
        }
        c.set_credit(cr);
        c.set_gpa_pt(temp_gp_pts);
        r.Result::result.push_back(c);//course added to vector for gpa calculation
    }
    //gpa calculated using vector of courses
    r.cal_gpa();
    //gpa displayed using method in parent class as well methods present in its own
    r.display_gpa();
    int y;
    cout << "do u want to calculate gpa again of another student? "<<endl;//input for name
    while(!((cin>>y)&&((y==1)||(y==0)))){//Testing
        cout<<"please enter correct input"<<endl;
        cin.clear();
        cin.ignore();
    }
    if (y==1){
        main();
    }
    return 0;
}
