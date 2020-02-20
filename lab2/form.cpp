//
// Created by vlad on 20.02.2020.
//

void form(int *a,  int n, int *b) {
    int g = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            b[g] = a[i];
            g++;

        } else {
            g++;
        }
    }
}
