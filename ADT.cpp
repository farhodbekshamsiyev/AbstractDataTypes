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
        head->prev = node;
        head = node;
    }
}

void ADT::pushBack(int data) {
    Node *node = new Node(data);
    if(tail == nullptr) {
        head = tail = node;
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

void ADT::topFront() {
    cout << head->value <<" at the beginning of the list\n";
}

void ADT::topBack() {
    cout << tail->value <<" at the end of the list\n";
}

bool ADT::find(int data) {
    Node *tmp = head;
    while(tmp != nullptr) {
        if(tmp->value == data) {
            return true;
        }
        tmp = tmp->next;
    }
    return false;
}

bool ADT::isEmpty() {
    if (head == nullptr && tail == nullptr) 
        return 0;
    return 1;
}

void ADT::reverseList() {
    
    Node *prev = NULL, *current = NULL, *next = NULL;
    current = head;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    // now let the head point at the last node (prev)
    head = prev;
}
