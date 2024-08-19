#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class student {
private:
	string name;
	int rollno;
	float marks;
public:
	student(string name, int rollno, float marks) {
		this->name = name;
		this->rollno = rollno;
		this->marks = marks;
	}
	student(){
		this->name = "";
		this->rollno = -1;
		this->marks = 0.0;
	}
	
	void setname(string name) {
		this->name = name;
	}
	string  getname() {
		return name;
	}
	void setrollno(int rollno) {
		this->rollno = rollno;
	}
	int getrollno() {
		return rollno;
	}
	void setmarks(float marks) {
		this->marks = marks;
	}
	float getmarks() {
		return marks;
	}

	void input() {
		cout << "enter a student name " << endl;
		cin >> name;
		cout << "enter the student rollno " << endl;
		cin >> rollno;
		cout << "enter the student marks " << endl;
		cin >> marks;
	}
	void display() {
		cout << "student name " << name << endl;
		cout << "roll number " << rollno << endl;
		cout << "marks " << marks << endl << endl;
	}

};

int main() {
	const int numStudent = ;
	ofstream output;
	output.open("./student.txt");


	for (int i = 0; i < numStudent; i++) {
		student st;
		st.input();
		output << st.getname() << endl << st.getrollno() << endl << st.getmarks() << endl;
	}
	output.close();

	ifstream input;
	input.open("./student.txt");
	for (int i = 0; i < numStudent; i++) {
		string name, rollno, marks;

		input >> name;
		input >> rollno;
		input >> marks;

		int rollno_int = stoi(rollno);
		float marks_float = stof(marks);

		student st(name, rollno_int, marks_float);
		st.display();
	}
	input.close();

	int rollnoModify;
	cout << "enter a roll number ";
	cin >> rollnoModify;

	input.open("./student.txt");

	student arry[numStudent];
	bool found = false;
	for (int i = 0; i < numStudent; i++) {
		string name, rollno, marks;

		input >> name;
		input >> rollno;
		input >> marks;

		int rollno_int = stoi(rollno);
		float marks_float = stof(marks);

		arry[i].setname(name);
		arry[i].setrollno(rollno_int);
		arry[i].setmarks(marks_float);

		if (rollnoModify == rollno_int) {
			float newMarks;
			cout << "enter a new marks";
			cin >> newMarks;

			arry[i].setmarks(newMarks);
			found = true;
		}
		
	}
	if (found == false) {
		cout << "roll number not found";
	}

	output.open("./student.txt");


	for (int i = 0; i < numStudent; i++) {
		output << arry[i].getname() << endl << arry[i].getrollno() << endl << arry[i].getmarks() << endl;
	}
	output.close();
	
}