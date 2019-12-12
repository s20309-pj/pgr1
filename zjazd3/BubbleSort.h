
#ifndef ZJAZD3_BUBBLESORT_H
#define ZJAZD3_BUBBLESORT_H


class BubbleSort {

public:
    int bubbleSort() {
        int n = 20;
        srand((int) time(NULL));
        int tab[n];

        for (int i = 0; i < 20; i++) {
            tab[i] = rand() % 20 + 1;

        }

        do {
            for (int i = 0; i < n - 1; i++) {
                if (tab[i] > tab[i + 1]) {
                    int temp;
                    temp = tab[i];
                    tab[i] = tab[i + 1];
                    tab[i + 1] = temp;
                }
            }
            n -= 1;

        } while (n > 1);

        for (int i = 0; i < 20; i++)
            cout << "Index: " << i << " [" << tab[i] << "]" << endl;
    }
};


#endif //ZJAZD3_BUBBLESORT_H
