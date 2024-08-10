// Print the following pattern
// Input: n = 5
// Output:
//    1
//  1 2 3
// 1 2 3 4 5
//1 2 3 4 5 6 7
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count =0;
    for(int i=1;i<=n;i++)
    {
        for(int s=0;s<=n-i-1;s++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i+count;j++)
        {
            cout<<j;
        }
        cout<<endl;
        count++;
        // for(int k=i+1;k)
    }
}