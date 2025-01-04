#pragma once

class Date {
    int year_;
    int month_;  // 1 ���� 12 ����.
    int day_;    // 1 ���� 31 ����.

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

    // �ش� ���� �� �� ���� ���Ѵ�.
    int GetCurrentMonthTotalDays(int year, int month);

    void ShowDate();
};