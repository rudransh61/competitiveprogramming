#include <bits/stdc++.h>
using namespace std;
/* clang-format off */
/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
/* FUNCTIONS */
void yes() {cout<<'Y'<<'E'<<'S'<<endl;}
void no() {cout<<'N'<<'O'<<endl;}
#define forl(i,s,e) for(long long int i=s;i<e;i++)
/* CONST*/
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
/* UTILS */
#define read(type) readInt<type>()
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { return __gcd(a, b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
bool isprime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool ispalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        return true;
    }
    else {
        return false;
    }
}
/*BIT*/
#define setbit(a,b) ((a) |= (1ULL<<(b)))
#define clearbit(a,b) ((a) &= ~(1ULL<<(b)))
#define flipbit(a,b) ((a) ^= (1ULL<<(b)))
// '!!' to make sure this returns 0 or 1
#define checkbit(a,b) (!!((a) & (1ULL<<(b))))
#define setmask(x, mask) ((x) |= (mask))
#define clearmask(x, mask) ((x) &= (~(mask)))
#define flipmask(x, mask) ((x) ^= (mask))
#define allclearmask(x, mask) (!(~(x) & (mask)))
#define checkanymask(x, mask) ((x) & (mask))
const int N=1e7+10; int prime[20000010];
const double goldenmean = (1.0 + sqrt(5)) / 2.0;
const double goldenratio = (1.0 - sqrt(5)) / 2.0;
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
int nprime;
void sieve(int n)
{
    prime[0] = 1;
    for (int i = 3; i*i <= n; i += 2) {
        if (prime[i / 2] == 0) {
            for (int j = 3 * i; j <= n; j += 2 * i)
                prime[j / 2] = 1;
        }
    }
}
int SumOfPrimeFactrs(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (isprime(i))
                sum += i;
        }
    }
    return sum;
}
int nfibo(int n){
    return (binpow(goldenmean,n) + binpow(goldenratio,n))/sqrt(5);
}
int binsearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binsearch(arr, l, mid - 1, x);
        return binsearch(arr, mid + 1, r, x);
    }
    return -1;
}
/****************** Prime Generator End **********************/
/****************** Geometry *****************/
template <typename T> inline T PointDistanceHorVer(T x1,T y1,T x2, T y2)
{return abs(x1-x2)+abs(y1-y2);}
template <typename T> inline T PointDistanceDiagonally(T x1,T y1,T x2, T y2)
{return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));}
template <typename T> inline T PointDistanceMinimum(T x1,T y1,T x2, T y2)
{ T tmp1=abs(x1-x2); T tmp2=abs(y1-y2); T tmp3=abs(tmp1-tmp2);
T tmp4=min(tmp1, tmp2); return tmp3+tmp4; }
template <typename T> inline T PointDistance3D(T x1,T y1,T z1,T x2,T y2,T z2)
{return sqrt(square(x2-x1)+square(y2-y1)+square(z2-z1));}
template <typename T> inline T Cube(T a){return a*a*a;}
template <typename T> inline T RectengularPrism(T a,T b,T c)
{return a*b*c;}
template <typename T> inline T Pyramid(T base, T height)
{return (1/3)*base*height;}
template <typename T> inline T Ellipsoid(T r1,T r2,T r3)
{return (4/3)*PI*r1*r2*r3;}
template <typename T> inline T IrregualarPrism(T base, T height)
{return base*height;}
template <typename T> inline T Sphere(T radius)
{ return (4/3)*PI*radius*radius*radius;}
template <typename T> inline T CylinderB(T base, T height)
{return base*height;} // base and height
template <typename T> inline T CylinderR(T radius, T height)
{return PI*radius*radius*height;} // radius and height
template <typename T> inline T Cone (T radius,T base, T height)
{return (1/3)*PI*radius*radius*height;}
/****************** Geometry end *****************/
/* Main()  function */
void code()
{
    int n;
    cin>>n;
    int arr[n];
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--){
        code();
    }
}