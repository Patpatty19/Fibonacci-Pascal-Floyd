#include <iostream>
using namespace std;

  
void reverseFibonacci(int n) 
{ 
    int* a = new int[n]; 
  
    a[0] = 0; 
    a[1] = 1; 
  
    for (int i = 2; i < n; i++) { 
  
        a[i] = a[i - 2] + a[i - 1]; 
    } 
  
    for (int i = n - 1; i >= 0; i--) { 
  
        cout << a[i] << " "; 
    }
	  
} 


int pascal (int rows2){


// pascal (inverted)
    
    int coef = 1;

    for(int i = rows2; i >= 1; --i)
    {
        for(int space = 0; space <= rows2-i; space++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
    }

    return 0;
}



int floyd (int rows) {
	


	// floyd (inverted) 
	
	

    for(int i = rows; i >= 1; i--)
    {
        int number = i;
		for(int j = 0; j <= i; j++)
        {
            cout << number << " ";
            ++number;
        }
        cout << endl;
    }

    return 0;
}




int main(){
	
	int number;
	
	
	cout <<" There are 3 types of functions below: " << endl;
	cout <<" Please choose one: " << endl;
	cout <<" 1 = Fibonacci sequence " << endl;
	cout <<" 2 = Pascal sequence " << endl;
	cout <<" 3 = Floyd sequence " << endl;
	cin >> number;
	
	switch (number){
		case 1: 
		cout << "Input the range: " << endl;
		cin >> number;
		 reverseFibonacci(number);
		
		break;
		
		case 2:
		cout << "Input the rows: " << endl;
		cin >> number;
		pascal(number);
		
		break; 
		
		case 3:
		cout << "Input the rows: " << endl;
		cin >> number;
		floyd(number);
		
		break;
		 
			
	}
	
	
}
	

