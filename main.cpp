/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <bits/stdc++.h>

#include "ADT.h"

#define INF (int)10e6
#define eps 10e-6
#define mp make_pair
#define pub push_back
#define pob pop_back
#define all(t) t.begin(),t.end()
#define LL long long
#define MOD 1000000007
#define fr(i, a, b) for(int i = a ; i <= b ; i++)
#define frev(i, a, b) for(int i = b ; i >= a ; i--)
#define rt return

using namespace std;

//ifstream fin ("input.txt");
//ofstream fout ("output.txt");

int main(int argc, char** argv) {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    //    freopen("input.in","r",stdin);
    //    freopen("output.out","w",stdout);
    
    ADT llist;
    llist.pushFront(3);
    llist.pushFront(2);
    llist.pushFront(1);
    llist.pushBack(4);
    llist.pushBack(5);
    llist.pushBack(6);
    llist.print(); 
    
    llist.popFront();
    llist.popBack();
    llist.print();

    return 0;
}