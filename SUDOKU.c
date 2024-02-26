#include <stdio.h>
#include <stdlib.h>

typedef struct list{
	int info;
	_Bool canChange;
	struct list* next;
	struct list* ant;
}ListD;
typedef struct file{
	ListD* start;
	ListD* end;
}File;

ListD* createList();
File* createFile();
ListD* insertEnd(ListD* L, int value, _Bool canChange);
void prints(File* F);
void concatenate(ListD* L1, ListD* L2);
void assemblesPuzzle(File* F);
int LookingForValueOnLine(File* F, int line, int value);
int LookingForValueOnColumn(int column, int value, File* F);
int LookForValueInQuadrant(int topLine, int endLine, int topColumn, int endColumn, int value, File* F);
int ValidQuadrant(int line, int column, int value, File* F);
void printMenu(File* F);
void WalksToTheCellAndInsert(File* F, int line, int column, int value);
void ValidateUserValue(int value);
void winner();

int main(){
	 File* F = createFile();	
		assemblesPuzzle(F);
		printMenu(F);
		void winner();
}

ListD* createList(){return NULL;}
File* createFile(){
	File* F = (File*)malloc(sizeof(File));
	F -> start = NULL;
	F -> end = NULL;
	return F;
}

ListD* insertEnd(ListD* L, int value, _Bool canChange){
	ListD* New = (ListD*)malloc(sizeof(ListD));
	ListD* aux;	
	New -> ant = NULL;
	New -> next = NULL;
	New -> info = value;
	New -> canChange = 0;
	if(L == NULL){
		return New;
	}else{
		aux = L;
		while(aux -> next != NULL)
			aux = aux -> next;
			aux -> next = New;
			New -> ant = aux;
	}
	return L;
}

void prints(File* F){
	ListD* aux = F -> start;
	ListD* t = aux -> ant;
	int i = 1;
	int line =0;
	printf("*******************************");
	printf("\n");
	while(aux != NULL){
		if(i == 1){
			printf("| %i ", aux -> info);
			aux = aux -> next;
			i++;
		}else if(i == 9){
			printf(" %i |", aux -> info);
			aux = aux -> next;
			i = 1;
		} else if (i == 4 || i == 7){
			printf("| %i ", aux -> info);
			aux = aux -> next;
			i++;
		}else{
			printf(" %i ", aux -> info);
			aux = aux -> next;
			i++;
		}
		if(t != NULL & aux == NULL){
			if(line == 5 || line == 2){
				printf("\n*******************************");
			}
			printf("\n");
			aux = t;
			t = aux -> ant;
			line++;
		}
	}
	printf("\n");
	printf("*******************************\n");
}

void concatenate(ListD* L1, ListD* L2){
	L1 -> ant = L2;
}

void assemblesPuzzle(File* F){

	ListD* L1 = createList();
	ListD* L2 = createList();
	ListD* L3 = createList();
	ListD* L4 = createList();
	ListD* L5 = createList();
	ListD* L6 = createList();
	ListD* L7 = createList();
	ListD* L8 = createList();
	ListD* L9 = createList();


	L1 = insertEnd(L1, 9, 0);
	L1 = insertEnd(L1, 7, 0);
	L1 = insertEnd(L1, 0, 1);
	L1 = insertEnd(L1, 0, 1);
	L1 = insertEnd(L1, 0, 1);
	L1 = insertEnd(L1, 6, 0);
	L1 = insertEnd(L1, 4, 0);
	L1 = insertEnd(L1, 5, 0);
	L1 = insertEnd(L1, 2, 0);

	L2 = insertEnd(L2, 6, 0);
	L2 = insertEnd(L2, 0, 1);
	L2 = insertEnd(L2, 5, 0);
	L2 = insertEnd(L2, 7, 0);
	L2 = insertEnd(L2, 4, 0);
	L2 = insertEnd(L2, 0, 1);
	L2 = insertEnd(L2, 8, 0);
	L2 = insertEnd(L2, 3, 0);
	L2 = insertEnd(L2, 0, 1);

	L3 = insertEnd(L3, 4, 0);
	L3 = insertEnd(L3, 8, 0);
	L3 = insertEnd(L3, 2, 0);
	L3 = insertEnd(L3, 3, 0);
	L3 = insertEnd(L3, 0, 1);
	L3 = insertEnd(L3, 0, 1);
	L3 = insertEnd(L3, 0, 1);
	L3 = insertEnd(L3, 1, 0);
	L3 = insertEnd(L3, 0, 1);

	L4 = insertEnd(L4, 5, 0);
	L4 = insertEnd(L4, 2, 0);
	L4 = insertEnd(L4, 0, 1);
	L4 = insertEnd(L4, 6, 0);
	L4 = insertEnd(L4, 7, 0);
	L4 = insertEnd(L4, 9, 0);
	L4 = insertEnd(L4, 0, 1);
	L4 = insertEnd(L4, 0, 1);
	L4 = insertEnd(L4, 3, 0);

	L5 = insertEnd(L5, 7, 0);
	L5 = insertEnd(L5, 3, 0);
	L5 = insertEnd(L5, 9, 0);
	L5 = insertEnd(L5, 0, 1);
	L5 = insertEnd(L5, 0, 1);
	L5 = insertEnd(L5, 0, 1);
	L5 = insertEnd(L5, 2, 0);
	L5 = insertEnd(L5, 8, 0);
	L5 = insertEnd(L5, 6, 0);

	L6 = insertEnd(L6, 1, 0);
	L6 = insertEnd(L6, 0, 1);
	L6 = insertEnd(L6, 0, 1);
	L6 = insertEnd(L6, 2, 0);
	L6 = insertEnd(L6, 8, 0);
	L6 = insertEnd(L6, 3, 0);
	L6 = insertEnd(L6, 0, 1);
	L6 = insertEnd(L6, 7, 0);
	L6 = insertEnd(L6, 5, 0);

	L7 = insertEnd(L7, 0, 1);
	L7 = insertEnd(L7, 9, 0);
	L7 = insertEnd(L7, 0, 1);
	L7 = insertEnd(L7, 0, 1);
	L7 = insertEnd(L7, 0, 1);
	L7 = insertEnd(L7, 7, 0);
	L7 = insertEnd(L7, 3, 0);
	L7 = insertEnd(L7, 2, 0);
	L7 = insertEnd(L7, 4, 0);

	L8 = insertEnd(L8, 0, 1);
	L8 = insertEnd(L8, 5, 0);
	L8 = insertEnd(L8, 4, 0);
	L8 = insertEnd(L8, 0, 1);
	L8 = insertEnd(L8, 2, 0);
	L8 = insertEnd(L8, 1, 0);
	L8 = insertEnd(L8, 7, 0);
	L8 = insertEnd(L8, 0, 1);
	L8 = insertEnd(L8, 8, 0);

	L9 = insertEnd(L9, 2, 0);
	L9 = insertEnd(L9, 6, 0);
	L9 = insertEnd(L9, 7, 0);
	L9 = insertEnd(L9, 4, 0);
	L9 = insertEnd(L9, 0, 1);
	L9 = insertEnd(L9, 0, 1);
	L9 = insertEnd(L9, 0, 1);
	L9 = insertEnd(L9, 9, 0);
	L9 = insertEnd(L9, 1, 0);

	concatenate(L1, L2);
	concatenate(L2, L3);
	concatenate(L3, L4);
	concatenate(L4, L5);
	concatenate(L5, L6);
	concatenate(L6, L7);
	concatenate(L7, L8);
	concatenate(L8, L9);
	F -> start = L1;
	F -> end = L9;

}

int LookingForValueOnLine(File* F, int line, int value){
	int l = 1;
	ListD* aux = F -> start;
	ListD* ant = aux -> ant;
	while(l < line){
		aux = ant;
		ant = aux -> ant;
		l++;
	}
	while(aux != NULL){
		if(aux -> info == value) {
			printf("\nEqual value in LINE\n");
			return 0;
		}
		aux = aux -> next;
	}
	return 1;
}

int LookingForValueOnColumn(int column, int value, File* F){
	int StopCriterion = 1;
	int ToTheColumn = 1;
	ListD* aux = F -> start;
	ListD* ant = aux -> ant;
	for(StopCriterion = 1; StopCriterion < 9; StopCriterion++){
		int i = 1;
		while(i < column){
			aux = aux -> next;
			i++;
		}
		if(aux -> info == value){
			printf("\nEqual value in COLUMN\n");
			return 0;
		} else {
			aux = ant;
			ant = aux -> ant;
		}
	}
	return 1;
}

int LookForValueInQuadrant(int topLine, int endLine, int topColumn, int endColumn, int value, File* F){
	int startline = 1;
	int endline = 1;
	int startcolumn = 1;
	int endcolumn = 1;
	ListD* aux = F -> start;
	ListD* ant = aux -> ant;
	while(startline < topLine){
		aux = ant;
		ant = aux -> ant;
		startline++;
	}
	while(startcolumn < topColumn){
		aux = aux -> next;
		startcolumn++;
	}
	int i = 1;
	do{
		for(int j = 1; j <= 3; j++){
			if(aux -> info == value ){
				printf("\nValue found in the QUADRANT\n");
				return 0;
			} else {
				aux = aux -> next;
			}
			if(j == 3){
				if(ant != NULL){
					aux = ant;
					ant = aux -> ant;
					startcolumn = 1;
				}
				while(startcolumn < topColumn){
					aux = aux -> next;
					startcolumn++;
				}
			}
		}
		i++;
	} while(i <=3);
	return 1;
}

int ValidQuadrant(int line, int column, int value, File* F){
	int valid = 1;
	if(line <= 3 && column <= 3){
		valid = LookForValueInQuadrant(1,3,1,3, value, F);
	} else if(line <= 3 && column >= 4 && column <= 6){
		valid = LookForValueInQuadrant(1,3,4,6, value, F);
	} else if(line <= 3 && column >= 7 && column <= 9){
		valid = LookForValueInQuadrant(1,3,7,9, value, F);
	}
	if(line >= 4 && line <= 6  && column <= 3){
		valid = LookForValueInQuadrant(4,6,1,3, value, F);
	} else if(line >= 4  && line <= 6 && column >= 4 && column <= 6){
		valid = LookForValueInQuadrant(4,6,4,6, value, F);
	} else if(line >= 4  && line <= 6 && column >= 7 && column <= 9){
		valid = LookForValueInQuadrant(4,6,7,9, value, F);
	}
	if(line >= 7 && line <= 9 && column <= 3){
		valid = LookForValueInQuadrant(7,9,1,3, value, F);
	} else if(line >= 7 && line <= 9 && column >= 4 && column <= 6){
		valid = LookForValueInQuadrant(7,9,4,6, value, F);
	} else if(line >= 7 && line <= 9 && column >= 7 && column <= 9){
		valid = LookForValueInQuadrant(7,9,7,9, value, F);
	}
	if(valid != 0){
		return 1;
	} else{
		return 0;
	}
}

void ValidateUserValue(int value){
	while(value <= 0 || value >= 10){
		printf("\nInvalid value, enter a value between 1 and 9:-");
		printf("\n");
		scanf("%d", &value);
	}
}

void printMenu(File* F){
	int line = 0;
	int column = 0;
	int value = 0;

	prints(F);
	printf("\nEnter the Line:-");
	scanf("%d", &line);
		ValidateUserValue(line);
	printf("\nEnter the Column:-");
	scanf("%d", &column);
		ValidateUserValue(column);
	printf("\nReport or Number [1-9]:-");
	scanf("%d", &value);
		ValidateUserValue(value);
	WalksToTheCellAndInsert(F, line, column, value);		
}

void WalksToTheCellAndInsert(File* F, int line, int column, int value){
	int l = 1;
	int c = 1;
	ListD* aux = F -> start;
	ListD* ant = aux -> ant;
	while(l < line){
		aux = ant;
		ant = aux -> ant;
		l++;
	}
	while(c < column){
		aux = aux -> next;
		c++;
	}
	int ValueInTheColumn = LookingForValueOnColumn(column, value, F);
	int ValueInTheLine = LookingForValueOnLine(F, line, value);
	int ValueInTheQuadrant = ValidQuadrant(line, column, value, F);
	if(ValueInTheLine == 0 || ValueInTheColumn == 0 || ValueInTheQuadrant == 0){
		printf("\nValue cannot be entered as it violates the rules of the game\n");
		printMenu(F);
		return;
	} else if(aux -> canChange == 1){
		printf("\nIt is not possible to insert in this position.\n");
		printMenu(F);
		return;
	} else {
		aux -> info = value;
		printMenu(F);
		return;
	}
}

void winner()
{
	printf("Game completed successfully");
}
