#include <iostream>
#include <stdlib.h>
using namespace std;
int a[100000];

int solve(int N, int K){
      int sum=0, l, sal=0, d, ans;
      for(int i=0;i<N;i++)
            sum+=a[i];
      d=sum/K;
      for(int i=0;i<N;i++){
            if(sal+a[i]<=d*(K-1)) {
                  sal+=a[i];
            }
      }
      ans=sum-sal;
      return ans;
}

int main(){
      int n,k,save;

      cin>>n>>k;
      for(int i=0;i<n;i++){
            cin>>a[i];
      }

      for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                  if(a[i]>a[j]){
                        save=a[i];
                        a[i]=a[j];
                        a[j]=save;
                  }
            }
      }
      cout<<solve(n,k);
      return 0;
}
