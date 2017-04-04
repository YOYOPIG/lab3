#include<iostream>
#include<fstream>
#include<vector>
#include<cstdlib> 
#include<algorithm>
using namespace std;

int main()
{
	int n, total_weight; //num of cows
	vector<int> cow_weight;
	int temp[10000];
	
	//read file
	ifstream inFile("file.in",ios::in);
	if(!inFile)
	{
		cerr<<"Failed to open file"<<endl;
		exit(1);
	}
	
	inFile>>n;
	//cout<<n<<endl;
	cow_weight.resize(n); //y
	
	for(int i=0;i<n;++i)
	{
		inFile>>cow_weight[i];
		//cout<<cow_weight[i]<<endl;
	}
	
	//sort
	sort(cow_weight.begin(),cow_weight.end());
	//cout<<"top5\n";
	for(int i=n-1;i>=n-5;--i)
	{
		//cout<<cow_weight[i]<<endl;
		total_weight = total_weight+cow_weight[i];
	}
	
	cout<<total_weight<<endl;
	
	return 0;
}
