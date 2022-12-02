#include<iostream>
using namespace std;
#define MAX 100

struct Queue {
	int front, rear;
	int list[MAX];
};
void khoiTao(Queue& q);
bool isEmpty(Queue q);
bool isFull(Queue q);
void printQueue(Queue q);
void createQueue(Queue &q, int n);
int deQueue(Queue& q);
void findX(Queue q, int x);
int countX(Queue q, int x);
