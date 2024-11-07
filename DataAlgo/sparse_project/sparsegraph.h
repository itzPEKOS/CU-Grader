#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here

#include <bits/stdc++.h>
using namespace std;

class SparseGraph{
public:
    SparseGraph() {
        v.resize(3);
    }

    SparseGraph(int n_in) {
        v.resize(n_in);
    }

    SparseGraph(const SparseGraph& G) {
        v.clear();
        for(int i = 0; i < G.v.size(); i++) {
            v.push_back(G.v[i]);
        }
    }

    void AddEdge(int a, int b) {
        if(find(v[a].begin(),v[a].end(),b) == v[a].end()) {
            v[a].push_back(b);
        }
    }

    void RemoveEdge(int a, int b) {
        auto it = find(v[a].begin(),v[a].end(),b);
        if(it != v[a].end()) {
            v[a].erase(it);
        }
    }

    bool DoesEdgeExist(int a, int b) const {
        if(find(v[a].begin(),v[a].end(),b) != v[a].end()) {
            return true;
        } else {
            return false;
        }
    }

    SparseGraph Transpose() const {
        SparseGraph tmp(v.size());
        for(size_t i = 0; i < v.size(); i++) {
            for(auto j : v[i]) {
                tmp.AddEdge(j,i);
            }
        }
        return tmp;
    }

protected:
    vector<vector<int>> v;
};
#endif // __SPARSE_GRAPH_H__

