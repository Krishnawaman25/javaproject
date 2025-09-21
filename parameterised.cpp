#include<iostream>
using namespace std;
class students{
	private:
	string name;
	int rollnumber;
	char grade='a';
	public:
		students(){
		name="unknown";
		rollnumber=0;
		grade='F';
		}
		students(string n,int r,char g){
			name= n;
			rollnumber=r;
			grade=g;
		}
		void display(){
			cout<<"Name:"<<name<<endl;
			cout<<"Roll number:"<<rollnumber<<endl;
			cout<<"Grade:"<<grade<<endl;
			cout<<"------------------------"<<endl;
		}
};
int main(){
	students s1;
	cout<<"details of student s1 is"<<endl;
	s1.display();
	
	students s2("krushna",0022,'A');
	cout<<"details of students s2 is"<<endl;
	s2.display();
}
