#include<iostream>
#include<cstring>
#include<cstdio>
#define ll long long
using namespace std;
class Student{//��仰������һ���ࣨclass����������ֽ�Student 
	public://����public����ı����ͺ������ǿ��Ա�������ʵ� 
	
		int number;//ѧ��
		bool sex;//0�����ԣ�1��Ů�� 
		int score;
		int rank;
		
		Student(){//����һ�����캯�������Ը�����Student���͵ı����ڶ����ʱ��ֵ 
			number=2018530000;
			sex=0;
			score=0;
			rank=0;
		}
		
		void getInfo(){
			//����һ����������Student���һ���֣�����������ѧ������Ϣ 
			cout<<"Student "<<number<<endl;
			if(sex==0) cout<<"Sex: Male"<<endl;
			else cout<<"Sex: Female"<<endl;
			cout<<"Score: "<<score<<endl;
			cout<<"Rank: "<<rank<<endl;
		}
};
int main(){
	Student a;//����int a;һ����������һ������a���������a����int���͵ģ���Student���͵� 
	
	a.getInfo();//��ʱ������a�Ѿ������캯����ʼ���ˣ���ʱ���õĻ�a����ֵ�� 
	
	a.number=2018530205;//ʹ��a.Student���Է��ʱ���a�����ı���Student 
	a.sex=0;
	a.score=100;
	a.rank=1;
	
	a.getInfo();//ʹ��a.Student���Է��ʱ���a�����ĺ���getInfo(); 
}
