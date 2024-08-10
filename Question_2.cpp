// Print the following pattern
// Input: n = 4
// Output:
//       A
//     A B C
//   A B C D E
// A B C D E F G
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
        for(int j=0;j<i+count;j++)
        {
            cout << (char)('A' + j) << " ";
        }
        cout<<endl;
        count++;
        // for(int k=i+1;k)
    }
}