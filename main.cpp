#include<bits/stdc++.h>
#define md 1000000007
#define ll long long
#define si short int


using namespace std;

class  Solution{
	public:
	int getResult( si n, int a[]){

		int minElement = 10000000;
		long sum = 0;

		for( int i = 0 ; i < n; i++){
			minElement = min( minElement, a[i]);
			sum += a[i];
		}

		sum = sum - n*minElement;


		return sum;

	}
	
};



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	si t;
	cin>>t;
	while(t--){

		si n;
		cin>>n;
		int a[n];
		for( int i = 0 ; i< n; i++){
			cin>>a[i];			
		}
		Solution obj;
		int result = obj.getResult( n, a);
		cout<<result<<'\n';
	}
	
	return 0;
}
