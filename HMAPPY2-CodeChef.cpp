#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int T,N,A,B,K,Appy_Win,Chef_Win,LCM;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>N>>A>>B>>K;
		if(A>=B)
		{
			if((A%B)==0)
			{
				LCM=A;
			}
			else
			{
				LCM=(A*B);
			}
		}
		else
		{
			if((B%A)==0)
			{
				LCM=B;
			}
			else
			{
				LCM=(A*B);
			}
		}
		
		Appy_Win=((N/A)-(N/LCM));
		Chef_Win=((N/B)-(N/LCM));
		if((Appy_Win+Chef_Win)>=K)
		{
			cout<<"Win"<<endl;
			continue;
		}
		else
		{
			cout<<"Lose"<<endl;
			continue;
		}		
	}

}
