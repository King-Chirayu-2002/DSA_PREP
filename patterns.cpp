#include<bits/stdc++.h>
using namespace std;
int n =5;
int main(){
    int ch;
    cin>>ch;
    switch (ch)
    {
    case 1:
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"* "; 
            }cout<<'\n';
        }
        break;
    case 2:
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0 || i==n-1 || j==0 || j==n-1){
                    cout<<"* "; 
                }else{
                    cout<<"  ";
                } 
            }cout<<'\n';
        }
        break;
    case 3:
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=i;j++){
                    cout<<"* "; 
            }cout<<'\n';
        }
        break;
    case 4:
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j<n-i-1){
                    cout<<"  ";
                }else{
                    cout<<"* ";
                }
            }
            cout<<endl;
        }
        break;  
    case 5:
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<< (i+1)<<" ";
            }
            cout<<endl;
        }
        break;
    case 6:
        {
            int count =1;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++) {
                cout<< count<<" ";
                count++;
            }
            cout<<endl;
        }
        }
        break;
    case 7:
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<"* ";
            }
            for(int j=0;j<(2*n - 2*i);j++){
                cout<<"  ";
            }
            for(int j=0;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=i;j++){
                cout<<"* ";
            }
            for(int j=0;j<(2*n - 2*i);j++){
                cout<<"  ";
            }
            for(int j=0;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        break;                        
    default:
        cout<<n;
        break;
    }
    return 0;
}