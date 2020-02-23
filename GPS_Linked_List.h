
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
    float get_y();
    float get_x();
    int get_count();
    GPS_LL_node();
    ~GPS_LL_node();
    void add_front();
    void remove_front();
    void clr();
    void find_nth_node(int x);
};

#endif
