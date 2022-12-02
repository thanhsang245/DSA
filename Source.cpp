#include"Header.h"
void khoiTao(Queue& q) {
	q.front = q.rear = -1;
}
bool isEmpty(Queue q) {
	return q.front == -1 ? true : false;
}
bool isFull(Queue q) {
	return (q.rear - q.front == MAX - 1) ? true : false;
}
void printQueue(Queue q) {
	if (!isEmpty(q))
		for (int i = q.front; i <= q.rear; i++)
			cout << q.list[i] << "\t";
	else
		cout << "Queue rong!";
}
void createQueue(Queue& q, int n) {
	if (n > MAX)
		n = MAX;
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> q.list[i];
		if (isEmpty(q))
			q.front = q.rear = 0;
		else
			q.rear++;
	}
}
int deQueue(Queue& q) {
	int gt;
	if (isEmpty(q))
		cout << "Hang doi rong.";
	else {
		gt = q.list[q.front];
		q.front++;
		return gt;
	}
}
void findX(Queue q, int x) {
	for (int i = q.front; i <= q.rear; i++) {
		if (q.list[i] == x) 
			cout << i << "\t";
	}
}
int countX(Queue q, int x) {
	int dem = 0;
	for (int i = q.front; i <= q.rear; i++) {
		if (q.list[i] == x)
			dem++;
	}
	return dem;
}
