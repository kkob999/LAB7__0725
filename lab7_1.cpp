#include <iostream>
using namespace std;
string txt_s = "You have received Super Ultra Rare Unit!!!\n";
string txt_a = "You have received 5 gems.\n";
string txt_b = "You have received 1 gems.\n";
string txt_c = "You have received 2000 coins.\n";
string txt_d = "You have received very KAK items.\n";

int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  if (rank=='S'){
    cout<<txt_s<<txt_a<<txt_b<<txt_c<<txt_d;
  }
  else if(rank=='A'){
    cout << txt_a << txt_b << txt_c << txt_d;
  }
  else if(rank=='B'){
    cout << txt_b << txt_c << txt_d;
  }
  else if(rank=='C'){
    cout << txt_c << txt_d;
  }
  else if(rank=='D'){
    cout << txt_d;
  }
  else{
    cout << "";
  }
  return 0;
}