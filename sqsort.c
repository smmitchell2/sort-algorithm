#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"
#include "stack.h"
#include "queue.h"
#include "integer.h"
#include "real.h"
#include "comparator.h"

void displayString(FILE *fp,void *v){
  fprintf(fp,"\"%s\"",(char*)v);
}

queue *commandlineOptionHandler(char option){
  queue *q = NULL;
  switch (option) {
    case 'r':
      q = newQueue(displayReal);
      double d = readReal(stdin);
      while(!feof(stdin)){
        enqueue(q,newReal(d));
        d = readReal(stdin);
      }
      break;
    case 'd':
      q = newQueue(displayInteger);
      int i = readInt(stdin);
      while(!feof(stdin)){
        enqueue(q,newInteger(i));
        i = readInt(stdin);
      }
      break;
    case 's':
      q = newQueue(displayString);
      char *s = readString(stdin);
      while(!feof(stdin)){
        enqueue(q,(void*)s);
        s = readString(stdin);
      }
      break;
    case 'v':
      fprintf(stdout, "Shawn Mitchell\n");
      exit(1);
    default :
      fprintf(stdout, "Unknown flag, valid flags are -v, -d, -r, and -s\n" );
      exit(1);
  }
  return q;
}

queue *fileOptionHandler(char option,char *fileToRead){
  FILE *fp;
  queue *q = NULL;
  switch (option) {
    case 'r':
      q = newQueue(displayReal);
      fp = fopen(fileToRead,"r");
      double d = readReal(fp);
      while(!feof(fp)){
        enqueue(q,newReal(d));
        d = readReal(fp);
      }
      break;
    case 'd':
      q = newQueue(displayInteger);
      fp = fopen(fileToRead,"r");
      int i = readInt(fp);
      while(!feof(fp)){
        enqueue(q,newInteger(i));
        i = readInt(fp);
      }
      break;
    case 's':
      q = newQueue(displayString);
      fp = fopen(fileToRead,"r");
      char *s = readString(fp);
      while(!feof(fp)){
        enqueue(q,(void*)s);
        s = readString(fp);
      }
      break;
    case 'v':
      fprintf(stdout, "Shawn Mitchell\n");
      exit(1);
    default :
      fprintf(stdout, "Unknown flag, valid flags are -v, -d, -r, and -s\n" );
      exit(1);
  }
  return q;
}

void sqsort(queue *inQ,char option){
  Comparator comp = NULL;
  switch (option) {
    case 'r':
      comp = realComp;
      break;
    case 'd':
      comp = intComp;
      break;
    case 's':
      comp = stringComp;
      break;
  }
  queue *outQ = newQueue(inQ->list->display);
  stack *st = newStack(inQ->list->display);
  int b = 0;
	int onlyOnce = 0;
	while(1){
		b = 0;
		int size = sizeQueue(inQ);
		void *lastIn = NULL;

		for(int i = 0; i < size; i++){
			if(i == size-1){
				int tempSize = sizeStack(st);
				for(int i = 0; i < tempSize; i++){
					if(comp(peekQueue(inQ), peekStack(st)) < 0){
						enqueue(outQ, pop(st));
						//break;
					}
				}
				push(st, dequeue(inQ));
				break;
			}
			void *temp = peekQueue(inQ);
			if(sizeStack(st) != 0 && lastIn != NULL){
				void *temp2 = peekStack(st);
				if(comp(lastIn, temp) >= 0 && comp(lastIn, temp2) >= 0 && comp(temp2, temp) >= 0){
					enqueue(outQ, pop(st));
					i--;
					continue;
				}
			}
			temp = dequeue(inQ);
			void *temp1 = peekQueue(inQ);
			if(comp(temp, temp1) >= 0){
				enqueue(outQ, temp);
				lastIn = temp;
				b++;
			}
			else if(comp(temp, temp1) < 0){
				push(st, temp);
			}
		}
		int sizestack = sizeStack(st);
		for(int i = 0; i < sizestack; i++){
			enqueue(outQ, pop(st));
		}

		for(int i = 0; i < size; i++){
			enqueue(inQ, dequeue(outQ));
		}
		onlyOnce++;
		if(size-1 <= b){
			break;
		}
		printf("\n");
		displayQueue(stdout, inQ);
	}
	if(onlyOnce == 1){
		printf("\n");
		displayQueue(stdout, inQ);
	}
	printf("\n");
}

int main(int argc, char *argv[]) {
  queue *q;
  if (argc == 2) {
    q = commandlineOptionHandler(argv[1][1]);
    displayQueue(stdout,q);
    sqsort(q,argv[1][1]);
  }
  if (argc == 3) {
    q = fileOptionHandler(argv[1][1],argv[2]);
    displayQueue(stdout,q);
    sqsort(q,argv[1][1]);
  }
  return 0;
}
