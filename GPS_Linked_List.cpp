

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
GPS_LL_node::remove_front(){
  
 string msg = "empty_list, Cannot remove"
     
    if (head == NULL)
  {
     return msg;
  }
    else if (front == back)
    {
        delete front;
        front = NULL;
        back = NULL;
    }
    else
    {
       GPS_LL_node* current = front;
       front = current ->next;
       delete current;
    }
}
GPS_LL_node::clr(){
        
}
GPS_LL_node::find_nth_node(int index){
    int rcount = 0;
    GPS_LL_node* current = front;
    
    while(current != NULL)
    {
     if (count == index)
         return current->data;
     else
     {  
         count++;
         current = current ->next;
     }
    }
}
