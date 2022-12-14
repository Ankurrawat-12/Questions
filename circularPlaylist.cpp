// #include<bits/stdc++.h>
 
// using namespace std;

 
// pair<long long, long long> circluarPlaylist(vector<unsigned> songs, long long seconds){
//     pair<long long, long long> song_duration;

//     while(seconds > 0){
//         int i;
//         for(i = 0; i < songs.size(); i++){
//             seconds -= songs[i];
//             if(seconds < 0){
//                 song_duration.first = i+1;
//                 song_duration.second = songs[i] + seconds;
//                 return song_duration;
//             }
//         }
//     }
//     return song_duration;
// }
 
// int main(){
//     long long numberOfSongs;
//     long long seconds;
//     cin>>numberOfSongs>>seconds;
//     vector<unsigned> songs;
//     for(int i = 0; i < numberOfSongs; i++){
//         unsigned element;
//         cin>>element;
//         songs.push_back(element);
//     }
    
//     pair<long long, long long> song_duration = circluarPlaylist(songs, seconds);
    
//     cout<<song_duration.first<<" "<<song_duration.second;
// }

#include<bits/stdc++.h>
 
using namespace std;

int main(){
    long long n, t;
    
    cin>>n>>t;
    
    long long sum[n+1];
    sum[0] = 0;
    long long s = 0;
    for(long long i = 0; i < n; i++){
        long long a;
        cin>>a;
        s += a;
        sum[i + 1] = s;
    }
    
    t = t%s;
    
    long long i = 0;
    while(t> sum[i]){
        i++;
    }
    
    cout<<i<<" "<<t - sum[i-1];
    return 0;
    
}