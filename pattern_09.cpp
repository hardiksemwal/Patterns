#include <iostream>

using namespace std;

int main()
{
    int n=5;
    int c;
     for(int i=1;i<=n;i++){
         c=i;
        for(int j=1;j<=n;j++){
           if(j<=n-i){
               cout<<" ";
           }else{
               cout<<c;
               c--;
           }
           
        }
        cout<<endl;
    }

    return 0;
}
