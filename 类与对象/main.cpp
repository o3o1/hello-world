#include<iostream>
#include<cstring>
#include<cstdio>
#define ll long long
using namespace std;
class Student{
	private:
		int number;//Student Number
		bool sex;//0 refers to male, 1 refers to female
		int score;
		int rank;
	
	public:
		Student(){//这是一个没有参数的构造函数 
			//这个构造函数会将学生信息设置为默认值 
			number=2018530000;
			sex=0;
			score=0;
			rank=0;
		}
		Student(int Num, bool Sex, int Score){//这是另一个有参数的构造函数
			//这个构造函数会将学生的信息赋初始值
			number=Num;
			sex=Sex;
			score=Score;
			rank=0;
		}
		int getScore(){//这个函数可以 读取学生的分数 
			return score;
		}
		void setRank(int Rank){//这个函数可以设置排名 
			rank=Rank;
		}
		void getInfo(){//这是一个“成员函数”，可以输出这个学生的信息 
			cout<<"Student "<<number<<endl;
			if(sex==0) cout<<"Sex: Male"<<endl;
			else cout<<"Sex: Female"<<endl;
			cout<<"Score: "<<score<<endl;
			cout<<"Rank: "<<rank<<endl;
		}
};
int main(){
	Student a(2018530205, 0, 100);
	a.setRank(1);
	a.getInfo();
	
	cout<<"--------------------------------------\n";
	
	Student b;
	b.getInfo();
	b.setRank(2);
	b.getInfo();
}
	
