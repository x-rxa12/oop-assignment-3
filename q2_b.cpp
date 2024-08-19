#include<iostream>
using namespace std;
class animal{
private:
	string name;
public:
	animal(string name) {
		setname(name);
	}
	void setname(string name) {
		this->name = name;
	}
	string getname() {
		return name;
	}
};
class Mammal :public animal {
private:
	int numberoflegs;
public:
	Mammal(string name, int numberoflegs) : animal(name) {
		setnumberoflegs(numberoflegs);
	}
	void setnumberoflegs(int numberoflegs) {
		this->numberoflegs = numberoflegs;
	}
	int getnumberoflegs() {
		return numberoflegs;
	}
};
class dog :public Mammal {
public:
	dog(string name, int numberoflegs) :Mammal(name, numberoflegs) {

	}
	string bark() {
		cout << " woof " << endl;
	}
};
int main() {
	dog d1("husky",4);
	cout << "Animal name = " << d1.getname() << endl;
	cout << "Mammal Number of legs = " << d1.getnumberoflegs();
}