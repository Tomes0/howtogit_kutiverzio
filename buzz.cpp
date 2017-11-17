#include <iostrean>

using namespace std;

int main(){
	for(int i=0;i<100;i++){
		if(i%4==0)cout<<"buzz";
		else cout<<i;
	}
}

