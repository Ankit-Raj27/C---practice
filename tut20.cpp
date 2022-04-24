#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
        int roll;
    public:
        string name;
        int Class;
        void setData(int r);// declared
        void getData(){

            cout<<"The name of the student is "<<name<<endl;
            cout<<"The class of the student is "<<Class<<endl;
            cout<<"The roll no. of the student is "<<roll<<endl;
        }
};
void Student :: setData(int r){
    roll = r;
}
int main(){
    Student nikhil;
    nikhil.name = "Nikhil";
    nikhil.Class = 7;
    nikhil.setData(20);
    nikhil.getData();

    return 0;
}