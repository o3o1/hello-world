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
		Student(){//����һ��û�в����Ĺ��캯�� 
			//������캯���Ὣѧ����Ϣ����ΪĬ��ֵ 
			number=2018530000;
			sex=0;
			score=0;
			rank=0;
		}
		Student(int Num, bool Sex, int Score){//������һ���в����Ĺ��캯��
			//������캯���Ὣѧ������Ϣ����ʼֵ
			number=Num;
			sex=Sex;
			score=Score;
			rank=0;
		}
		int getScore(){//����������� ��ȡѧ���ķ��� 
			return score;
		}
		void setRank(int Rank){//������������������� 
			rank=Rank;
		}
		void getInfo(){//����һ������Ա������������������ѧ������Ϣ 
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
	
