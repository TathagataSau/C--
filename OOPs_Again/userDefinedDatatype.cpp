#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string  name;
    int rno;
    float gpa;
    
    
    

};
class Teacher{
public:
    string TechName;
    int ID;
};

class ClgHuman : public Student, public Teacher{
public:
    string Human;
};



int main(){
    ClgHuman H1;

    H1.TechName = "Himangshu";
    H1.name = "Tathagata";
    H1.Human = "NOOO";

    
    cout << H1.TechName << " " << H1.name << " " <<H1.Human<<  endl;
    return 0;
    
}