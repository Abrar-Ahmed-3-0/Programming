#include<bits/stdc++.h>
using namespace std;

struct FoodPair {
    string animal, food;
};

int read_integer(string message, int minimum, int maximum) {
    int number;
    do {
        cerr << message;
        cin >> number;
    } while (number < minimum || number > maximum);
    return number;
}

void read_input(int& N, FoodPair pairs[]) {
    N = read_integer("Number of pairs: ", 1, 30);
    for (int i = 0; i < N; i++) {
        cerr << "Animal and food of the pair nr. " << i + 1 << ": ";
        cin >> pairs[i].animal >> pairs[i].food;
    }
}

bool is_included(string item, string predators[], int cnt) {
    for (int j = 0; j < cnt; j++) {
        if (predators[j] == item) {
            return true;
        }
    }
    return false;
}

bool is_animal(string item, FoodPair pairs[], int N) {
    for (int j = 0; j < N; j++) {
        if (item == pairs[j].animal) {
            return true;
        }
    }
    return false;
}

void select_predators(FoodPair pairs[], int N, string predators[], int& cnt) {
    // Multiple item selection
    cnt = 0;
    for (int i = 0; i < N; i++) {
        if (is_animal(pairs[i].food, pairs, N) && !is_included(pairs[i].animal, predators, cnt)) {
            // current animal is a predator that is not yet in the output
            predators[cnt] = pairs[i].animal;
            cnt++;
        }
    }
}

void print_output(int cnt, string predators[]) {
    cerr << "Number of animals eating other animals: ";
    cout << cnt << endl;
    cerr << "List of animals eating other animals:\n";
    for (int i = 0; i < cnt; i++) {
        cout << predators[i] << endl;
    }
}

int main()
{
    FoodPair pairs[30];
    int N;
    read_input(N, pairs);
    
    string predators[30];
    int cnt;
    select_predators(pairs, N, predators, cnt);

    print_output(cnt, predators);
    return 0;
}

/*
7
fox partridge
fox blackbird
partridge earthworm
snail grass
blackbird snail
earthworm leaflitter
blackbird grain
*/
