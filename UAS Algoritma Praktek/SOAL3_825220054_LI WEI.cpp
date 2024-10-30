#include<bits/stdc++.h>
using namespace std;

//a. struct linked list
struct node {
    float npm;
    float nilai[4];
    float ipk;
    node *next;
 };
 
typedef struct node *mhs;
int x;


mhs create(int total){
	int value;
	mhs o;
	o = (mhs)malloc(sizeof(struct node));
	x = total;
	o->next = NULL;
	return(o);
	}
 
mhs insert_tail(mhs head, int total) {
	mhs tail = head;
	while (tail->next != NULL)
	tail = tail->next;
	
	mhs new_node = create(total);
	tail->next = new_node;

	return (head);
}

int main(){
 	node n;
 	ifstream file ("data_b.txt");
 	int k=0;
 	while (file << n.npm << n.nilai << n.ipk){
 		if (n.nim>= 825220000){
    	cout << n.npm << n.nilai[1] << n.nilai[2] << n.nilai[3] << n.nilai[4] << n.ipk << "Sistem Informasi" << endl;
   		}
 		if (n.npm <= 825220000 && n.npm[i] >= 525220000) {
    	cout << n.npm << n.nilai[1] << n.nilai[2] << n.nilai[3] << n.nilai[4] << n.ipk << "Teknik Informatika" << endl;
   		}
 	k++
 	}
 	
  file.close();
}
