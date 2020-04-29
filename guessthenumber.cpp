#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(int argc, char* argv[]){

    start:
    srand(time(NULL));

    int x=rand()%9; x++; //=22;
    int y;
    char opc;


    cout<<"I'm thinking of a number! Try to guess the number I'm thinking of: ";
    inicio:
    cin>>y;
    if(y>x){
            cout<<" Too high! Guess again: ";
            goto inicio;
            }else if(y<x){
                  cout<<" Too low! Guess again: ";
                   goto inicio;
                  }else if(y=x){
                        cout<<" That's it!"<<"\n";
                        }
                        cout<<" Would you like to play again? (y/n) ";
                        cin>>opc;
                        if(opc=='y'){
                                     goto start;
                                     }

    return 0;
}
