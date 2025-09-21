#include<iostream>
#include<string>
using namespace std;
class cars{
	private :
		string make;
		string model;
		int year;
	public :
		cars(string make,string model,int year){
			this->make=make;
			this->model=model;
			this->year=year;
		cout<<"car created:"<<make	<<" "<<model<<"("<<year<<")"<<endl;
		}
	~cars(){
		cout<<"Destroying car"<<make <<" "<<model<<"("<<year<<")"<<endl;
	}
	void display(){
		cout<<"Make: "<<make<<",Model"<<model<<",year"<<year;
	}
	
};
int main(){
	cars car1("Toyota","Corolla",1960);
	cars car2("Honda","Civic",2022);
	
	cout<<"\ncar Details:\n";
	car1.display();
	car2.display();
}

