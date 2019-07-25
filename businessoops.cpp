#include<bits/stdc++.h>
using namespace std;

int val[]={1000,1000,1000};
int arr[46]={'x','E','E','J','H','E','T','J','T','E','E','H','J','T','H','E','E','J','H','E','T','J','T','E','E','H','J','T','H','J','E','E','J','H','E','T','J','T','E','E','H','J','T','E','H','E'};
	
class cells
{
	public:

	void E_1()
	{
		
	}
	int J_1(int val)
	{
		val-=150;
		return  val;
	}
	int T_1(int val)
	{
		val+=200;
		return val;
	}
};
class hotel
{
	public:
		void H_buy_1(char ch)
		{
			ch='H1';
		}
		void H_buy_2(char ch)
		{
			ch='H2';
		}
		void H_buy_3(char ch)
		{
			ch='H3';
		}			
				
		void Hsum(int val)
		{
			val+=50;
		}
		void Hsub(int val)
		{
			val-=50;
		}
};
class person: public cells, public hotel
{
	public:
		int fun1(int a)
		{
		if(arr[a]=='J')
		{
			J_1(val[0]);
			//val[0]-=150;
		}
		if(arr[a]=='T')
		{
			T_1(val[0]);
		}
		if(arr[a]=='H')
		{
			H_buy_1(arr[a]);
		}
		
		if(arr[a]=='H2')
		{
			Hsub(val[0]);
			Hsum(val[1]);
		}
		if(arr[a]=='H3')
		{
			Hsub(val[0]);
			Hsum(val[2]);
		}
	}
	
	
		int fun2(int b)
	{
		if(arr[b]=='J')
		{
			J_1(val[1]);
		}
		if(arr[b]=='T')
		{
			T_1(val[1]);
		}
		if(arr[b]=='H')
		{
			H_buy_2(arr[b]);
		}
		if(arr[b]=='H1')
		{
			Hsum(val[0]);
			Hsub(val[1]);
		}
		if(arr[b]=='H3')
		{
			Hsub(val[1]);
			Hsum(val[2]);
		}
	}
		int fun3(int c)
	{
		if(arr[c]=='J')
		{
			J_1(val[2]);
		}
		if(arr[c]=='T')
		{
			T_1(val[2]);
		}
		if(arr[c]=='H')
		{
			H_buy_3(arr[c]);
		}
		if(arr[c]=='H1')
		{
			Hsum(val[0]);
			Hsub(val[2]);
		}
		if(arr[c]=='H2')
		{
			Hsub(val[2]);
			Hsum(val[1]);
		}
	}
		
};
int main()
{
	person obj1;
    int p[]={4, 4, 4, 6, 7, 8, 5, 11, 10, 12, 2, 3, 5, 6, 7, 8, 5, 11, 10, 12, 2, 3, 5, 6, 7, 8, 5, 11, 10, 12};
	static int a,b,c;
	for(int i=0;i<10;i++)
	{
		a=(a+p[i])%45;
		obj1.fun1(a);
		i=i+1;
		b=(b+p[i])%45;
		obj1.fun2(b);
		i=i+1;
		c=(c+p[i])%45;
		obj1.fun3(c);
	}
	
	for(int i=0;i<3;i++)
	{
		cout<<val[i]<<endl;
	}

}
