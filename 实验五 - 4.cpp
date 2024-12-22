#include<iostream>
using namespace std;

class Student{
	public:
		int num;
		int score;
		
		Student(int n,int s):num(n),score(s){
		}
		
};

void Max(Student * arr){
            int k = arr[0].score;
            int maxi=1;
			for(int i=1; i<5; i++){
				if(arr[i].score > k){
				    k = arr[i].score;
				    maxi = arr[i].num;
				}
			}
			cout << "成绩最高的学生的编号为：" << maxi << endl; 
		}
		
int main(){
		Student stud[5]={Student(001,77),Student(002,66),Student(003,87),Student(004,97),Student(005,57)};
		Student* p = &stud[0];
		Max(p);
			
		return 0;
			
}
