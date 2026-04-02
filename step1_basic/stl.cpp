#include<bits/stdc++.h>
using namespace std;
// void print(){
//     cout<<"Abhishek"<<endl;
// }
// int sum(int n, int m){
//     return n+m;
// }
// int main(){
//     int a,b;
//     print();
//     a=sum(12,54);
//     cout<<a;
// }

// void explainpair(){
//     pair<int,int> p={1,3};
//     cout<<p.first<<" "<<p.second<<endl;
//     pair<int, pair<int,int>> q={4,{8,6}};
//     cout<<q.second.second<<endl;
//     pair<int,int> arr[]={{1,3},{7,6},{8,4}};
//     cout<<arr[1].first<<" "<<arr[0].second;
// }
// int main(){
//     explainpair();
// }

// void explainvector(){
// vector<int> v;
// v.push_back(1);
// v.emplace_back(2);
// vector<pair<int,int>>vec;
// v.push_back({1,2});
// v.emplace_back(1,2);
// cout<<v[0];
// }
// int main(){
//     explainvector();
// }

// int main(){
//     vector<int> vec={1,2,3};
//     cout<<vec[0];
// }

// int main(){
//     vector<int> vec(3,0);
//     cout<<vec[0]<<endl;
//     cout<<vec[1]<<endl;
//     cout<<vec[2]<<endl;

// }

// int main(){
//     set<int> s;
//     s.insert(10);
//     s.insert(20);
//     s.insert(10);
//     s.insert(80);
//     s.insert(50);
//     s.insert(20);
//     for(int x: s){
//         cout<< x<<" ";
//     }
//     for(auto it = s.begin(); it != s.end(); it++){
//         cout<<*it<<" ";
//     }
// }

//in desending order
// int main(){
//     set<int,greater<int>> s;
//     s.insert(10);
//     s.insert(20);
//     s.insert(10);
//     s.insert(80);
//     s.insert(50);
//     s.insert(20);
    
//     for(auto it = s.begin(); it != s.end(); it++){
//         cout<<*it<<" ";
//     }
//     cout<<endl;
//     if(s.find(80) !=s.end()){
//         cout<<"Present"<<endl;
//     }else{
//         cout<<"absent"<<endl;
//     }
// }

// remove duplicate without sorting
// int main() {
//     list<int> l = {10, 50, 10, 60, 20, 40, 30};

//     unordered_set<int> seen;

//     for (auto it = l.begin(); it != l.end(); ) {
//         if (seen.count(*it)) {
//             it = l.erase(it);   // erase returns next iterator
//         } else {
//             seen.insert(*it);
//             it++;
//         }
//     }

//     for (int x : l) {
//         cout << x << " ";
//     }
// }



//sorting without remove duplicate
// int main(){
//     multiset<int> ms;
//     ms.insert(10);
//     ms.insert(80);
//     ms.insert(20);
//     ms.insert(10);
//     ms.insert(60);

//     for(auto it=ms.begin(); it !=ms.end();it++){
//         cout<<*it<<" ";
//     }
    
// }


//unorder set
// int main(){
//     unordered_set<int> s;
//     vector<int> v;
//     s.insert(50);
//     s.insert(80);
//     s.insert(10);
//     s.insert(80);
//     s.insert(90);
//     s.insert(50);
//     s.insert(80);
//     for(int x: s){
//         v.push_back(x);
//     }
//     reverse(v.begin(),v.end());
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
    
// }

//create map
// int main(){
//     map<int,int>m;
//     m.insert(make_pair(20,30));
//     m.insert(make_pair(30,130));
//     m.insert(make_pair(80,70));
//     m.insert(make_pair(10,90));
//     m.insert(make_pair(20,90));
//     m[100]=60;  //you can insert value or update also
//     m[20]=800;  //you can insert value or update also
//     for(auto it=m.begin();it!=m.end();it++){
//         cout<<it->first<<" "<<it->second<<endl;
//     }
//     cout<<endl;
//     cout<<m[80]<<endl;
//     m.erase(20);    //erase 20
//     if(m.count(20)){    //print if 20 exit
//         cout<<m[20]<<endl;
//     }
// }


//multimap
// int main(){
    
//     multimap<int,int>m;
//     m.insert(make_pair(20,30));
//     m.insert(make_pair(30,130));
//     m.insert(make_pair(80,70));
//     m.insert(make_pair(10,90));
//     m.insert(make_pair(20,90));
//     // m[100]=60;  //you can not insert value or update in multimap
//     // m[20]=800;  //you can not insert value or update 
//     for(auto it=m.begin();it!=m.end();it++){
//         cout<<it->first<<" "<<it->second<<endl;
//     }
   
// }

//unordered_map  
//duplicate is not allowed                                           
int main(){

    unordered_map<int,int>m;
    m.insert(make_pair(20,30));
    m.insert(make_pair(30,130));
    m.insert(make_pair(80,70));
    m.insert(make_pair(10,90));
    m.insert(make_pair(20,90));
    m[20]=70;//insert or update allowed
     for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}