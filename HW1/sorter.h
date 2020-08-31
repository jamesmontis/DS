// sorter for arrays without using extra memory/no extra arrays


#ifndef DSLAB2_MONTISJ_SORTER_H
#define DSLAB2_MONTISJ_SORTER_H
using namespace std;

void sorter(int set1[], int set2[], int size1, int size2){

    int mindex, minvalue;
    int save;
    int j = size2;

    for (int i = size1 ; i > 0 ;i--, j-- ) {
        if (set2[j - 1] > set1[i - 1]) {
             set1[i - 1] = set2[j - 1];
            }
    }

    for (int i = 0 ; i < size1 ; i++){
        mindex = i;
        minvalue = set1[i];
    for (int j = i+1 ; j < size1 ; j++){
        if (set1[j] < minvalue){
             minvalue = set1[j];
             mindex = j;
    }
}
    swap(set1[mindex],set1[i]);
}

    cout << endl;

    for (int i = 0 ; i < size1 ; i++){
        cout << set1[i] << " ";
        }
    }

#endif //DSLAB2_MONTISJ_SORTER_H
