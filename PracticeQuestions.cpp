// Practice number

#include <iostream>
using namespace std;

int main()
{
	int m,n ;
	cout << "enter the numbers" <<endl;
	cin>> m >> n ;
/////// 1
	cout << n % 10 << endl;
/////// 2
	cout << n / 10 << endl;
/////// 3
	while(n!=0){
	    m = (m * 10)+n%10;
	    n = n/10;
	}
	cout << m << endl;
/////// 4
	int temp = n;
	int count = 0;
	while(n !=0){
	    count++;
	    n = n/10;
	}

	while(count--){
	    m = m / 10;
	}

	while(temp != 0){
	    m = (m * 10) + temp % 10;
	    temp = temp/10;
	}
	cout << m << endl;
/////// 5
	while(n>9){
	    n = n /10;
	}
	cout << n << endl;
/////// 6
	int res = 0;
	while(n>9){
	    res = res * 10 + n % 10;
	    n = n /10;
	}
	int result=0;
	while(res !=0){
	    result=result*10 + res % 10;
	    res = res/10;
	}
	cout << result<< endl;
/////// 7
	int temp=0;
	while(n!=0){
	    temp = temp * 10 + n % 10;
	    n = n /10;
	}
	while(temp !=0){
	    m = m *10 + temp % 10;
	    temp = temp /10;
	}

	cout << m << endl;
/////// 8
	int temp = m;
	int countm = 0;
	while(temp !=0){
	    countm++;
	    temp = temp / 10;
	}
	int flag =n;
	int countn = 0;
	while(flag !=0){
	    countn++;
	    flag = flag /10;
	}

	int check = countm-countn;
	int p = 0;
	while(check--){
	    p = p * 10 + m % 10;
	    m = m /10;
	}

	while(p!=0){
	    n = n*10 + p %10;
	    p = p/10;
	}


	cout << n << endl;
/////// 9
	int temp = m;
	int countm = 0;
	while(temp !=0){
	    countm++;
	    temp = temp / 10;
	}

	int cut = countm / 2;
	int q=0;
	while(cut--){
	    q = q*10 + m % 10;
	    m = m /10;
	}

	while(n!=0){
	    m = m *10 + n %10;
	    n = n /10;
	}

	while(q!=0){
	    m = m *10 + q % 10;
	    q=q/10;
	}

	cout << m << endl;
///// 10
	int temp = m;
	int countm = 0;
	while(temp !=0) {
		countm++;
		temp = temp / 10;
	}
	int flag =n;
	int countn = 0;
	while(flag !=0) {
		countn++;
		flag = flag /10;
	}
	int z = m %10;
	int cut = countn + 1;
	while(cut--) {
		m = m/10;
	}

	while(n!=0) {
		m = m * 10 + n % 10;
		n = n /10;
	}

	m = m *10 + z;

	cout << m << endl;




	return 0;
}