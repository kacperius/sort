#include <iostream>
using namespace std;
int sort_me[] = {5,3,6,7,4,8,6,5,0};

int main() {
    int size = sizeof(sort_me) / sizeof(int);
    for(int i = 0; i < size - 1; i++){
        for(int k = 0; k < size - i - 1; k++){
            if(sort_me[k] > sort_me[k+1]){
                int roznica = sort_me[k] - sort_me[k+1];
                sort_me[k] = sort_me[k+1];
                sort_me[k+1] = sort_me[k] + roznica;
            }
        }
    }
    for(int j = 0; j < size; j++){
        cout << sort_me[j] << "\n";
    }
    return 0;
}