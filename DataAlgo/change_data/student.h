#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <string>

using std::string;

void change_1(std::stack<std::vector<std::queue<int>>> &a, int from, int to)
{
    std::stack<std::vector<std::queue<int>>> tmp;
    while(!a.empty()) {
        std::vector<std::queue<int>> vtmp = a.top();
        a.pop();
        for(auto &vit : vtmp) {
            std::queue<int> qtmp;
            while(!vit.empty()) {
                int ftmp = vit.front();
                vit.pop();
                if(ftmp == from) {
                    ftmp = to;
                }
                qtmp.push(ftmp);
            }
            vit = qtmp;
        }
        tmp.push(vtmp);
    }
    while(!tmp.empty()) {
        a.push(tmp.top());
        tmp.pop();
    }
}

void change_2(std::map<string, std::pair<std::priority_queue<int>, int>> &a, int from, int to)
{
    auto it = a.begin();
    while(it != a.end()) {
        if(it->second.second == from) {
            it->second.second = to;
        }
        std::priority_queue<int> pq;
        while(!it->second.first.empty()) {
            int tmp = it->second.first.top();
            it->second.first.pop();
            if(tmp == from) {
                tmp = to;
            }
            pq.push(tmp);
        }
        it->second.first = pq;
        it++;
    }
}

void change_3(std::set<std::pair<std::list<int>, std::map<int, std::pair<int, string>>>> &a, int from, int to)
{
    std::set<std::pair<std::list<int>, std::map<int, std::pair<int, string>>>> b;
    for(auto &s : a) {
        std::list<int> tmpl;
        for(auto &sf : s.first) {
            if(sf == from) {
                tmpl.push_back(to);
            }
            else {
                tmpl.push_back(sf);
            }
        }
        std::map<int, std::pair<int, string>> tmpMp;
        for(auto &itM : s.second) {
            if(itM.second.first == from) {
                if(itM.first == from) {
                    tmpMp[to] = {to,itM.second.second};
                } else {
                    tmpMp[itM.first] = {to,itM.second.second};
                }
            } else {
                if(itM.first == from) {
                    tmpMp[to] = {itM.second.first,itM.second.second};
                } else {
                    tmpMp[itM.first] = {itM.second.first,itM.second.second};
                }
            }
        }
        b.insert({tmpl,tmpMp});
    }
    a = b;
}

#endif
