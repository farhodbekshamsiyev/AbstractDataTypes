/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ADT.h
 * Author: f
 *
 * Created on November 19, 2020, 9:10 PM
 */

#ifndef ADT_H
#define ADT_H

#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node *next{nullptr};
    Node *prev{nullptr};
    
    Node(int data): value(data), next(nullptr), prev(nullptr) {}

};

class ADT {
    Node *head;
    Node *tail;
    
public:
    ADT();
    ADT(const ADT& orig) = delete;
    ADT& operator=(ADT const& a) = delete;
    virtual ~ADT();

    void pushFront(int data);
    void pushBack(int data);

    void popFront();
    void popBack();

    void topFront();
    void topBack();

    bool find(int data);
    bool isEmpty();

    void print();

};

#endif /* ADT_H */

