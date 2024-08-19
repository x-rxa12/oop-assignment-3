#include<iostream>
using namespace std;
class shape {
private:
	string color;
public:
	shape(string color){
	 setcolor(color);
	}
	void setcolor(string color) {
		this->color = color;
	}
	string getcolor() {
		return color;
	}
};
class rectangle :public shape {
private:
	float length;
	float breadth;
	
public:
	void setlength(float length) {
		this->length = length;
	}
	float getlength() {
		return length;
	}
	void setbreadth(float breadth) {
		this->breadth = breadth;
	}
	float getbreadth() {
		return breadth;
	}
	rectangle(string color,float length, float breadth):shape(color) {
		setlength(length);
		setbreadth(breadth);
	}
	float area() {
		return length * breadth;
	}
	float perimeter() {
		return 2 * (length + breadth);
	}
};
int main() {
	rectangle r("blue", 12, 4);
	cout << "color of rectangle = " << r.getcolor() << endl;
	cout << "length of rectangle = " << r.getlength() << endl;
	cout << "breadth of rectangle = " << r.getbreadth() << endl;
	cout << "area of rectangle = " << r.area() << endl;
	cout << "perimeter of rectangle = " << r.perimeter() << endl;
}

