 #include<iostream>
using namespace std;
class student
{
	public:
	int roll_no;
		void get_num(int r )
		{
			roll_no = r;
		}
		void show_rollno()
		{
			cout<<"ROll number = "<<roll_no;
		}
};
class marks : virtual public student
{
	public:
	int math,hindi ,english;
		void get_marks(int m,int h,int e )
		{
			math = m;
			hindi = h;
			english=e;
		}
		void show_marks()
		{
			cout<<endl<<"marks of Math = "<<math<<endl;
			cout<<"marks of Hindi = "<<hindi<<endl;
			cout<<"marks of English = "<<english<<endl;
		} 
};
class sport : virtual public student
{
	public:
	int  score;
		void get_score(int s)
		{
			score = s;
		}
		void show_score()
		{
			cout<<"score of sports = "<<score;
		}
};
class result : public marks , public sport
{
	public:
	int total;
	void display()
	{
		total=math+hindi+english+score;
		show_rollno();
		show_marks();
		show_score();
		cout<<endl<<"total marks = "<<total;
	}
};
int main()
{
	result r1;
	r1.get_num(1002);
	r1.get_marks(90,98,99);
	r1.get_score(97);
	r1.display();
	return 0;
}
