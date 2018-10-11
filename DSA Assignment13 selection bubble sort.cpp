//============================================================================
// Name        : sorting.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class sorting
{int n;
float per[20];
public:
		void accept();
		void display();
		void bubble();
		void selection();

};
void sorting::accept()
{
	cout<<"enter number of students in class :";
	cin>>n;
	cout<<"\n enter the percentage of student: ";
	for (int i=0;i<n;i++)
	{
		cin>>per[i];
	}

}
void sorting::display()
{	cout<<"\n five top scorers are";
	for(int i=n-1;i>n-6;i--)
	{
		cout<<"\t"<<per[i];
	}
}
void sorting::bubble()
{	cout<<"\n using bubble sort....\n";

	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(per[j]>per[j+1])
			{
				float temp=per[j];
				per[j]=per[j+1];
				per[j+1]=temp;
			}

		}
	}
	display();

}
void sorting::selection()
{cout<<"\n using selection sort....";

	int pos;
	for(int k=0;k<n;k++)
	{
		pos=k;
		for(int q=k+1;q<n;q++)
		{if(per[pos]>per[q])
			pos=q;
		}
		float temp=per[k];
		per[k]=per[pos];
		per[pos]=temp;
	}
	display();
}

int main() {
	sorting s;
	s.accept();
	s.bubble();

	s.selection();



	return 0;
}
