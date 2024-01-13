#include <iostream>
#include <vector>
using namespace std;

pair<int,int> len[12];

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt;
    cin>>cnt;

    int big_area,small_area;
    for(int i=0;i<6;i++){
        int d,l;
        cin>>d>>l;
        len[i]=len[i+6]={d,l};
    }

    for(int i=3;i<12;i++){
        if(len[i].first==len[i-2].first && len[i-1].first==len[i-3].first){
            big_area=len[i+1].second*len[i+2].second;
            small_area=len[i-1].second*len[i-2].second;
            break;
        }
    }
    cout<<cnt*(big_area-small_area)<<'\n';
    return 0;
}