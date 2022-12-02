#include<iostream>
using namespace std;

class Array
{
	public:
	  int iSize;
	  int *Arr;

	Array(int iLength )
	{
	  cout<<"Inside constructor\n";
	  iSize = iLength;
	  Arr = new int[iSize];
	}
	~Array()
	{
	  delete []Arr;
	}
	void Accept()
	{
	  cout<<"Enter the value\n";
	  int i = 0;
	  for(i = 0; i< iSize; i++)
	  {
	     cin>>Arr[i];
	  }
	}
	void display()
	{
	  cout<<"Elements of array are : \n";
	  int i = 0;
 	  for(i = 0;i<iSize;i++)
	 {
	   cout<<Arr[i]
	  }
	}
};
int main()
{
	cout<<"Inside main\n";
	int iRet = 0;
	Array obj1(4);
	obj1.Accept();
	obj1.display();
	iRet = obj1.Summation();
	cout<<"Summation of all "
	return 0;
}