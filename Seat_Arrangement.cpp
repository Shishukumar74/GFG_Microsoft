bool solve(int n, vector<int>& seats) {
    int available_seats = 0;
    int curr = 1;
    for (int i = 0; i < seats.size(); i++) {
        if (seats[i] == 0) {
            curr++;
        } else {
            available_seats += (curr - 1) / 2;
            curr = 0;
        }
    }
    available_seats += curr / 2;
    return n <= available_seats;
}