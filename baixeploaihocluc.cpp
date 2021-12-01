#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	double a,b,c;
	double A;
	cin>>a>>b>>c;
{A=(a+b+c)/3;
}
	if 	(A>=9 && A<=10)
	{cout <<setprecision(2)<<fixed<<"DTB= " <<A <<endl;
		cout <<"Loai: XUAT SAC";
		}	
			else if (A>=8 && A<9)
			{cout <<setprecision(2)<<fixed<<"DTB= " <<A <<endl;
				cout <<"Loai: GIOI";
				}	
			else if (A>=7 && A<8)
			{
				cout <<setprecision(2)<<fixed<<"DTB= " <<A <<endl;
				cout <<"Loai: KHA";
			}	
			else if (A>=6&& A<7)
			{
				cout <<setprecision(2)<<fixed<<"DTB= " <<A <<endl;
				cout <<"Loai: TB KHA";
				}	
			else if (A>=5&& A<6)
			{
				cout <<setprecision(2)<<fixed<<"DTB= " <<A <<endl;
				cout <<"Loai: TB";
				}	
			else if (A>=4 && A<5)
			{
				cout <<setprecision(2)<<fixed<<"DTB= " <<A <<endl;
				cout <<"Loai: YEU";
				}	
			else if (A<4)
			{
				cout <<setprecision(2)<<fixed<<"DTB= " <<A <<endl;
				cout <<"Loai: KEM";
				}	
}
