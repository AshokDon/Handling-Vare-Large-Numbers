//big integers 
//long long int can stroe 10^18
//what if the number have 200 digits
//we use a concept of vector
//
#include <bits/stdc++.h>
using namespace std;
void multiple(int *a , int &n ,int no){
    int carry = 0;
    for(int i = 0 ; i < n ; i++){
        int product = a[i]*no + carry;
        a[i] = product % 10;
        carry = carry / 10;
    }
    while(carry){
        a[n] = carry % 10;
        carry = carry / 10;
        n++;
    }
    
}
void big_factorial(int  n){
    int *a[1000]=new int[1000];
    for(int i = 0 ; i < 1000; i++){
        a[i]=0;
    }
    a[0]=1;
    int n = 1;
    for(int i = 2 ; i <= 1000 ; i++){
        multiple(a,n,i);
    }
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	big_factorial(n);
	return 0;
}
