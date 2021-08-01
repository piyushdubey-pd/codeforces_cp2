#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> vec;
    for (int i=0;i<4;i++){
        vec.push_back(make_pair(i,(i+1)));
    }
    for (int i=0; i<5;i++){
        cout << vec[i].first << " " << vec[i].second << endl;
    }

    return 0;
}
// int main(){
//     vector<pair<int,int>> vect;
//     for(int i=0;i<4;i++){
//         vect.push_back(make_pair(i,(i+1)));
//     }
//     for(int i=0;i<4;i++)
//     {
//         cout<<vect[i].first<<" "<<vect[i].second<<endl;
//     }
//     return 0;
// }
