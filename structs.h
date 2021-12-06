#ifndef PRACTICE_STRUCTS_H
#define PRACTICE_STRUCTS_H
int const M{4};
struct Subject{
    char name_of_sub[M*4]{};
    int mark_for_sub{};
};
struct Info{
    char name[M*2]{};
    char last_name[M*3]{};
    char patronymic[M*3]{};
    char course[M]{};
    char group[M*2]{};
    char year_of_ent[M+1]{};
    Subject sub1;
    Subject sub2;
    Subject sub3;
    Subject sub4;
    Subject sub5;
};
enum items{
    FROM_KEYBOARD = 1,
    FROM_FILE, // item 2
    FROM_BIN_FILE, // item 3
    SCREEN_OUTPUT, // item 4
    FILE_OUTPUT, // item 5
    REQUEST, // item 6
    DATA_TO_TEXT, // item 7
    TEXT_TO_BIN, // item 8
    ADD, // item 9
    CHANGE, // item 10
    DEL, // item 11
    SORT, // item 12
    EXIT, // item 13
};
#endif //PRACTICE_STRUCTS_H
