#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

struct node {
int data;
node *next;
};
node *head;
void ordered(int d){
    node *n=new node;
    n->data=d;
    n->next=NULL;
    if(head==NULL)
    {
        head=n;

    }else if(d<=head->data)
    {

        n->next=head;
        head=n;


    }else{

        node *prev,*t=head;
        while(t!=NULL&&t->data<d){
                prev=t;
            t=t->next;
        }
        prev->next=n;
        n->next=t;

    }

}
void traverse(){

node *t= head;
while(t!=NULL)
{
    cout<<t->data<<" ";
    t=t->next;
}


}




int main(){
    head=NULL;
    ordered(67);
    ordered(6837);
    ordered(344);
    ordered(343);
    ordered(4);
    ordered(777);
    ordered(3478374);

    traverse();



}
