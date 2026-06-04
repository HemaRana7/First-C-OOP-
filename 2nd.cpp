//volume
#include<iostream>
using namespace std;
class Volume{
	int l,b,h;
	public:
		void readvolume(){
			cout<<"Enter length,breadth,height";
			cin>>l>>b>>h;
		}
		void displayvolume(){
			cout<<"Volume:"<<(l*b*h);
		}
};
int main(){
	Volume v;
	v.readvolume();
	v.displayvolume();
	return 0;
}