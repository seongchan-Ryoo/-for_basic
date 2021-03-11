#include <iostream>
using namespace std;

int n;

char tree[26][2]={'.',};

char p,c1,c2;
/*
void make_tree(){
	for(int i=1;i<=n;i++){
		scanf("%c %c %c",&p,&c1,&c2);
			tree[p-'A'][0]=c1;
			tree[p-'A'][1]=c2;
	}
}
*/
void preorder(char c){
	if(c==',') return;
	else{
		printf("%c",c);
		preorder(tree[c-'A'][0]);
		preorder(tree[c-'A'][1]);
	}
}

void inorder(char c){
	if(c==',') return;
	else{
		inorder(tree[c-'A'][0]);
		printf("%c",c);
		inorder(tree[c-'A'][1]);
	}
}

void postorder(char c){
	if(c==',') return;
	else{
		postorder(tree[c-'A'][0]);
		postorder(tree[c-'A'][1]);
		printf("%c",c);
	}
}
