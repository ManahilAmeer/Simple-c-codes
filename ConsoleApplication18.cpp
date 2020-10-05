#include <iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream in;
	in.open("input.txt");
	int list[20];
	int i = 0;
	if(in.fail())
	cout<<"Your file is not working!!"<<endl;
	else{
	while (in>>list[i])
	{
		i++;
	}
	long long ans=0;
	for (int j = 0; j < i; j++) {
		ans = list[j] + (ans * 10);
	}
	cout << ans << endl;
}
}
