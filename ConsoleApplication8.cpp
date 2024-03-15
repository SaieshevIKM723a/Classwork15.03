// 1 Завдання
#include <iostream>

int main() {
    using namespace std;
    
    int massiv[] = { 1, 2, 3, 4, 5 };
    int massivsize = sizeof(massiv) / sizeof(massiv[0]); 

    
    int sum = 0;
    for (int i = 0; i < massivsize; i++) {
        sum += massiv[i];
    }

    
    cout << "Сума елементів масиву: " << sum << endl;

    return 0;
}

#include <iostream>
#include <climits>
int main() {
    using namespace std;
    int massiv[] = { 5, 2, 8, 1, 6 };
    int massivsize = sizeof(massiv) / sizeof(massiv[0]);

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < massivsize; i++) {
        if (massiv[i] < min) {
            min = massiv[i];
        }
        if (massiv[i] > max) {
            max = massiv[i];
        }
    }

    cout << "Min element: " << min << endl;
    cout << "Max element: " << max << endl;

    return 0;
}

#include <iostream>

int main() {
    using namespace std;
    int massiv[] = { 1, 2, 3, 4, 5 };
    int massivsize = sizeof(massiv) / sizeof(massiv[0]);

    double average = 0;
    for (int i = 0; i < massivsize; i++) {
        average += massiv[i];
    }
    average /= massivsize;

    cout << "Average value of elements: " << average << endl;

    return 0;
}
#include <iostream>

int main() {
    using namespace std;
    int massiv[] = { 1, 2, 3, 4, 5 };
    int massivsize = sizeof(massiv) / sizeof(massiv[0]);
    int elementToFind = 3;
    bool found = false;
    for (int i = 0; i < massivsize; i++) {
        if (massiv[i] == elementToFind) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "Element found." << endl;
    }
    else {
        cout << "Element not found." << endl;
    }
    return 0;

#include <iostream>
#include <algorithm>

    int main(){
        using namespace std;
        int massiv[] = { 5, 3, 1, 4, 2 };
        int massivsize = sizeof(massiv) / sizeof(massiv[0]);
        sort(massiv, massiv + massivsize);
        cout << "sorted: ";

        for (int i = 0; i < massivsize; i++) {
            cout << massiv[i] << " ";
        }
        cout << endl;
        return 0;
    }

#include <iostream>

    int main() {
        using namespace std;
        int massiv[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int massivsize = sizeof(massiv) / sizeof(massiv[0]);

        int evenCount = 0;
        int oddCount = 0;

        for (int i = 0; i < massivsize; i++) {
            if (massiv[i] % 2 == 0) {
                evenCount++;
            }
            else {
                oddCount++;
            }
        }

        cout << "Paired numbers: " << evenCount << endl;
        cout << "Unpaired numbers: " << oddCount << endl;

        return 0;
    }

#include <iostream>
#include <unordered_map>
#include <vector>

    int main() {
        using namespace std;
        int massiv[] = { 1, 2, 3, 4, 2, 5, 6, 3, 7, 2 };
        int massivsize = sizeof(massiv) / sizeof(massiv[0]);

        unordered_map<int, int> frequencyMap;
        vector<int> duplicates;

        for (int i = 0; i < massivsize; i++) {
            frequencyMap[massiv[i]]++;
            if (frequencyMap[massiv[i]] == 2) {
                duplicates.push_back(massiv[i]);
            }
        }

        cout << "Repeated elements: " << endl;
        for (int num : duplicates) {
            cout << num << " ";
        }


        return 0;
    }

#include <iostream>
#include <unordered_set>

    int main() {
        using namespace std;
        int massiv[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int massivsize = sizeof(massiv) / sizeof(massiv[0]);
        int sum = 10;

        unordered_set<int> numSet;

        for (int i = 0; i < massivsize; i++) {
            int complement = sum - massiv[i];
            if (numSet.find(complement) != numSet.end()) {
                cout << "Pair elements with sum " << sum << ": " << massiv[i] << " " << complement << endl;
            }
            numSet.insert(massiv[i]);
        }

        return 0;
    }
    // Завдання 2
#include <iostream>

    int main() {
        using namespace std;
        const int p1 = 3;
        const int p2 = 3;

        int matrix[p1][p2] = { {1, 2, 3},
                                   {4, 5, 6},
                                   {7, 8, 9} };

        int transposed[p2][p1];

        for (int i = 0; i < p1; ++i) {
            for (int j = 0; j < p2; ++j) {
                transposed[j][i] = matrix[i][j];
            }
        }


        for (int i = 0; i < p2; ++i) {
            for (int j = 0; j < p1; ++j) {
                cout << transposed[i][j] << " " << endl;
            }

        }

        return 0;
    }
#include <iostream>

    int main() {
        using namespace std;
        const int size = 3;
        int matrix[size][size] = { {1, 2, 3},
                                   {4, 5, 6},
                                   {7, 8, 9} };

        int maind = 0;
        int sided = 0;

        for (int i = 0; i < size; ++i) {
            maind += matrix[i][i];
            sided += matrix[i][size - 1 - i];
        }

        cout << "Sum on main diagonal: " << maind << endl;
        cout << "Sum on side diagonal: " << sided << endl;

        return 0;
    }
#include <iostream>

    int main() {
        using namespace std;
        const int p1 = 3;
        const int p2 = 3;

        int matrix[p1][p2] = { {1, 2, 3},
                                   {4, 5, 6},
                                   {7, 8, 9} };

        int low = 3;
        int high = 6;

        for (int i = 0; i < p1; ++i) {
            for (int j = 0; j < p2; ++j) {
                if (matrix[i][j] >= low && matrix[i][j] <= high) {
                    cout << matrix[i][j] << " " << endl;
                }
            }
        }

        return 0;
    }

    //завдання 3
#include <iostream>

    int main() {
        using namespace std;
        int a = 5;
        int b = 10;


        a = a ^ b;
        b = a ^ b;
        a = a ^ b;

        cout << "a = " << a << endl;
        cout << "b = " << b << endl;

        return 0;
    }



