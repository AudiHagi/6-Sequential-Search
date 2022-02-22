#include <iostream>
using namespace std;

int main ()
{
	int i,n,x,position,find;
	int A[n];
	cout<<"SEQUENTIAL SEARCH"<<endl;
	cout<<"======================"<<endl;
	cout<<"Number of Data \t= ";cin>>n;
	cout<<"======================"<<endl;
	
	for (int i=0;i<n; i++)
	{
		cout<<"Data Index ["<<i<<"]\t= ";cin>>A[i];
	}
	cout<<"======================"<<endl;
	cout<<"Search Data \t= ";cin>>x;
	cout<<"======================"<<endl;
	
	find = 0;
	i = 0;
	while ((find==0)&&(i<n))
	{
		if (A[i]==x)
		{
			find = 1;
			position = i;
		}
		else
			i++;
	}
	
	if(find==1)
		cout<<x<<" Found on Index ["<<position<<"]"<<endl;
	else
		cout<<x<<" Not Found"<<endl;
		
system("pause");		
}
