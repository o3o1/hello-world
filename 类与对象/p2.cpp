#include<iostream>
#include<cstring>
#include<cstdio>
#define ll long long
using namespace std;
class Student{//这句话定义了一个类（class），类的名字叫Student 
	public://所有public下面的变量和函数都是可以被任意访问的 
	
		int number;//学号
		bool sex;//0是男性，1是女性 
		int score;
		int rank;
		
		Student(){//这是一个构造函数，可以给所有Student类型的变量在定义的时候赋值 
			number=2018530000;
			sex=0;
			score=0;
			rank=0;
		}
		
		void getInfo(){
			//这是一个函数，是Student类的一部分，可以输出这个学生的信息 
			cout<<"Student "<<number<<endl;
			if(sex==0) cout<<"Sex: Male"<<endl;
			else cout<<"Sex: Female"<<endl;
			cout<<"Score: "<<score<<endl;
			cout<<"Rank: "<<rank<<endl;
		}
};
int main(){
	Student a;//就像int a;一样，定义了一个变量a，但是这个a不是int类型的，是Student类型的 
	
	a.getInfo();//此时，变量a已经被构造函数初始化了，此时调用的话a就有值了 
	
	a.number=2018530205;//使用a.Student可以访问变量a下属的变量Student 
	a.sex=0;
	a.score=100;
	a.rank=1;
	
	a.getInfo();//使用a.Student可以访问变量a下属的函数getInfo(); 
}
