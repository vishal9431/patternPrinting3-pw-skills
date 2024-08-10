// Print the following pattern
// Input: n = 4
// Output:
// A
// B A B
// C B A B C
// D C B A B C D
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
        for(int j=i-1;j>=0;j--)
        {
            cout << (char)('A' + j) << " ";
        }
        for(int k=0 ;k<count;k++)
        {
            cout << (char)('B' + k) << " ";
        }
        cout<<endl;
        count++;
        // for(int k=i+1;k)
    }
}