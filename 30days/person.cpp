#include <iostream>
using namespace std;

class Person {
	public:
		void yearPasses(void);
		void amIOld(void);
		Person(int initialAge);
	private:
		int age;
};

Person::Person(int initialAge)
{
	if(initialAge > 0)
		this->age = initialAge;
	else {
		cout<<"Age is not valid, setting age to 0."<<endl;
		this->age = 0;	
	}
}

void Person::amIOld(void)
{
	if(this->age < 13)
		cout<<"You are young."<<endl;
	else if((this->age >=13) && (this->age <18))
		cout<<"You are a teenager."<<endl;
	else
		cout<<"You are old."<<endl;
}

void Person::yearPasses(void)
{
	this->age++;
}

int main(void)
{
	Person p = Person(-1);
	p.yearPasses();
	p.amIOld();
}
