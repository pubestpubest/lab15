#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void findLocalMax(const double matA[][N],bool matB[][N]){
	int row=1,col=1,i=0,j=0;
	while(i<N){
		j=0;
		while(j<N){
			matB[i][j++]=false;
		}
		i++;
	}
	while(row<N-1){
		col=1;
		while(col<N-1){
			if(matA[row][col]>=matA[row][col-1]&&matA[row][col]>=matA[row][col+1]&&matA[row][col]>=matA[row-1][col]&&matA[row][col]>=matA[row+1][col])
				matB[row][col]=true;
			else
				matB[row][col]=false;
			col++;
		}
		row++;
	}
}

void inputMatrix(double mat[][N]){
	int row=0,col=0;
	while(row<N){
		col=0;
		cout<<"Row "<<row+1<<": ";
		while(col<N)
			cin>>mat[row][col++];
		row++;
	}
}

void showMatrix(const bool mat[][N]){
	int row=0,col=0;
	while(row<N){
		col=0;
		while (col<N){
			if(mat[row][col]==true) cout<<"1 ";
			else cout<<"0 ";	
			col++;
		}
		cout<<"\n";
		row++;
	}
}