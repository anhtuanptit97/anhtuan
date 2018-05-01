#include<iostream>
using namespace std;
class time{
	private:
		int hour,minute,second;
	public:
		time()
		{
			hour=0;
			minute=0;
			second=0;
		}
		void settime(int h,int m,int s)
		{
			hour=h;
			minute=m;
			second=s;
		}
		int gethour()
		{
			return hour;
		}
		int getminute()
		{
			return minute;
		}
		int getsecond()
		{
			return second;
		}
		void addtime(time t1,time t2,time &t3)
		{
			int h,m,s;
			s=(t1.getsecond()+t2.getsecond());
			m=(t1.getminute()+t2.getminute()+s/60);
			h=(t1.gethour()+t2.gethour()+m/60);
			t3.settime(h%24,m%59,s%59);
		}
};
int main()
{
	time t1,t2,t3;
	int h,m,c;
	cout<<"\nNhap thoi gian t1 hh/mm/ss: ";
	cin>>h>>m>>c;
	t1.settime(h,m,c);
	cout<<"\nNhap thoi gian t2 hh/mm/ss: ";
	cin>>h>>m>>c;
	t2.settime(h,m,c);
	cout<<"\nt1 = "<<t1.gethour()<<":"<<t1.getminute()<<":"<<t1.getsecond();
	cout<<"\nt2 = "<<t2.gethour()<<":"<<t2.getminute()<<":"<<t2.getsecond();
	t3.addtime(t1,t2,t3);
	cout<<"\nt1 +  t2 = "<<t3.gethour()<<":"<<t3.getminute()<<":"<<t3.getsecond();
	return 0;
}
