#include <iostream>
#include <cmath>
#include <string>


using namespace std;

struct staff {
	string name;
	int age;
	double salary;
};
	

int main() {

		staff person[5];
		
		for (int i = 0; i < 5; i++) {
			cout << "Enter the name followed by the age followed by the salary:";
			cin >> person[i].name >> person[i].age >> person[i].salary;
		}
		for (int i = 0; i < 5; i++) {
			cout << person[i].name <<" "<< person[i].age <<" "<< person[i].salary << endl;
		}


		system("pause");
		return 0;
	}
