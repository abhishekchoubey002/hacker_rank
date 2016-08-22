#include <iostream>
#include <vector>
using namespace std;

static void print_array(vector<int> &arr, int size)
{
	int i;
	for(i=size; i>=0; i--) {
		if((arr[i]>=1) && (arr[i]<=10000))
			cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	if((n>=1) && (n<=1000)) {
		for(int arr_i = 0;arr_i < n;arr_i++){
			cin >> arr[arr_i];
		}
		print_array(arr, n);	
	}
	return 0;
}
