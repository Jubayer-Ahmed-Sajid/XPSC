#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        int total_neg = 0;
        int min_op=0;
        long long sum = 0;
        for (int i = 0; i < n; i++)
            {
                int num;
                cin>>num;
                v.push_back(num);
                if(num<0){
                    total_neg++;
                }
                sum+= abs(num);
            }
     
            int l=0;
            for (int i = 0; i < n; i++)
                {
                    if(v[i] < 0){
                        l = i;
                        break;
                    }
                }
            int r = l;
            if(total_neg ==0) cout<<sum<<" "<<0<<endl;
            
            else{
                while(total_neg > 0){
                    while(r< n && v[r]<=0){
                        if(v[r]<0){
                            r++;
                            l++;
                            total_neg--;
                        }
                        else if(v[r]==0){
                            r++;
                            l++;
                        }
                    }
                    min_op++;
                    while(l<n && v[l] >=0){
                        l++;
                    }
                    r = l;
                   
                }
                cout<<sum<<" "<<min_op<<endl;
            }

        
        
        

    }
    return 0;
}