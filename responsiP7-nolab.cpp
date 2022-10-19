#include <iostream>
#define MAX 50
using namespace std;

void push();
void pop();
void olah();
void print();
bool isfull();
char pesan[MAX]{};
int top=-1;
char isi;
char terolah[MAX]{};

int main(){
    cout<<"Masukkan Pesan Rusak : ";
    cin>>pesan;

    olah();
    print();

}

void olah(){
    for(int i=0;i<pesan[i]!='\0';i++){
        if(pesan[i]=='*'){
            pop();
        }
        else{
            isi=pesan[i];
            push();
        }
    }
}

void push(){
    if(!isfull()){
        top++;
        terolah[top]=isi;
    }
    else
        cout<<"\n!!!STACK PENUH MAS!!!\n";
}

void pop(){
}

bool isfull(){
    if(top==MAX-1)
        return true;
    else
        return false;
}

void print(){
    for(int i=0;i<=top;i++){
        cout<<terolah[i];
    }
    cout<<"\n";
}
