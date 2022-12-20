#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> umap;

    umap["SUSSY"] = 69;
    umap["baka"] = 420;
    umap["Rudransh"] = 13;

    for (auto x : umap)
        cout << x.first << " " << x.second << endl;
}