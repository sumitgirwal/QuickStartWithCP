#include<iostream>
using namespace std;



int multi(int arr[], int resize, int x){
	int carry = 0;
	for(int i=0; i<resize; i++){
		int product = arr[i]*x+carry;
		arr[i]=product%10;
		carry=product/10;
	}
	while(carry){
		arr[resize]=carry%10;
		carry=carry/10;
		resize++;
	}
	return resize;
}

void fact(int n){
	int max=1000;
	int arr[max];	
	int resize = 1;
	 arr[0]=1;
	for(int i=2; i<=n;i++)
		resize = multi(arr, resize, i);
	for(int i=resize-1; i>=0; i--)
		cout<<arr[i];	
}

int main(){
	int n; cin>>n;
	fact(n);
	return 0;
}
