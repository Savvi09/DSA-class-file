
#include <iostream>
using namespace std;
 
class LTMatrix{
private:
    int n;
    int* A;
public:
    LTMatrix(int n)
    {
        this->n = n;
        A = new int [n * (n + 1)/2];
    }
    ~LTMatrix()
    { 
       delete[] A;
    }

    void Display(bool row=true);
    void setRowMajor(int i, int j, int x);
   
    int getRowMajor(int i, int j);
    
    int getN()
	{
	    return n;
	}
 
};
 
void LTMatrix::setRowMajor(int i, int j, int x) {
    if (i >= j){
        int index = ((i * (i - 1))/2) + j - 1;
        A[index] = x;
    }
}
 

 
int LTMatrix::getRowMajor(int i, int j) {
    if (i >= j){
        int index = ((i * (i - 1))/2) + j - 1;
        return A[index];
    } else {
        return 0;
    }
}
 

void LTMatrix::Display(bool row) 
{
    for (int i=1; i<=n; i++)
	{
        for (int j=1; j<=n; j++)
		{
            if (i >= j)
			    {
                    cout << getRowMajor(i, j) << " ";   
                } 
				else 
				{
                cout <<"0" << "  ";
                }
        }
            cout << endl;  
    }
}
 
int main() {
 
    LTMatrix rm(4);
    rm.setRowMajor(1, 1, 9);
    rm.setRowMajor(2, 1, 7);
    rm.setRowMajor(2, 2, 41);
    rm.setRowMajor(3, 1, 21);
    rm.setRowMajor(3, 2, 33);
    rm.setRowMajor(3, 3, 8);
    rm.setRowMajor(4, 1, 6);
    rm.setRowMajor(4, 2, 18);
    rm.setRowMajor(4, 3, 29);
    rm.setRowMajor(4, 4, 10);
 
    rm.Display();
    cout << endl;
 
  
  
 
    return 0;
}

