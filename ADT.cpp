/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ADT.cpp
 * Author: f
 * 
 * Created on November 19, 2020, 9:10 PM
 */

#include "ADT.h"


ADT::ADT() {
    head = nullptr;
    tail = nullptr;
}


ADT::~ADT() {
    Node *tmp = nullptr;
    while(head) {
        tmp = head;
        head = head->next;
        delete tmp;
    }
    head = nullptr;
    tail = nullptr;
}

void ADT::pushFront(int data) {
    Node *node = new Node(data);
    if(head == nullptr) {
        head = tail = node;
    } else {
        node->next = head;
        head = node;
    }
}

void ADT::pushBack(int data) {
    Node *node = new Node(data);
    if(tail == nullptr) {
        tail = node;
    } else {
        node->prev = tail;
        tail->next = node;
        tail = node;
    }
}

void ADT::popFront() {
    Node *tmp = head;
    cout << tmp->value <<" deleted\n";
    head = head->next;
    head->prev = nullptr;
    delete tmp;
}

void ADT::popBack() {
    Node *tmp = tail;
    cout << tmp->value <<" deleted\n";
    tail = tail->prev;
    tail->next = nullptr;
    delete tmp;
}

void ADT::print() {
    Node *node = head;
    while(node != nullptr) {
        cout << node->value <<" ";
        node = node->next;
    }
    cout << endl;
}

