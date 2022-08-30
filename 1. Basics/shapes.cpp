#include<bits/stdc++.h>
using namespace std;

main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

// shape 1 - Hollow Rectangle
//     int R, C;
//     cin>>R>>C;
    
//     for(int r = 0; r<R; r++){
//         for (int c = 0; c<C; c++){
//             if(r ==0 || r == R-1 || c == 0 || c == C-1){
//                 cout<<"*";
//             }
//             else {
//                 cout<<" ";
//             }
//         }
//         cout<<"\n";
//     }

//shape 2 
//
// int n;
// cin>>n;
//
// for (int r = n; r>=1; r--){
//     for(int c = 1; c<=r; c++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// shape 3
//
// int n;
// cin>>n;
//
// for (int r = 1; r<=n; r++){
//     for(int c = 1; c<=n; c++){
//         if(c<=n-r){
//             cout<<" ";
//         }else{
//             cout<<"*";
//         } 
//     }
//     cout<<endl;
// }

// shape 4
//
// int row, col;
// cin>>row>>col;
//
// for(int r = 1; r <= row; r++){
//     for(int c = 1; c<=r; c++){
//         cout<<r<<" " ;
//     }
//     cout<<endl;
// }

// shape 5 (Floyd triange)
//
// int n;
// int count = 1;
// cin>>n;
//
// for(int r = 1; r <= n; r++){
//     for(int c = 1; c<=r; c++){
//         cout<<count<<" " ;
//         count++;
//     }
//     cout<<endl;
// }

// shape 6 Butterfly --------------------------
//
// int n;
// cin>>n;
//
// for(int r = 1; r<=n; r++){
//     for(int c = 1; c<=2*n; c++){      
//         if(c<=2*n-r && c>r){
//             cout<<"  ";
//         }else{
//             cout<<"* ";
//         }    
//     }
//     cout<<endl;
// }
// for(int r = n; r >=1; r--){
//     for(int c = 1; c<=2*n; c++){        
//         if(c<=2*n-r && c>r){
//             cout<<"  ";
//         }else{
//             cout<<"* ";
//         }    
//     }
//     cout<<endl;
// }
//
// int count = n;
//     for(int r = 1; r<=n; r++){
//                 for(int c = 1; c<=2*n; c++){                    
//                     if(r>1 && c>count && c<=2*n-count){
//                         cout<<"  ";
//                       
//                     }else{
//                         cout<<"* ";
//                     }    
//                 }
//         count = count-1;
//         cout<<endl;
// }
// -------------------------

// shape 7 (inverted patern)
//
// int n;
// cin>>n;
//
// for(int r = 1; r<=n; r++){
//     for(int c = 1; c<= n+1-r; c++ ){
//         cout<<c;
//     }
//     cout<<endl;
// }

// shape 8 (0-1 pattern)
//
// int n;
// cin>>n;
//
// for(int r = 1; r<=n; r++){
//     for(int c = 1; c<= r; c++ ){
//         if((r+c)%2==0){   
//             cout<<"1";
//         }
//         else{
//             cout<<"0";
//         }
//     }
//     cout<<endl;
// }

// shape 9 (Rhombus)------------------------
// int n;
// cin>>n;
// for(int r = 1; r<=n; r++){
//     for(int c = 1; c<=n-r; c++){
//         cout<<" ";
//     }
//     for(int c = 1; c<=n; c++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// shape 10 (triangel)-----------------------
//
// int n;
// cin>>n;
// for(int r = 1; r<=n; r++){
//     for(int c = 1; c<=n-r; c++){
//         cout<<" ";
//     }
//     for(int c = 1; c<=r; c++){
//         cout<<c<<" ";
//     }
//     cout<<endl;
// }

// shape 11 (Palindromic pattern)
//
// int n;
// int count = n;
// cin>>n;
// for(int r = 1; r<=n; r++){
//     for(int c = 1; c<=n -r; c++){
//         cout<<"  ";
//     }
//     for(int k = r; k>=1; k-- ){
//         cout<<k<<" ";
//     }
//     for(int k = 2; k<=r; k++){
//         cout<<k<<" ";
//     } 
//     cout<<endl;
// }

// shape 12 (star Pattern)
// 
// int n;
// cin>>n;
// for(int r = 1; r<=n; r++){
//     for(int c = 1; c<=n-r; c++){
//         cout<<"  ";
//     }
//     for(int k = 1; k<=2*r-1; k++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// for(int r = n; r>=1; r--){
//     for(int c = 1; c<=n-r; c++){
//         cout<<"  ";
//     }
//     for(int k = 1; k<=2*r-1; k++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// shape 13
// int n;
// cin>>n;
// 
// for(int r = 1; r<= 3; r++ ){
//     for (int c = 1; c<=n; c++){
//         if (((r+c)%4==0) || (r == 2 && c%4 == 0) ){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }

}