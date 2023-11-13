#include "include/Element.h"
#include "include/Queue.h"
#include "include/Stack.h"

int main ()
{
    Element e1, e2, e3, e4, e5;

    e1.value = 10;
    e2.value = 20;
    e3.value = 30;
    e4.value = 40;
    e5.value = 50;

    /******************** QUEUE ********************/
    std::cout << std::endl << "/******************** QUEUE ********************/" << std::endl;
    Queue q;
    q.Put(&e2);
    q.Put(&e3);
    q.Put(&e1);
    q.Put(&e5);
    q.Put(&e4);

    q.Get();
    q.Get();
    q.Print();
    // Printing product
    q.PrintProduct();
    q.PrintProductThree();
    // Printing sum
    q.PrintSum();
    q.PrintSumThree();
    q.PrintSumEven();

    /******************** STACK ********************/
    std::cout << std::endl << "/******************** STACK ********************/" << std::endl;
    Stack s;
    s.Push(&e2);
    s.Push(&e3);
    s.Push(&e1);
    s.Push(&e5);
    s.Push(&e4);
    // Printing product
    s.PrintProduct();
    s.PrintProductThree();
    // Printing sum
    s.PrintSum();
    s.PrintSumOdd();
    s.PrintSumThree();

    getchar();
}
