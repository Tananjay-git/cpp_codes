// Write a student class with 
// 1 roll 2 name 3 marks in 3 subject
// function for : total marks , grade , required methods

#include <iostream>
using namespace std;

class student{
    int roll;
    string name;
    int sub1,sub2,sub3;

    public : 
    student(int r,string n,int s1,int s2,int s3){
        roll = r;
        name = n;
        sub1 = s1;
        sub2 = s2;
        sub3 = s3;
    }

    // int sum=0;
    int total_marks(){
        return sub1+sub2+sub3;
    }
    int grade(){
        float avg = (sub1+sub2+sub3)/3;
        if(avg>=60){
            cout<<"Grad : A"<<endl;
        }
        else if(avg>=30 || avg<60){
            cout<<"Grad : B"<<endl;
        }
        else{
            cout<<"Grad : C"<<endl;
        }
        return 0;
    }

};

int main(){
    int roll;
    cout<<"Enter Roll No : ";
    cin>>roll;
    string name;
    cout<<"\nEnter name : ";
    cin>>name;
    int s1,s2,s3;
    cout<<"\nEnter the marks of 3 subjects : ";
    cin>>s1>>s2>>s3;
    student s(roll,name,s1,s2,s3);
    cout<<"\nTotal marks : "<<s.total_marks()<<endl;
    s.grade();
}