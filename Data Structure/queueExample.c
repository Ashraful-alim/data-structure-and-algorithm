
#include <stdio.h>
#define SIZE 5

int items[SIZE];
int front = -1;
int rear = -1;

void enQueue(int value){
    
    if (rear == SIZE -1) printf("\nQueue is FULL");
    else {
        if (front == -1){
            front = 0;
        }
        rear++;
        
        items[rear] = value;
        printf("\nInserted -> %d", value);
    }
}

void deQueue(){
    if(front == -1) printf("\n O mago! Queue is EMTPY!");
    else {
        printf("Deleted items: ", items[front]);
        front++;
        if (front > rear){
            front = rear = -1;
        }
    }
}

void display(){
    if (rear == -1) printf("\n O mago! Queue is EMTPY!");
    else {
        int i;
        printf("\nQueue elements:\n");
        for(i=front; i<=rear; i++){
            printf("%d ", items[i]);
        }
    }
    printf("\n");
}

int main(){
    
    deQueue();

    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);

  //6th element can't be added to queue because queue is full
  enQueue(6);

  display();

  //deQueue removes element entered first i.e. 1
  deQueue();

  //Now we have just 4 elements
  display();

  return 0;
}
