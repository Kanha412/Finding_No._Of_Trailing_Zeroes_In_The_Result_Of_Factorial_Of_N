// Trailing Zeroes in Factorial :- After result of factorial, the zeroes in the end are called trailing zeroes of factorial. Since, result of factorial have huge no. of digits, therefore there will be an overflowing. Hence, we use different style to solve this problem.

#include<bits/stdc++.h>
using namespace std;


int TrailingZero(int n)
{
    int count = 0;
    for(int i=5; i<=n; i=i*5)
    {
        count = count + (n/i);
    }
    return count;
}


int main()
{
    int n;
    cout<<"Enter n ";
    cin>>n;
    cout<<"Trailing Zeroes in the result of "<<n<<"!"<<" is "<<"'"<<TrailingZero(n)<<"'"<<endl;
    system("pause");
    return 0;
}

// Time Complexity of this program is log(n).
