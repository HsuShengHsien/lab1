#include <iostream>

using namespace std;

int main()
{
  	int n;

  	cout<<"Please enter a number:";
  	cin>>n;
	while(n!=1)
	{
		cout<<n<<' ';
		if(n%2==1) n=3*n+1;
		else n/=2;
	}
    cout<<n;
	
	return 0;
}
