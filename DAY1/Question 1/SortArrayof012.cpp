#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif 

    LL n,x;
    cin>>n;
    vl A;

    for(LL i=0;i<n;i++){
        cin>>x;
        A.push_back(x);
    }

    LL low=0,high=n-1,mid=0;

    for(LL i=0;i<n;i++){
        if(A[i]>0)
        {
            low=i;
            break;
        }
    }
    for(LL i=n-1;i>=0;i--){
        if(A[i]<2)
        {
            high=i;
            break;
        }
    }
    for(LL mid=low;mid<high;mid++){
        if(A.at(mid)==0){
            swap(A[low++],A[mid++]);
        }
        if(A.at(mid)==1){
            mid++;
        }
        if(A.at(mid)==2){
            swap(A[high--],A[mid]);
        }
    }
    for(auto i:A)
        cout<<i<<" ";

    return 0;
}