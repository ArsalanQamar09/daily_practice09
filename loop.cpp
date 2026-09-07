//while loop
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int sum =0;
    while (i<=n){
        sum +=i;
        i++;

    }
    cout<<sum<<endl;
    return 0;
    // int n;
    // cin>>n;
    // int sum=0;

    // for (int i=0;i<=n;i++){
    //     sum += i;
    // }
    // cout<<sum<<endl;
    
    // return 0;
//     int i=5;//break keyword
//     while(true){
//         if (i%7==0){
//         cout<<i<<endl;
//         break;
//     }
//     i+=5;
// }
//     return 0;

// for (int i=1;i<=50;i++){// continue keyword
//     if (i%3==0){
//         continue;
//     }
//     cout<<i<<endl;
// }
//return 0;
}
