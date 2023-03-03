#include <cmath>
using namespace std;
void qoshish(){
  int a,b;
  cin>>a>>b;
  cout<<a+b;
}
void ayrish(){
  int a,b;
  cin>>a>>b;
  cout<<a-b;
}
void kopaytrish(){
  int a,b;
  cin>>a>>b;
  cout<<a*b;
}
void bolish(){
  int a,b;
  cin>>a>>b;
  cout<<a/b;
}
void daraja(){
  int a,b;
  cin>>a>>b;
  cout<<pow(a,b);
}
void ildiz(){
  int a;
  cin>>a;
  cout<<sqrt(a);
}
int main(){
  char g;
  cin>>g
    if(g=='+'){
     qoshish();
    }else if (g=='-'){
    ayrish();
    }else if (g =='*'){
    kopaytrish();
    }else if (g=='/'){
    bolish();
    }else if (g=='%'){
    ildiz();
    }else if (g=='^'){
    daraja();
    }
    return 0;
}
