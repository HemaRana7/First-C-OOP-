#include<iostream>
#include<string>
using namespace std;
class Teacher{
	private:
	double salary;
	public:
	string name;
	string dept;
	string subject;
	void changedept(string newdept){
		dept=newdept;
	}
	void setsalary(double s){
		salary=s;
	}
	double getsalary(){
		return salary;
	}
};
int main(){
	Teacher t1;
	t1.name="Hema";
	t1.dept="CS";
	t1.subject="C++";
	t1.setsalary(25000);
	cout<<t1.name<<endl;
	cout<<t1.getsalary()<<endl;
}
/*Program starts
       ?
Create object t1
       ?
Store name = Hema
       ?
Store dept = CS
       ?
Store subject = C++
       ?
Call setsalary(25000)
       ?
salary becomes 25000
       ?
Print name
       ?
Hema
       ?
Call getsalary()
       ?
returns 25000
       ?
Print 25000
       ?
Program ends
*/