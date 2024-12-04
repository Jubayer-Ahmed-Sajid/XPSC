#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> odd;
        vector<int> even;
        for (int i = 0; i < n; i++)
            {
                int num;
                cin>>num;
                if(num % 2==0) even.push_back(num);
                else odd.push_back(num);
                v[i] = num;
            }
       
        
        if(odd.size() ==0 || even.size()==0) {
            cout<<0<<endl;
        }
        else{
            sort(odd.begin(),odd.end());
            sort(even.begin(),even.end());
            int s1 = odd.size();
            int s2 = even.size();
            long long mx = odd.back();
            int ans = 0;
            if(mx<  even[0]){
                ans = s2+1;
            }
            else{
                for (int i = 0; i < s2; i++)
                {
                    if(even[i]>mx){
                        ans = s2+1;
                    }
                    else{
                        ans++;
                        mx+=even[i];
                    }
                }
                
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}
