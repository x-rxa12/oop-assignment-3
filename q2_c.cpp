#include <iostream>
using namespace std;

class person {
protected:
    string name;
    string address;

public:
    person(string name, string address) {
        setname(name);
        setaddress(address);
    }

    void setname(string name) { 
        this->name = name;
    }
    void setaddress(string address) {
        this-> address = address;
    }

    string getName() {
        return name;
    }

    string getAddress() {
        return address;
    }
};

class employee {
protected:
    int employeeid;
    double salary;

public:
    employee(int employeeid, double salary) {
        setemployeeID(employeeid);
        setsalary(salary);
    }

    void setemployeeID(int employeeid) {
        this->employeeid = employeeid;
    }

    void setsalary(double salary) {
        this->salary = salary;
    }

    int getemployeeID() {
        return employeeid;
    }

    double getsalary() {
        return salary;
    }
};

class teacher : public person, public employee {
private:
    string subject;

public:
    teacher(string name, string address, int employeeid, double salary, string subject) : person(name, address), employee(employeeid, salary){
        setsubject(subject);
    }

    void setsubject(string subject) { 
        this->subject = subject;
    }

    string getsubject() {
        return subject;
    }
};

int main() {
    teacher t1("Ali", "Street 1235", 331, 512345, "English");

    cout << "Name = " << t1.getName() << endl;
    cout << "Address = " << t1.getAddress() << endl;
    cout << "employee ID = " << t1.getemployeeID() << endl;
    cout << "Salary = " << t1.getsalary() << endl;
    cout << "Subject = " << t1.getsubject() << endl;
}
