#include <QCoreApplication>
#include <stdio.h>



class Solution{

public:
    int nthSmallest(int *input, int size,int m) {
        int sorted = 0;
        int temp;

        for(int i=0; i<size; i++) {
            for(int j=1; j<size-sorted; j++) {
                if(input[j-1] > input[j]) {
                    temp = input[j-1];
                    input[j-1] = input[j];
                    input[j] = temp;
                }
            }
            sorted++;
        }

        return input[m-1];
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Solution sol;

    int input[] = {10, 2, 5, 6, 11, 15, 3, 2};
    int m = 2;

    printf("%d. smallest :%d\n",m, sol.nthSmallest(input, sizeof(input)/sizeof(input[0]), m));
    printf("Test\n");
    printf("Test2\n");

    return 0;//a.exec();
}



