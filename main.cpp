#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b=0,cnt=0;
    
    cin >> a;
    int c[a][3];
    for(int i=0;i<a;i++){
        b=0;
       for(int j=0;j<3;j++){
           cin>>c[i][j];
           b+=c[i][j];
       }
       if(b>=2){
           cnt++;
       }
    }
    cout << cnt << endl;
 
    return 0;
}