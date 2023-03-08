#include<iostream>
using namespace std;
class Students 
    {
	public:
	int sapID;
	string Name;
	int Semester;
	float CGPA;

    Students()
    {
    	sapID = -1;
    	Name = " ";
    	Semester = 0;
    	CGPA = 0.0;
	}
	Students ( int sapID, string Name, int Semester, float CGPA )
	{
		this -> sapID = sapID; 
		this -> Name = Name;
		this -> Semester = Semester;
		this -> CGPA = CGPA;
	}
	Students ( int sapID, string Name, float CGPA )
	{
		this -> sapID = sapID;
		this -> Name = Name;
		this -> CGPA = CGPA;
	}
	Students ( string Name, int Semester )
	{
		this -> Name = Name;
        this -> Semester = Semester;
	}
	Students ( Students & stu )
	{
		sapID = stu.sapID;
		Name = stu.Name;
		Semester = stu.Semester;
		CGPA = stu.CGPA;
	}
	~Students ()
	{
		cout<<"Distructer is running";
	}
};
int main()
{
	return 0;
}
