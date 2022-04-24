#include <iostream>
using namespace std;

class Student{
    private:

    public:
        int roll;
        string name;
        int marks;

        void result()
        {
        cout<<"Roll of student : "<<roll<<endl;
        cout<<"Name of student : "<<name<<endl;
        cout<<"Marks of student : "<<marks<<endl<<endl;
        }

        Student(int Roll, string Name, int Marks)      // This is the constructor made by user
        {
            name = Name;
            roll = Roll;
            marks = Marks;
        }
};

int main()
{
    Student stud1 = Student(1,"Ankit",98);
    // stud1.roll = 1;                                  /*
    // stud1.name = "Ankit";                                This is the constructor made by compiler
    // stud1.marks = 98;                                */
    stud1.result();

    Student stud2 = Student(2,"Raj",78);
    // stud2.name = "Raj";
    // stud2.roll = 2;
    // stud2.marks = 78;
    stud2.result();

    return 0;
}