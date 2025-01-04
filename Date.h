#pragma once

class Date {
    int year_;
    int month_;  // 1 부터 12 까지.
    int day_;    // 1 부터 31 까지.

public:
    Date() {
        year_ = 2025;
        month_ = 1;
        day_ = 4;
    }
    Date(int year, int month, int day) {
        year_ = year;
        month_ = month;
        day_ = day;
    }
    void SetDate(int year, int month, int date);
    void AddDay(int inc);
    void AddMonth(int inc);
    void AddYear(int inc);

    // 해당 월의 총 일 수를 구한다.
    int GetCurrentMonthTotalDays(int year, int month);

    void ShowDate();
};