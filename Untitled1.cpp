#include<iostrem>
using namespace std;
class Name{
	string name;
	void display(){
		cout<<"Hello World"<<name<<endl;
	}
};
int main(){
	Name n;
	n.display();
	return 0;
}