#include "_6_sixth_task.h"

void swap(int& var1, int& var2){
    int temp = var1;
    var1 = var2;
    var2 = temp;
}

void sixth_task(){
    int var1, var2, var3;
    cout << "Enter three integer values: ";
    cin >> var1 >> var2 >> var3;

    if(var1 > var3){
        swap(var1, var3);
    }
    if(var1 > var2){
        swap(var1, var2);
    }
    if(var2 > var3){
        swap(var2, var1);
    }

    cout << "The ordered values are: " << var1 << ", " << var2 << ", " << var3 << ";" << endl;
}