#include <iostream>
using namespace std;
class employee
{
	private:
		int emp_number;
		float emp_compentation;
	public:
		employee()
		{
			this->emp_number=0;
			this->emp_compentation=0.0;
		}
		employee(int numb, float comp)
		{
			emp_number=numb;
			emp_compentation=comp;
		}
		
		void set_emp_number(int numb)
		{
			emp_number=numb;
		}
		int get_emp_numb()
		{
			return emp_number;
		}
		void set_emp_compentation(float comp)
		{
			emp_compentation=comp;
		}
		float get_emp_compentation()
		{
			return emp_compentation;
		}
		void show_empoloyee_data()
		{
			cout<<"Employee's number: "<<emp_number<<endl;
			cout<<"Employee's compentation: "<<emp_compentation<<endl;
		}
		//~employee();
};
int main ()
{
	employee e[3];
	int numb=0;
	float comp=0.0;
	int i=1;
	cout<<"Enter Employee's information: "<<endl;
	do
	{
		cout<<"Employee's number: ";	cin>>numb;	e[i].set_emp_number(numb);
		cout<<"Employee's compentation: ";	cin>>comp;	e[i].set_emp_compentation(comp);
		i++;
	}while(i<=3);
	cout<<"Show Employee's information: "<<endl;
	for(int i=1; i<=3; i++)
	{
		e[i].show_empoloyee_data();
	}
	
	return 0;
}
