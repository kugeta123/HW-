#include<bits/stdc++.h>
using namespace std;

enum Enum
{
    one = 1,
    eleven = 11,
    heleven = 111,
    sheleven = 1111
};

int main(){
	int intArray[11];
	
    cout << (one | eleven) << endl;    
    cout << (eleven & heleven) << endl;   
    cout << (eleven ^ sheleven) << endl;  
    cout << (heleven << 1) << endl;   
    cout << (heleven >> 1) << endl;   
    cout << (sheleven >> 1) << endl; 
    cout << (sheleven << 1) << endl; 
    cout << (one + eleven) << endl;    
    cout << (heleven - eleven) << endl;    
    cout << (eleven * sheleven) << endl;   
    cout << (sheleven / eleven) << endl;   

    return 0;
}
