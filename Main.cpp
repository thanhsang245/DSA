#include"Header.h"

int main() {
	Queue q;
	khoiTao(q);
	int n,x;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	createQueue(q,n);
	printQueue(q);
	cout << "\nNhap x: ";
	cin >> x;
	findX(q, x);
	cout << "\nSo luong phan tu co gia tri x: " << countX(q, x);
	cout << "\nGia tri cua phan tu dau tien trong Queue: " << deQueue(q);
}