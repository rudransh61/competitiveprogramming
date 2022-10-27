#include <bits/stdc++.h>
using namespace std;

void permute(string a, int l, int r)
{
    if (l == r)
        cout << a << endl;
    else
    {
        for (int i = l; i <= r; i++)
        {

            swap(a[l], a[i]);

            permute(a, l + 1, r);

            swap(a[l], a[i]);
        }
    }
}


//other
void subs(string s, string ans=""){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    subs(ros,ans);
    subs(ros,ans+ch);
}


int main()
{
    string str = "ABC";
    int n = str.size();
    permute(str, 0, n - 1);
    cout<<endl<<endl<<endl<<"second"<<endl<<endl<<endl;
    subs(str,"");
    return 0;
}