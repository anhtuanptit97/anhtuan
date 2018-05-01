#include <iostream>
using namespace std;
class date
{
	private:
		int day=0;
		int month=0;
		int year=0;
	public:
		date(){}
		date(int m, int d, int y)
		{
			this->day=d;
			this->month=m;
			this->year=y;
		}
		void getdate();
		void showdate()
		{
			cout<<"(mm/dd/yy) :"<<month<<"/"<<day<<"/"<<year<<endl;
		}
};
int main()
{
	date d1;
	d1.getdate();
	cout<<"Your birthday: ";
	d1.showdate();
	return 0;
}
bool check_date(int d,int m,int y)
{
	bool accepable=true;
	switch(m)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			{
				if(d>31)
				{
					accepable=false;
				}
				break;
			}
		case 4: case 6: case 9: case 11:
			{
				if(d>30)
				{
					accepable=false;
				}
				break;
			}
		case 2:
			{
				if(y%4==0 && d>29)
				{
					accepable=false;
				}
				if(y%4!=0 && d>28)
				{
					accepable=false;
				}
				break;
			}
		default:
			accepable=false;
			break;
	}
	return accepable;
}
void date::getdate()
{
	bool checkdate=false;
	char c;
	do
	{
		cout<<"Enter your date (mm/dd/yyyy): ";
		cin>>month>>c>>day>>c>>year;
		checkdate=check_date(day, month, year);
		if(checkdate==false)
		{
			cout<<"Your date is Invalid!"<<endl;
			cout<<"Please Enter again!"<<endl;
		}
	}while(checkdate==false);	
}
