#include <iostream>
using namespace std;

int main() {
	int n, s;
	cin >> n;
	for(int i = 10;i > 0;i--)
    {
        if(n % i == 0)
        {
            s = i;
            break;
        }
    }
    cout << s << endl;
	return 0;
}
