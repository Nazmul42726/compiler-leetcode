//Submission Link: https://leetcode.com/problems/min-stack/submissions/1904919818/

const int initialCapacity = 10;

typedef struct {
    int* st;
    int* minSt;
    int top;
    int minTop;
    int cap;
} MinStack;


MinStack* minStackCreate() {
    MinStack* obj = (MinStack*) malloc(sizeof(MinStack));
    obj->cap = initialCapacity;
    obj->top = -1;
    obj->minTop = -1;
    obj->st = (int*) malloc(sizeof(int) * obj->cap); 
    obj->minSt = (int*) malloc(sizeof(int) * obj->cap); 

    return obj;
}

void minStackPush(MinStack* obj, int val) {
    if(obj->top + 1 == obj->cap){
        obj->cap += initialCapacity;
        obj->st = (int*) realloc(obj->st, sizeof(int) * obj->cap);
        obj->minSt = (int*) realloc(obj->minSt, sizeof(int) * obj->cap);
    }
    obj->st[++obj->top] = val;

    if(obj->minTop == -1 || obj->minSt[obj->minTop] >= val){
        obj->minSt[++obj->minTop] = val;
    }
}

void minStackPop(MinStack* obj) {
    if(obj->top == -1) return;

    int removed = obj->st[obj->top--];
    if(removed == obj->minSt[obj->minTop]){
        obj->minTop--;
    }
}

int minStackTop(MinStack* obj) {
    return obj->st[obj->top];
}

int minStackGetMin(MinStack* obj) {
    return obj->minSt[obj->minTop];
}

void minStackFree(MinStack* obj) {
    free(obj->st);
    free(obj->minSt);
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, val);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
