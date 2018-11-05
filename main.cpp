#include <iostream>
using namespace std;
class instrument {
	public:
		virtual void graj() {
			cout<<"Dzwiek\n";
		}
};
class gitara : public instrument {
	public:
		virtual void graj() {
			cout<<"Struny\n";
		}	
};
class perkusja : public instrument {
	public:
		virtual void graj() {
			cout<<"Bebny\n";
		}	
};
int main()
{
	//poprawki
    instrument *w=new gitara;
    w->graj();
    delete w;
    w=new perkusja;
    w->graj();
    delete w;
    return 0;       
}