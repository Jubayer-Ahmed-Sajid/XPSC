#include <bits/stdc++.h>

using namespace std;
void solution(){
       long long n;
       cin>>n;
       long long k;
       cin>>k;
       
      
       vector <long long> ps(k,0);
       vector <long long> a(n,0);
       for(long long i=0;i<k;i++){
          cin>>ps[i];
       }
      if(k==1){
         cout<<"YES"<<endl;
         return;
       }
      
       long long j=k-1;
       for(long long i=n-1;i>=0;i--){
             a[i]=ps[j]-ps[j-1];
             j--;
             if(j==0){
                
                break;
             }
        }
        

        if(ps[0]>(n-k+1)*a[n-k+1]){
             
             cout<<"NO"<<endl;
             return;
        }
        else{
             for(long long i=n-k+1;i<n-1;i++){
            
                  if(a[i]>a[i+1]){
                      cout<<"NO"<<endl;
                      return;
                  }
             }
        }
        cout<<"YES"<<endl;
}
int main() {
   
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   long long t=1;
   cin>>t;
   
   while(t--){
    solution();
   }
   return 0;
}