#include<iostream>
#include<cmath>
using namespace std;

class fraction{
	private:
		int num;
		int den;
	public:
		fraction(int ,int );
		fraction();
		void lowterms();
		void dislay();
		void set_num(int tnum){
			this->num=tnum;
		}
		void set_den(int tden){
			this->den=tden;
		}
		void sum(fraction,fraction);
		void sub(fraction,fraction);
		void mul(fraction,fraction);
		void div(fraction,fraction);
};

fraction::fraction(int tnum, int tden){
	if(tden==0){
		cout<<"Illegal fraction: division by 0"<<endl;
		exit(1);
	}
	this->num=tnum;
	this->den=tden;
}
fraction::fraction(){
	this->num=1;
	this->den=1;
}
void fraction::lowterms(){
	long tnum, tden, temp, gcd;
	tnum = labs(num); 
	tden = labs(den); 
	if(tden==0){ 
		cout<< "Illegal fraction: division by 0"<<endl; 
		exit(1);
	}
	else if( tnum==0 ) { 
		num=0; den = 1; 
		return; 
	}
	while(tnum != 0){
		if(tnum < tden){ 	
		temp=tnum; tnum=tden; tden=temp;
		}
		tnum = tnum - tden;
	}
	gcd = tden;
	num = num / gcd;
	den = den / gcd; 
}

void fraction::sum(fraction one,fraction two){
	this->num=two.den*one.num+two.num*one.den;
	this->den=one.den*two.den;
	this->lowterms();
}
void fraction::sub(fraction one,fraction two){
	this->num=two.den*one.num-two.num*one.den;
	this->den=one.den*two.den;
	this->lowterms();
}


void fraction::mul(fraction one,fraction two){
	this->num=two.num*one.num;
	this->den=one.den*two.den;
	this->lowterms();
}

void fraction::div(fraction one,fraction two){
	this->num=one.num*one.den;
	this->den=one.den*two.num;
	this->lowterms();
}
void fraction::dislay(){
	cout << this->num<<"/"<<this->den;
}

class dislaytable{
	private: 
		int num;
	public:
		dislaytable(int);
		void add();
		void dislay();
};
dislaytable::dislaytable(int tnum){
	this->num=tnum;
}

void dislaytable::add(){
	int tnum;
	do{
		cout<<"Input number: ";
		cin >> tnum;
		if(tnum!=0){
			this->num=tnum;
			break;
		}
		cout<< "Illegal fraction: division by 0"<<endl;
	}while(1);
}

void dislaytable::dislay(){
	fraction temp1(1,this->num);
	fraction temp2(1,this->num);
	cout<<"\t";
	for(int i=1; i <this->num;i++){
		temp1.set_num(i);
		temp1.set_den(this->num);
		temp1.lowterms();
		temp1.dislay();
		cout<<"\t";
	}
	cout<<endl<<"---------------------------------------------"<<endl;
	for(int i=1; i <this->num;i++){
		temp1.set_num(i);
		temp1.set_den(this->num);
		temp1.lowterms();
		temp1.dislay();
		cout<<"\t";
		for(int j=1;j <this->num;j++){
			temp1.set_num(i);
			temp2.set_num(j);
			temp1.set_den(this->num);
			temp2.set_den(this->num);
			temp1.mul(temp1,temp2);
			temp1.dislay();
			cout<<"\t";
		}
		cout<<endl;
	}
}
