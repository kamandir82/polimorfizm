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
    instrument I;
    I.graj();
    gitara G;
    G.graj();
    perkusja P;
    P.graj();
    instrument &cos1=G;
    cos1.graj();
	instrument &cos2=P;
    cos2.graj();
    instrument *w=new gitara;
    w->graj();
    delete w;
    w=new perkusja;
    w->graj();
    delete w;
    return 0;       
}