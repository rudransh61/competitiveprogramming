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
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }

/*BIT*/
#define BIT_SET(a,b) ((a) |= (1ULL<<(b)))
#define BIT_CLEAR(a,b) ((a) &= ~(1ULL<<(b)))
#define BIT_FLIP(a,b) ((a) ^= (1ULL<<(b)))
// '!!' to make sure this returns 0 or 1
#define BIT_CHECK(a,b) (!!((a) & (1ULL<<(b))))
#define BITMASK_SET(x, mask) ((x) |= (mask))
#define BITMASK_CLEAR(x, mask) ((x) &= (~(mask)))
#define BITMASK_FLIP(x, mask) ((x) ^= (mask))
#define BITMASK_CHECK_ALL(x, mask) (!(~(x) & (mask)))
#define BITMASK_CHECK_ANY(x, mask) ((x) & (mask))

const int N=1e7+10; int prime[20000010]; 
bool isprime[N]; int nprime; 
template <typename T> void Sieve(T a) 
{nprime = 0;memset(isprime,true,sizeof(isprime));
isprime[1]=false;for(int i=2;i<N;i++){
if(isprime[i]){prime[nprime++]=i;for(int j=2;i*j<N;j++)
isprime[i*j]=false;}}}

template <typename T> bool miller_rabin(T p, T itt) 
{if(p<2) return 0 ;if(p==2) return 1;if(p%2==0) 
return 0 ;ull s = p-1 ;while(s%2==0) s/=2;
for(ll i=1;i<=itt;i++) {ull a = rand() % (p-1)+1 , temp = s ;
ull mod = modulo(a,temp,(ull)p);while(mod!=1 and mod!=p-1 
and temp!=p-1){mod = Mulmod(mod,mod,(ull)p);temp*=2;}
if(temp%2==0 and mod!=p-1) return false ;}return true;} 

template <typename T> inline T PrimeFactors(T n)
{ll cnt=0,sum=1;for(int i=0; prime[i]*prime[i]<=n 
and i<nprime;i++){cnt=0;while(n%prime[i]==0)
{cnt++;n/=prime[i];}sum*=(cnt+1);}
if(n>1)sum*=2;return sum;} 
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
	//freopen("output.txt","w",stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;cin>>t;
    while(t--){
        code();
    }
}