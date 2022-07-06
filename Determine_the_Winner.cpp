#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int pa, pb, qa, qb, pt, qt;
        cin >> pa >> pb >> qa >> qb;
        pt = max(pa,pb);
        qt = max(qa,qb);
        if (qt > pt)
        {
            cout << "P"
                 << "\n";
        }
        else if(pt>qt){
            cout<<"Q\n";
        }
        else{
            cout<<"TIE"<<endl;
        }
    }
    return 0;
}