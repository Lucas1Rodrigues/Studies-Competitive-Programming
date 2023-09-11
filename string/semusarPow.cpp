#include <iostream>
#include <iomanip>


using namespace std;

int main(){
	int i=0;
	double x,y,p=1.0;
    cin >> x >> y;
	for(i=0;i<y;i++){
	 p *= x;
	
	}
	cout << fixed << setprecision(4) << p << endl;

    return 0;
}
