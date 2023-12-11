#include <bits/stdc++.h>
using namespace std;

    class batsman {
        public:
        int runs = 100;

    };

    class bowler {
        public:
        int wickets = 50;
    };

    class wicketKeeper {
        public:
        int stumping = 30;
    };

    class fielder {
        public:
        int catches = 70;
    };

    class allRounder : public batsman, public bowler, public wicketKeeper, public fielder {
        public:
        int strikeRate;
        allRounder();
    };

    allRounder::allRounder(){
        runs = 200;
        wickets = 100;
        stumping = 60;
        catches = 150;
        strikeRate = 150;
    }

    int main() {
        batsman deep;
        bowler ttejuuu;
        wicketKeeper tanu;
        fielder shravan;
        allRounder shraavniii;

        cout << "deep runs : " << deep.runs << endl;
        cout << "ttejuuu wickets : " << ttejuuu.wickets << endl;
        cout << "tanu stumping : " << tanu.stumping << endl;
        cout << "shravan catches : " << shravan.catches << endl;
        cout << "shraavniii stats : "   << "runs : " << shraavniii.runs << " wickets : " << shraavniii.wickets << " stumping : " << shraavniii.stumping << " catches : " << shraavniii.catches << " strikeRate " << shraavniii.strikeRate << endl;



    
return 0;
}