//
// Created by aleca on 2/19/2020.
//

#ifndef GPS_LINKED_LIST
#define GPS_LINKED_LIST


class GPS_LL_node {

private:
    GPS_LL_node* next;

    float x;
    float y;
    int count;

    GPS_LL_node* head;
    GPS_LL_node* back;

public:
    GPS_LL_node();
    ~GPS_LL_node();
    void add_front();
    void remov();
    void clr();
};

#endif
