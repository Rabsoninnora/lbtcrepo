#include<iostream>

using namespace std;

class Employee{
    //public attribute

    int salary;

    public:
    //setter

    void setSalary(int s){
        salary=s;

    }

int getSalary(){
    return salary;
}

};


int main(){
Employee myobj;
myobj.setSalary(50000);
cout<<myobj.getSalary();

    return 0;
}