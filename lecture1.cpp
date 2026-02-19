#include <bits/stdc++.h>
using namespace std ; 


class Student{
    public:

    string name ; 
    int roll_no ; 
    string branch  ;
    int mob_no ; 
    string email ; 


    void print_student_detail(){
        cout<<"name: "<<name<<endl;
        cout<<"roll_no: "<<roll_no<<endl;
        cout<<"branch: "<<branch<<endl;
        cout<<"mob_no: "<<mob_no<<endl;
        cout<<"email: "<<email<<endl;
    }

};



int main(){

    string a  ;

    Student s1; 

    s1.name = "Rahul" ;
    s1.branch = "CSE" ;
    s1.mob_no = 1234 ; 
    s1.roll_no = 1 ; 
    s1.email = "r@r.com" ;

    //s1.print_student_detail() ;


    Student s2; 

    s2.name = "Chetan" ;
    s2.branch = "CSE" ;
    s2.mob_no = 1235 ; 
    s2.roll_no = 2 ; 
    s2.email = "c@c.com" ;

    s2.print_student_detail() ;


    cout<<sizeof(s2)<<endl;



    return 0 ; 
}
