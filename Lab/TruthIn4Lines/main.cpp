#include<iostream>
#include<string>
using namespace std;
int main(){
 
     cout << "P  Q  ~P  ~Q  P&Q P|Q  P^Q P^Q^Q P^Q^P ~(P&Q) ~P|~Q ~(P|Q) ~P&~Q" << endl; //header
     // Nested loop for boolean algorithim 
     for (int p=1; p>=0; p--){
        for (int q=1;q>=0; q--){
          cout << (p? 'T' : 'F')<<"  "
               << (q ? 'T' : 'F')<<"   "
               << (!p ? 'T' : 'F')<<"   "
               << (!q ? 'T' : 'F')<<"   "
               << (p&q ? 'T' : 'F')<<"   "
               << (p|q ? 'T' : 'F')<<"    "
               << (p^q ? 'T' : 'F')<<"    "
               << (p^q^q ? 'T' : 'F')<<"     "
               << (p^q^p ? 'T' : 'F')<<"      "
               << (!(p&q) ? 'T' : 'F')<<"     "
               << (!p||!q ? 'T' : 'F')<<"     "
               << (!(p|q) ? 'T' : 'F')<<"      "
               << (!p&!q ? 'T' : 'F')<<"    "
               << endl;
        }
     }
    return 0;
}