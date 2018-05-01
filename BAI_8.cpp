#include<iostream>
#include<cmath>
using namespace std;

class numberseri{
	private:
		
	public:
		static int number;
		numberseri();
		void dislay();
};

int numberseri::number=0;

numberseri::numberseri(){
	this->number++;
}

void numberseri::dislay(){
	cout << this->number;
}

int main(){
	numberseri x;
	x.dislay();
	cout <<endl;
	numberseri y;
	y.dislay();
	system("pause");
	return 0;
}
