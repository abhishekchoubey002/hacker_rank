#include <iostream>
using namespace std;

static void print_multiple(int num, int start, int end)
{
	int i;
	for(i = start; i<=end; i++)
		cout << num << " X " << i << " = "<<num * i<<endl;
}

int main(){
	int N;
	cin >> N;
	if((N>=2) && (N<=20))
		print_multiple(N, 1, 10);
	return 0;
}
