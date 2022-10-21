#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

typedef struct node{
    int num;
    struct node *left,*right;
}node;
node* newnode(int num){
    node *p;
    p=(node*)malloc(sizeof(node));
    p->num=num;
    p->left = p->right =NULL;
    return p;
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,i,num;
    char a[100];
    cin >> n;
    node *head,*run,*last,*use;
    head = newnode(999);
    run = newnode(0);
    last = newnode(0);
    use = newnode (0);
    run = last =head;
    for(int i=0;i<n;i++){
        cin >> a;
        if(!strcmp(a,"head")){
            run = head;
        }
        else if(!strcmp(a,"next")){
            if(run->right!=NULL)
                run=run->right;
        }
        else if(!strcmp(a,"tail")){
            run=last;
        }
        else if(!strcmp(a,"add")){
            cin >> num;
            if(run == last){
                use=newnode(num);
                use ->left =run;
                run->right =use;
                last=use;
            }
            else{
                use = newnode(num);
                run->right->left=use;
                use->right=run->right;
                run->right=use;
                use -> left=run;
                while(last->right!=NULL)
                    last=last->right;
            }
        }
        else if(!strcmp(a,"remove")){
            if(run!=last){
                use=run->right;
                if(use->right!=NULL){
                    run ->right=use->right;
                    run ->right->left=run;

                }
                else
                    run->right=NULL;
                for(last=run;last->right!=NULL;){
                    last =last ->right;
                }
            }
        }
        else if(!strcmp(a,"call")){
            cout << run->num << '\n';
        }
        else if(!strcmp(a,"list")){
            while(run->right!=NULL){
                cout << run->num << ' ';
                run=run->right;
            }
            cout << run ->num << '\n';
        }
    }

    return 0;
}

