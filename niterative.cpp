#include <iostream>
#include <vector>
#include<conio.h>

using namespace std;

typedef vector<double> Vec;
typedef vector<Vec> Mat;

Vec operator*(const Mat &a, const Mat &b){
	int i, j;
	int m = a.size();
	int n = b.size();

	Vec prod(m);

	for (i = 0; i < m; i++){
		prod[i] = 0.;
		for (j = 0; j < n; j++)
			prod[i] += a[i][j] * b[i][j];
	}
	return prod;
}

int main(){
	int i, j, m, n;

	cout << "Enter the number of rows in the matrix \n";
	cin >> m;
	cout << "Enter the number of columns in the matrix \n";
	cin >> n;

	
	Vec row(n);
	Mat a;

	cout << "Enter the matrix\n";
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++)cin >> row[j];
		a.push_back(row);
	}


	Vec row2(n);
	Mat b;

	cout << "Enter the matrix\n";
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++)cin >> row[j];
		b.push_back(row);
	}



	cout << "Enter the vector\n";
	Vec x(n);
	for (j = 0; j < n; j++)
		cin >> x[j];

	Vec c = a*b;



cout << "\n\n Multiplication matrix of Matrix A and Matrix B :\n\n";
for (i = 0; i < m; i++)
{
	for (j = 0; j < n; j++)
	{
		
		cout << c[i] << "\n";
	}
	cout << "\n\n";
}
	
	_getch();
	return 0;
}
