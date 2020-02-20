//
// Created by aleca on 2/19/2020.
//

#include "GPS_Linked_List.h"

GPS_LL_node::GPS_LL_node(){
    count = -1;

}

GPS_LL_node::~GPS_LL_node(){
    if(count > -1)
        clr();
}
GPS_LL_node::add_front(GPS.data()){
GPS_LL_node* new  = new GPS_LL_node();

if(head == NULL)
{
head = NULL;
back = NULL;
}
else
{
new->next = head;
head = new;
}

}
GPS_LL_node::remov(){

}
GPS_LL_node::clr(){

}

