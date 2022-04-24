// #include <iostream>
// using namespace std;

// class student
//     {
//         string name;
//         public:
//         int age;
//         bool gender;

//         void setName(string s)
//         {
//             name = s;
//         }
//         void getName()
//         {
//             cout<<name<<endl;
//         }

//         void printInfo()
//         {

//         }

//     };

// int main()
// {
//     // student arr[3];
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     string s;
//     //     cout<<"Enter the student's name : "<<endl;
//     //     cin>>s;
//     //     arr[i].setName(s);
//     //     cout<<"Enter the student's age : "<<endl;
//     //     cin>>arr[i].age;
//     //     cout<<"Enter the student's gender : "<<endl;
//     //     cin>>arr[i].gender;
//     // }

//     // for (int i = 0; i < 3; i++)
//     // {
//     //     arr[i].printInfo();
//     // }

//     return 0;
// }

#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    string company;
    int age;

public:
    void setName(string Name)
    {
        name = Name;
    }
    string getName()
    {
        return name;
    }
    void setCompany(string Company)
    {
        company = Company;
    }
    string getCompnay()
    {
        return company;
    }
    void setAge(int Age)
    {
        if (Age>=18)
            {
            age = Age;
            }   
    }
    int getAge ()
    {
        return age;
    }

    void introduceYourself()
    {
        cout << "Name : " << name << endl;
        cout << "Company : " << company << endl;
        cout << "Age : " << age << endl
             << endl;
    }

    Employee(string Name, string Company, int Age)
    {
        name = Name;
        company = Company;
        age = Age;
    }
};

int main()
{
    Employee employee1 = Employee("Ankit", "Oxford", 19);
    // employee1.name = "Ankit";
    // employee1.company = "Oxford";
    // employee1.age = 19;
    employee1.introduceYourself();

    Employee employee2 = Employee("Raj", "KIIT", 43);
    // employee2.name = "Raj";
    // employee2.company = "KIIT";
    // employee2.age = 43;
    employee2.introduceYourself();

    employee1.setAge(15);
    cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old "<<endl;
}