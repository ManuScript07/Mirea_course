
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Структура для хранения свободного интервала
struct Interval {
    int left;
    int right;

    // Размер интервала
    int size() const {
        return right - left + 1;
    }

    // Позиция середины
    int middle() const {
        int sz = size();
        if (sz % 2 == 0) {
            // Для четного размера берем левую середину
            return left + sz / 2 - 1;
        }
        return left + sz / 2;
    }
};

pair<int, int> solve(int N, int K) {
    if (K < 1 || K > N || N > 1e18) {
        return { 0, 0 };
    }

    // Изначально у нас один интервал свободных мест между персоналом
    vector<bool> seats(N + 2, false);
    seats[0] = seats[N + 1] = true;  // места персонала

    int lastPos = -1;  // позиция последнего севшего школьника

    // Размещаем K школьников
    for (int i = 0; i < K; i++) {
        // Находим самый большой свободный интервал
        Interval maxInterval = { 0, 0 };
        int currentLeft = -1;

        for (int j = 0; j <= N + 1; j++) {
            if (seats[j]) {
                if (currentLeft != -1) {
                    Interval current = { currentLeft, j - 1 };
                    if (current.size() > maxInterval.size()) {
                        maxInterval = current;
                    }
                }
                currentLeft = -1;
            }
            else if (currentLeft == -1) {
                currentLeft = j;
            }
        }

        // Если нашли интервал, сажаем школьника
        if (maxInterval.size() > 0) {
            lastPos = maxInterval.middle();
            seats[lastPos] = true;
        }
    }

    // Считаем свободные места слева и справа от последнего школьника
    if (lastPos == -1) return { 0, 0 };

    int leftCount = 0, rightCount = 0;

    // Считаем свободные места слева
    for (int i = lastPos - 1; i >= 0 && !seats[i]; i--) {
        leftCount++;
    }

    // Считаем свободные места справа
    for (int i = lastPos + 1; i < N + 2 && !seats[i]; i++) {
        rightCount++;
    }

    return { leftCount, rightCount };
}

int main() {
    int N, K;
	cout<<"n = ";
    cin >> N;
	cout<<"k = "; 
	cin >> K;

    auto result = solve(N, K);
    cout << result.first << endl << result.second << endl;

    return 0;
}