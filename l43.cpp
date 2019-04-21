#include <iostream>
#include <string>
using namespace std;
struct Person {
	string name() const {return name_;}
	int    age()  const {return age_;}
private:
	string name_;
	int age_;
};

struct Student : Person {
	string university() const {return uni_;}
private:
	string uni_;
};

struct Professor : Person {
	string name() const {
		return "Prof. "+ Person::name();
	}

};
int main()
{
	Student s={"Petrovich",10,"MGU"};

	//Professor pr("Stroustrup");
	cout<<s.name()<<endl;
}
