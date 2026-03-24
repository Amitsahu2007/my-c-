// #include<iostream>
// using namespace std;
// int main(){
//     int i,n;
//     cout<<"enter the no of columns:\n";
//     cin>>n;
//     for(i=0;i<n;i++){
//         int sum;
//         sum=65+i;
//         char x=(char)sum;
//         cout<<"\t"<<x;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i, j;
//     char c='A';
//     int n;
//     cout<<"enter the number:\n";
//     cin>>n;
//     for(i=0;i<n;i++){
//           for(j=0;j<3;j++){
//             cout<<""<<c;
//             c++;
//           }
//         c='A';  
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i, j;
//     int n;
//     cout<<"enter the no of columns:\n";
//     cin>>n;
//     for(i=0;i<n;i++){
//        for(j=0;j<i;j++){
//         cout<<" ";
//        }
//        for(int k=0;k<n-i;k++){
//         cout<<i+1;
//        }
//        cout<<"\n";
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n;
//     cout<<"enter the no of columns:\n";
//     cin>>n;
//     //for total no of rows 
//     for(i=1;i<=n;i++){
//      for(j=0;j<n-i+1;j++){
//            cout<<" ";
//         }
//      for(k=1;k<=i;k++){
//               cout<<k;
//            }
//      for(k=i-1;k>=1;k--){
//             cout<<k;
//            }
//            cout<<"\n";
//     }
//     return 0;
// }
//HOLLOW DIAMOND PATTERN :
#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int n;
   cout<<"enter the number of rows:\n";
   cin>>n;int i,j,k,l;
   for(i=0;i<n;i++){
      for(j=0;j<n-i;j++){
          cout<<" ";}
      cout<<"*";
      for(k=1;k<2*i;k++){
         cout<<" ";
      }
     if(i!=0){
      cout<<"*";
     }
       cout<<"\n";
}
   for(i=0;i<n-1;i++){
      for(j=0;j<i+1;j++){
         cout<<" ";
      }
      cout<<"*";
      for(k=0;k<2*(n-i-1)-1;k++){
         cout<<" ";
      }
      if(k!=n-2){
         cout<<"*"<<endl;
      }
      }
   return 0;
}