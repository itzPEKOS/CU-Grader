#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <set>
#include <utility>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        n = 3;
        e = 0;
        v = {0, 1, 2};
        adj = {};
    }

    DenseGraph(int n_in) {
        n = n_in;
        e = 0;
        for(int i = 0; i < n; i++) {
            v.insert(i);
        }
        adj = {};
    }

    DenseGraph(const DenseGraph& G) {
        n = G.n;
        e = G.e;
        v = G.v;
        adj = G.adj;
    }

    void AddEdge(int a, int b) {
        if(adj.find({a,b}) == adj.end()) {
            adj.insert({a,b});
        }
    }

    void RemoveEdge(int a, int b) {
        adj.erase({a,b});
    }

    bool DoesEdgeExist(int a, int b) const {
        if(adj.find({a,b}) != adj.end()) {
            return true;
        } else {
            return false;
        }
    }

    DenseGraph Transpose() const {
        DenseGraph tmp;
        tmp.n = n;
        tmp.e = n;
        tmp.v = v;
        for(std::pair<int,int> it : adj) {
            tmp.adj.insert({it.second,it.first});
        }
        return tmp;
    }

protected:
    int n, e;
    set<int> v;
    set<std::pair<int,int>> adj;
};
#endif // __DENSE_GRAPH_H__
