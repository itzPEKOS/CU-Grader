#include <vector>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    int vis[100001] = {0};
    for(auto it : A) {
        v.push_back(it);
        vis[it] = 1;
    }
    for(auto it : B) {
        if(!vis[it])
            v.push_back(it);
    }

    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    int vis[100001] = {0};
    for(auto it : B) {
        vis[it] = 1;
    }
    for(auto it : A) {
        if(vis[it])
            v.push_back(it);
    }

    return v;
}
